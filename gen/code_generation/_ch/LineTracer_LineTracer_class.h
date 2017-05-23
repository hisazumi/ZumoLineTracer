/*----------------------------------------------------------------------------
 * File:  LineTracer_LineTracer_class.h
 *
 * Class:       LineTracer  (LineTracer)
 * Component:   LineTracer
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef LINETRACER_LINETRACER_CLASS_H
#define LINETRACER_LINETRACER_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   LineTracer  (LineTracer)
 */
struct LineTracer_LineTracer {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
};
void LineTracer_LineTracer_op_turn_right( LineTracer_LineTracer * );
void LineTracer_LineTracer_op_turn_left( LineTracer_LineTracer * );
void LineTracer_LineTracer_op_stop( LineTracer_LineTracer * );


#define LineTracer_LineTracer_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_LineTracer_LineTracer_extent;

/*
 * instance event:  LineTracer1:'init'
 * warning:  Event is not used in application - no code generated.
 */
/*
 * instance event:  LineTracer2:'online'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} LineTracer_LineTracerevent2;
extern const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent2c;
/*
 * instance event:  LineTracer3:'offline'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} LineTracer_LineTracerevent3;
extern const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent3c;
/*
 * instance event:  LineTracer4:'bumper'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} LineTracer_LineTracerevent4;
extern const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent4c;
/*
 * instance event:  LineTracer5:'pushed'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} LineTracer_LineTracerevent5;
extern const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent5c;
/*
 * instance event:  LineTracer6:'cargo'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} LineTracer_LineTracerevent6;
extern const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent6c;
/*
 * union of events targeted towards 'LineTracer' state machine
 */
typedef union {
  LineTracer_LineTracerevent2 linetracer2_1;  
  LineTracer_LineTracerevent3 linetracer3_2;  
  LineTracer_LineTracerevent4 linetracer4_3;  
  LineTracer_LineTracerevent5 linetracer5_4;  
  LineTracer_LineTracerevent6 linetracer6_5;  
} LineTracer_LineTracer_Events_u;
/*
 * enumeration of state model states for class
 */
#define LineTracer_LineTracer_STATE_1 1  /* state [1]:  (init) */
#define LineTracer_LineTracer_STATE_2 2  /* state [2]:  (online) */
#define LineTracer_LineTracer_STATE_3 3  /* state [3]:  (offline) */
#define LineTracer_LineTracer_STATE_4 4  /* state [4]:  (cargo_loaded) */
/*
 * enumeration of state model event numbers
 */
#define LINETRACER_LINETRACEREVENT2NUM 0  /* LineTracer2:'online' */
#define LINETRACER_LINETRACEREVENT3NUM 1  /* LineTracer3:'offline' */
#define LINETRACER_LINETRACEREVENT4NUM 2  /* LineTracer4:'bumper' */
#define LINETRACER_LINETRACEREVENT5NUM 3  /* LineTracer5:'pushed' */
#define LINETRACER_LINETRACEREVENT6NUM 4  /* LineTracer6:'cargo' */
extern void LineTracer_LineTracer_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* LINETRACER_LINETRACER_CLASS_H */
