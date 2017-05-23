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



#define LineTracer_Button_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_LineTracer_Button_extent;

/*
 * instance event:  Button1:'fire'
 * warning:  Event is not used in application - no code generated.
 */
/*
 * instance event:  Button2:'init'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * enumeration of state model states for class
 */
#define LineTracer_Button_STATE_1 1  /* state [1]:  (init) */
#define LineTracer_Button_STATE_2 2  /* state [2]:  (fire) */
/*
 * enumeration of state model event numbers
 */
extern void LineTracer_Button_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* LINETRACER_BUTTON_CLASS_H */
