/*----------------------------------------------------------------------------
 * File:  LineTracer_Button_class.h
 *
 * Class:       Button  (Button)
 * Component:   LineTracer
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef LINETRACER_BUTTON_CLASS_H
#define LINETRACER_BUTTON_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Button  (Button)
 */
struct LineTracer_Button {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  /* relationship storage */
  /* Note:  No storage needed for Button->LineTracer[R1] */
};

/* xtUML WARNING:  LineTracer<-R1->Button never related!  */
/* Note:  LineTracer<-R1->Button unrelate accessor not needed */

#define LineTracer_Button_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_LineTracer_Button_extent;

/*
 * instance event:  Button1:'fire'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} LineTracer_Buttonevent1;
extern const Escher_xtUMLEventConstant_t LineTracer_Buttonevent1c;
/*
 * instance event:  Button2:'init'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} LineTracer_Buttonevent2;
extern const Escher_xtUMLEventConstant_t LineTracer_Buttonevent2c;
/*
 * union of events targeted towards 'Button' state machine
 */
typedef union {
  LineTracer_Buttonevent1 button1_1;  
  LineTracer_Buttonevent2 button2_2;  
} LineTracer_Button_Events_u;
/*
 * enumeration of state model states for class
 */
#define LineTracer_Button_STATE_1 1  /* state [1]:  (init) */
#define LineTracer_Button_STATE_2 2  /* state [2]:  (fire) */
/*
 * enumeration of state model event numbers
 */
#define LINETRACER_BUTTONEVENT1NUM 0  /* Button1:'fire' */
#define LINETRACER_BUTTONEVENT2NUM 1  /* Button2:'init' */
extern void LineTracer_Button_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* LINETRACER_BUTTON_CLASS_H */
