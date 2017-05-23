/*----------------------------------------------------------------------------
 * File:  LineTracer_Button_class.c
 *
 * Class:       Button  (Button)
 * Component:   LineTracer
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "ZumoLineTracer_sys_types.h"
#include "Zumo_bridge.h"
#include "LineTracer_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s LineTracer_Button_container[ LineTracer_Button_MAX_EXTENT_SIZE ];
static LineTracer_Button LineTracer_Button_instances[ LineTracer_Button_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_LineTracer_Button_extent = {
  {0}, {0}, &LineTracer_Button_container[ 0 ],
  (Escher_iHandle_t) &LineTracer_Button_instances,
  sizeof( LineTracer_Button ), LineTracer_Button_STATE_1, LineTracer_Button_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      Button  (Button)
 * Component:  LineTracer
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [init]
 */
static void LineTracer_Button_act1( LineTracer_Button *, const Escher_xtUMLEvent_t * const );
static void
LineTracer_Button_act1( LineTracer_Button * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [fire]
 */
static void LineTracer_Button_act2( LineTracer_Button *, const Escher_xtUMLEvent_t * const );
static void
LineTracer_Button_act2( LineTracer_Button * self, const Escher_xtUMLEvent_t * const event )
{
}





/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t LineTracer_Button_StateEventMatrix[ 2 + 1 ][ 0 ] = {
  /* row 0:  uninitialized state (for creation events) */
  {  },
  /* row 1:  LineTracer_Button_STATE_1 (init) */
  {  },
  /* row 2:  LineTracer_Button_STATE_2 (fire) */
  {  }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t LineTracer_Button_acts[ 3 ] = {
    (StateAction_t) 0,
    (StateAction_t) LineTracer_Button_act1,  /* init */
    (StateAction_t) LineTracer_Button_act2  /* fire */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 3 ] = {
    "",
    "init",
    "fire"
  };

/*
 * instance state machine event dispatching
 */
void
LineTracer_Button_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 2 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = LineTracer_Button_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 2 ) {
        STATE_TXN_START_TRACE( "Button", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *LineTracer_Button_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "Button", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "Button", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

