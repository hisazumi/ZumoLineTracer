/*----------------------------------------------------------------------------
 * File:  LineTracer.c
 *
 * UML Component Port Messages
 * Component/Module Name:  LineTracer
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "ZumoLineTracer_sys_types.h"
#include "LineTracer.h"
#include "Zumo_bridge.h"
#include "TIM_bridge.h"
#include "LineTracer_classes.h"

/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  bumper
 */
void
LineTracer_bumper()
{
  LineTracer_LineTracer * lt=0;
  /* SELECT any lt FROM INSTANCES OF LineTracer */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any lt FROM INSTANCES OF LineTracer" );
  lt = (LineTracer_LineTracer *) Escher_SetGetAny( &pG_LineTracer_LineTracer_extent.active );
  /* GENERATE LineTracer4:bumper() TO lt */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE LineTracer4:bumper() TO lt" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( lt, &LineTracer_LineTracerevent4c );
    Escher_SendEvent( e );
  }
}

/*
 * Domain Function:  offline
 */
void
LineTracer_offline()
{
  LineTracer_LineTracer * lt=0;
  /* SELECT any lt FROM INSTANCES OF LineTracer */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any lt FROM INSTANCES OF LineTracer" );
  lt = (LineTracer_LineTracer *) Escher_SetGetAny( &pG_LineTracer_LineTracer_extent.active );
  /* GENERATE LineTracer3:offline() TO lt */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE LineTracer3:offline() TO lt" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( lt, &LineTracer_LineTracerevent3c );
    Escher_SendEvent( e );
  }
}

/*
 * Domain Function:  online
 */
void
LineTracer_online()
{
  LineTracer_LineTracer * lt=0;
  /* SELECT any lt FROM INSTANCES OF LineTracer */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any lt FROM INSTANCES OF LineTracer" );
  lt = (LineTracer_LineTracer *) Escher_SetGetAny( &pG_LineTracer_LineTracer_extent.active );
  /* GENERATE LineTracer2:online() TO lt */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE LineTracer2:online() TO lt" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( lt, &LineTracer_LineTracerevent2c );
    Escher_SendEvent( e );
  }
}

/*
 * Domain Function:  pushed
 */
void
LineTracer_pushed()
{
  LineTracer_LineTracer * lt=0;
  /* SELECT any lt FROM INSTANCES OF LineTracer */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any lt FROM INSTANCES OF LineTracer" );
  lt = (LineTracer_LineTracer *) Escher_SetGetAny( &pG_LineTracer_LineTracer_extent.active );
  /* GENERATE LineTracer5:pushed() TO lt */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE LineTracer5:pushed() TO lt" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( lt, &LineTracer_LineTracerevent5c );
    Escher_SendEvent( e );
  }
}

/*
 * Domain Function:  setup
 */
void
LineTracer_setup()
{
  LineTracer_Button * button;LineTracer_LineTracer * lt;
  /* CREATE OBJECT INSTANCE lt OF LineTracer */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE lt OF LineTracer" );
  lt = (LineTracer_LineTracer *) Escher_CreateInstance( LineTracer_DOMAIN_ID, LineTracer_LineTracer_CLASS_NUMBER );
  /* CREATE OBJECT INSTANCE button OF Button */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE button OF Button" );
  button = (LineTracer_Button *) Escher_CreateInstance( LineTracer_DOMAIN_ID, LineTracer_Button_CLASS_NUMBER );
  /* GENERATE Button2:init() TO button */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Button2:init() TO button" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( button, &LineTracer_Buttonevent2c );
    Escher_SendEvent( e );
  }
}
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const LineTracer_class_info[ LineTracer_MAX_CLASS_NUMBERS ] = {
  &pG_LineTracer_LineTracer_extent,
  &pG_LineTracer_Button_extent
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t LineTracer_EventDispatcher[ LineTracer_STATE_MODELS ] = {
  LineTracer_class_dispatchers
};

void LineTracer_execute_initialization()
{
  /*
   * Initialization Function:  setup
   * Component:  LineTracer
   */
  LineTracer_setup();

}
