#include <kernel.h>
#include <t_syslog.h>
#include "kernel_cfg.h"
#include "app.h"

#include "mbed.h"

#include "app_config.h"

#include "Zumo.h"

#include "ZumoLineTracer_sys_types.h"
#include "LineTracer_classes.h"

#include "LineTracer.h"

Zumo zumo;
Serial pc(USBTX, USBRX);
DigitalIn pushButton(D12);

#define LENGTH(ary) (sizeof(ary)/sizeof(ary[0]))

static int average(short int d[], int N) {
    int i, s=0;
    for (i=0 ; i<N ; i++) {
        s += d[i];
    }
    return s/N;
}

static short xs[5];
static IrBitField_T prev_ir;

static void init () {
    // hit
    int i;
    for (i=0 ; i<LENGTH(xs) ; i++) {
        xs[i] = 150;
    }

    // ir
    IrBitField_T ir;
    zumo.readIr(ir);
    prev_ir = ir;
}

static void detect_hit () {
    static int current = 0;
    short x, y, z;

    zumo.getAcceleration(&x, &y, &z);
    xs[current++] = x;

    if (current >= LENGTH(xs)) {
        syslog (LOG_NOTICE, "acc: %d %d %d", x, y, z);
        current = 0;
    }

    if (average (xs, LENGTH(xs)) < -500) {
        syslog (LOG_NOTICE, "hit!");
        LineTracer_bumper();
    }
}

static void detect_ir () {
    IrBitField_T ir;
    zumo.readIr(ir);

    if (ir.center != prev_ir.center) {
        if (ir.center == 0) {
            LineTracer_offline();
        } else {
            LineTracer_online();
        }
    }

    prev_ir = ir;
}

static void detect_button () {
    static int previous = 1;

    int current = pushButton;
    if (current != previous) {
      previous = current;
      syslog (LOG_NOTICE, "pushed");
      LineTracer_pushed ();
    }
}

void task_sensing(intptr_t exinf) {
  init ();
  dly_tsk(300);

  while (1) {
    detect_ir ();
    detect_hit ();
    detect_button ();
    dly_tsk(100);
  }
}

/*
 * Run application level initialization by initializing the
 * collection of instances for each class and calling domain
 * specific initialization.
 */
static void ApplicationLevelInitialization( void );
static void ApplicationLevelInitialization( void )
{
  Escher_DomainNumber_t d;
  Escher_ClassNumber_t c;

  static const Escher_ClassNumber_t domain_class_count[ SYSTEM_DOMAIN_COUNT ] = {
    LineTracer_MAX_CLASS_NUMBERS
  };
  for ( d = 0; d < SYSTEM_DOMAIN_COUNT; d++ ) {
    for ( c = 0; c < domain_class_count[ d ]; c++ ) {
      Escher_ClassFactoryInit( d, c );
    }
  }
}

/*
 *
 * main (although perhaps under a different name)
 *
 * Bring the system up and start the event dispatch loops.
 * Make invocations to the user hooks during the different phases
 * of bringup, run and shutdown.
 *
 */
void task_main(intptr_t exinf) {
  pc.baud(115200);
  dly_tsk(500);
  UserInitializationCallout();
  Escher_SetFactoryInit( SYS_MAX_CONTAINERS );
  InitializeOoaEventPool();
  ApplicationLevelInitialization();
  UserPreOoaInitializationCallout();
  LineTracer_execute_initialization();
  UserPostOoaInitializationCallout();
  Escher_xtUML_run();
  UserPreShutdownCallout();
  UserPostShutdownCallout();
}
