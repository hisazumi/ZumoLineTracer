/*----------------------------------------------------------------------------
 * File:  LineTracer_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  LineTracer
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef LINETRACER_CLASSES_H
#define LINETRACER_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  LineTracer
 */
extern Escher_Extent_t * const LineTracer_class_info[];
extern const EventTaker_t LineTracer_EventDispatcher[];
void LineTracer_execute_initialization( void );

#define LineTracer_STATE_MODELS 2
/* Define constants to map to class numbers.  */
#define LineTracer_LineTracer_CLASS_NUMBER 0
#define LineTracer_Button_CLASS_NUMBER 1
#define LineTracer_MAX_CLASS_NUMBERS 2

/* Provide a map of classes to task numbers.  */
#define LineTracer_TASK_NUMBERS  0, 0

#define LineTracer_class_dispatchers\
  LineTracer_LineTracer_Dispatch,\
  LineTracer_Button_Dispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct LineTracer_LineTracer LineTracer_LineTracer;
typedef struct LineTracer_Button LineTracer_Button;

/* union of class declarations so we may derive largest class size */
#define LineTracer_CLASS_U \
  char LineTracer_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void LineTracer_bumper( void );
void LineTracer_offline( void );
void LineTracer_online( void );
void LineTracer_pushed( void );
void LineTracer_setup( void );

#include "Zumo_bridge.h"
#include "TIM_bridge.h"
#include "LineTracer.h"
#include "LineTracer_LineTracer_class.h"
#include "LineTracer_Button_class.h"
/*
 * roll-up of all events (with their parameters) for component LineTracer
 */
typedef union {
  LineTracer_LineTracer_Events_u LineTracer_LineTracer_Events_u_namespace;
  LineTracer_Button_Events_u LineTracer_Button_Events_u_namespace;
} LineTracer_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* LINETRACER_CLASSES_H */
