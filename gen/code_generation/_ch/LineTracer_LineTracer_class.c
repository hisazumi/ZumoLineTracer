/*----------------------------------------------------------------------------
 * File:  LineTracer_LineTracer_class.c
 *
 * Class:       LineTracer  (LineTracer)
 * Component:   LineTracer
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "ZumoLineTracer_sys_types.h"
#include "TIM_bridge.h"
#include "Zumo_bridge.h"
#include "LineTracer_classes.h"

/*
 * instance operation:  turn_right
 */
void
LineTracer_LineTracer_op_turn_right( LineTracer_LineTracer * self)
{
  /* Zumo::driveTank( left:100, right:0 ) */
  XTUML_OAL_STMT_TRACE( 1, "Zumo::driveTank( left:100, right:0 )" );
  Zumo_driveTank( 100, 0 );
}

/*
 * instance operation:  turn_left
 */
void
LineTracer_LineTracer_op_turn_left( LineTracer_LineTracer * self)
{
  /* Zumo::driveTank( left:0, right:100 ) */
  XTUML_OAL_STMT_TRACE( 1, "Zumo::driveTank( left:0, right:100 )" );
  Zumo_driveTank( 0, 100 );
}

/*
 * instance operation:  stop
 */
void
LineTracer_LineTracer_op_stop( LineTracer_LineTracer * self)
{
  /* Zumo::driveTank( left:0, right:0 ) */
  XTUML_OAL_STMT_TRACE( 1, "Zumo::driveTank( left:0, right:0 )" );
  Zumo_driveTank( 0, 0 );
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      LineTracer  (LineTracer)
 * Component:  LineTracer
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s LineTracer_LineTracer_container[ LineTracer_LineTracer_MAX_EXTENT_SIZE ];
static LineTracer_LineTracer LineTracer_LineTracer_instances[ LineTracer_LineTracer_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_LineTracer_LineTracer_extent = {
  {0}, {0}, &LineTracer_LineTracer_container[ 0 ],
  (Escher_iHandle_t) &LineTracer_LineTracer_instances,
  sizeof( LineTracer_LineTracer ), LineTracer_LineTracer_STATE_1, LineTracer_LineTracer_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      LineTracer  (LineTracer)
 * Component:  LineTracer
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [init]
 */
static void LineTracer_LineTracer_act1( LineTracer_LineTracer *, const Escher_xtUMLEvent_t * const );
static void
LineTracer_LineTracer_act1( LineTracer_LineTracer * self, const Escher_xtUMLEvent_t * const event )
{
  /* self.stop() */
  XTUML_OAL_STMT_TRACE( 1, "self.stop()" );
  LineTracer_LineTracer_op_stop( self );
}

/*
 * State 2:  [online]
 */
static void LineTracer_LineTracer_act2( LineTracer_LineTracer *, const Escher_xtUMLEvent_t * const );
static void
LineTracer_LineTracer_act2( LineTracer_LineTracer * self, const Escher_xtUMLEvent_t * const event )
{
  /* self.turn_left() */
  XTUML_OAL_STMT_TRACE( 1, "self.turn_left()" );
  LineTracer_LineTracer_op_turn_left( self );
}

/*
 * State 3:  [offline]
 */
static void LineTracer_LineTracer_act3( LineTracer_LineTracer *, const Escher_xtUMLEvent_t * const );
static void
LineTracer_LineTracer_act3( LineTracer_LineTracer * self, const Escher_xtUMLEvent_t * const event )
{
  /* self.turn_right() */
  XTUML_OAL_STMT_TRACE( 1, "self.turn_right()" );
  LineTracer_LineTracer_op_turn_right( self );
}


const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent2c = {
  LineTracer_DOMAIN_ID, LineTracer_LineTracer_CLASS_NUMBER, LINETRACER_LINETRACEREVENT2NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent3c = {
  LineTracer_DOMAIN_ID, LineTracer_LineTracer_CLASS_NUMBER, LINETRACER_LINETRACEREVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent4c = {
  LineTracer_DOMAIN_ID, LineTracer_LineTracer_CLASS_NUMBER, LINETRACER_LINETRACEREVENT4NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t LineTracer_LineTracerevent5c = {
  LineTracer_DOMAIN_ID, LineTracer_LineTracer_CLASS_NUMBER, LINETRACER_LINETRACEREVENT5NUM,
  ESCHER_IS_INSTANCE_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t LineTracer_LineTracer_StateEventMatrix[ 3 + 1 ][ 4 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  LineTracer_LineTracer_STATE_1 (init) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, LineTracer_LineTracer_STATE_3 },
  /* row 2:  LineTracer_LineTracer_STATE_2 (online) */
  { EVENT_CANT_HAPPEN, LineTracer_LineTracer_STATE_3, LineTracer_LineTracer_STATE_1, EVENT_CANT_HAPPEN },
  /* row 3:  LineTracer_LineTracer_STATE_3 (offline) */
  { LineTracer_LineTracer_STATE_2, EVENT_CANT_HAPPEN, LineTracer_LineTracer_STATE_1, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t LineTracer_LineTracer_acts[ 4 ] = {
    (StateAction_t) 0,
    (StateAction_t) LineTracer_LineTracer_act1,  /* init */
    (StateAction_t) LineTracer_LineTracer_act2,  /* online */
    (StateAction_t) LineTracer_LineTracer_act3  /* offline */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 4 ] = {
    "",
    "init",
    "online",
    "offline"
  };

/*
 * instance state machine event dispatching
 */
void
LineTracer_LineTracer_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 3 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = LineTracer_LineTracer_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 3 ) {
        STATE_TXN_START_TRACE( "LineTracer", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *LineTracer_LineTracer_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "LineTracer", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "LineTracer", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

