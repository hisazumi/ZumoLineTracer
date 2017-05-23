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

#define LineTracer_STATE_MODELS 1
/* Define constants to map to class numbers.  */
#define LineTracer_LineTracer_CLASS_NUMBER 0
#define LineTracer_MAX_CLASS_NUMBERS 1

/* Provide a map of classes to task numbers.  */
#define LineTracer_TASK_NUMBERS  0

#define LineTracer_class_dispatchers\
  LineTracer_LineTracer_Dispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct LineTracer_LineTracer LineTracer_LineTracer;

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
void LineTracer_sw0( void );

#include "Zumo_bridge.h"
#include "LineTracer.h"
#include "LineTracer_LineTracer_class.h"
/*
 * roll-up of all events (with their parameters) for component LineTracer
 */
typedef union {
  LineTracer_LineTracer_Events_u LineTracer_LineTracer_Events_u_namespace;
} LineTracer_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* LINETRACER_CLASSES_H */
