/*----------------------------------------------------------------------------
 * File:  sys_user_co.h
 *
 * Description:
 * Function declarations for user supplied (non-translated) call out entry
 * points in the generated application.
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef SYS_USER_CO_H
#define SYS_USER_CO_H
#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * UserInitializationCallout
 *
 * This function is invoked at the immediate beginning of application
 * initialization. It is the very first function to be executed at system
 * startup.
 * User supplied implementation of this function should be restricted to
 * things like memory initialization, early hardware duties, etc.
 *
 */
void UserInitializationCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.
   (activated by default...  Uncomment to deactivate.)
#define UserInitializationCallout()
 */

#ifndef UserInitializationCallout
#define UserInitializationCallout() UserInitializationCalloutf()
#endif

/*
 * UserPreOoaInitializationCallout
 *
 * This function is invoked immediately prior to executing any xtUML
 * initialization functions.
 */
void UserPreOoaInitializationCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserPreOoaInitializationCallout()

#ifndef UserPreOoaInitializationCallout
#define UserPreOoaInitializationCallout() UserPreOoaInitializationCalloutf()
#endif

/*
 * UserPostOoaInitializationCallout
 *
 * This function is invoked immediately after executing any xtUML
 * initialization functions.
 * When this callout function returns, the system dispatcher will allow the
 * xtUML application analysis state models to start consuming events.
 */
void UserPostOoaInitializationCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserPostOoaInitializationCallout()

#ifndef UserPostOoaInitializationCallout
#define UserPostOoaInitializationCallout() UserPostOoaInitializationCalloutf()
#endif

/*
 * UserBackgroundProcessingCallout
 *
 * This function is invoked once during each loop execution of the system
 * dispather.
 * It is invoked at the 'top' of the system dispatcher loop, immediately
 * prior to dispatching any xtUML application analysis events.
 */
void UserBackgroundProcessingCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.
   (activated by default...  Uncomment to deactivate.)
#define UserBackgroundProcessingCallout()
 */

#ifndef UserBackgroundProcessingCallout
#define UserBackgroundProcessingCallout() UserBackgroundProcessingCalloutf()
#endif

/*
 * UserPreShutdownCallout
 *
 * This function is invoked at termination of the system dispatcher, but
 * prior to performing any xtUML application analysis shutdown sequencing.
 */
void UserPreShutdownCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserPreShutdownCallout()

#ifndef UserPreShutdownCallout
#define UserPreShutdownCallout() UserPreShutdownCalloutf()
#endif

/*
 * UserPostShutdownCallout
 *
 * This function is invoked immediately before application exit.
 */
void UserPostShutdownCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserPostShutdownCallout()

#ifndef UserPostShutdownCallout
#define UserPostShutdownCallout() UserPostShutdownCalloutf()
#endif

/*
 * UserEventCantHappenCallout
 *
 * This function is invoked any time that an event is received that
 * results in a "cant happen" transition.
 */
void UserEventCantHappenCalloutf( const Escher_StateNumber_t,
                                         const Escher_StateNumber_t,
                                         const Escher_EventNumber_t );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserEventCantHappenCallout( s1, s2, e )

#ifndef UserEventCantHappenCallout
#define UserEventCantHappenCallout( s1, s2, e ) UserEventCantHappenCalloutf( s1, s2, e )
#endif

/*
 * UserEventNoInstanceCallout
 *
 * This function is invoked when we failed to validate the instance
 * to which an event was directed.  This can happen in normal operation
 * when the instance was deleted while the event was in flight (analysis
 * error).
 */
void UserEventNoInstanceCalloutf( const Escher_EventNumber_t );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserEventNoInstanceCallout( e )

#ifndef UserEventNoInstanceCallout
#define UserEventNoInstanceCallout( e ) UserEventNoInstanceCalloutf( e )
#endif

/*
 * UserEventFreeListEmptyCallout
 *
 * This function is invoked when an attempt is made to allocate an
 * event, but there are no more left.
 */
void UserEventFreeListEmptyCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserEventFreeListEmptyCallout()

#ifndef UserEventFreeListEmptyCallout
#define UserEventFreeListEmptyCallout() UserEventFreeListEmptyCalloutf()
#endif

/*
 * UserEmptyHandleDetectedCallout
 *
 * This function is invoked when an attempt is made to use an instance
 * reference variable (handle) that is null (empty).
 */
void UserEmptyHandleDetectedCalloutf( c_t *, c_t * );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserEmptyHandleDetectedCallout( s1, s2 )

#ifndef UserEmptyHandleDetectedCallout
#define UserEmptyHandleDetectedCallout( s1, s2 ) UserEmptyHandleDetectedCalloutf( (c_t *) s1, (c_t *) s2 )
#endif

/*
 * UserObjectPoolEmptyCallout
 *
 * This function is invoked when an attempt is made to create an
 * instance of an object, but there are no instances available.
 */
void UserObjectPoolEmptyCalloutf( const Escher_DomainNumber_t, const Escher_ClassNumber_t );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.
   (activated by default...  Uncomment to deactivate.)
#define UserObjectPoolEmptyCallout( s1, s2 )
 */

#ifndef UserObjectPoolEmptyCallout
#define UserObjectPoolEmptyCallout( s1, s2 ) UserObjectPoolEmptyCalloutf( s1, s2 )
#endif

/*
 * UserNodeListEmptyCallout
 *
 * This function is invoked when an attempt is made to allocate a
 * node, but there are no more left.
 */
void UserNodeListEmptyCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserNodeListEmptyCallout()

#ifndef UserNodeListEmptyCallout
#define UserNodeListEmptyCallout() UserNodeListEmptyCalloutf()
#endif

/*
 * UserInterleavedBridgeOverflowCallout
 *
 * This function is invoked when an attempt is made to post too many
 * interleaved bridges.  The depth of this list is defined by
 * SYS_MAX_INTERLEAVED_BRIDGES (unless changed in the archetype).
 */
void UserInterleavedBridgeOverflowCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserInterleavedBridgeOverflowCallout()

#ifndef UserInterleavedBridgeOverflowCallout
#define UserInterleavedBridgeOverflowCallout() UserInterleavedBridgeOverflowCalloutf()
#endif

/*
 * UserSelfEventQueueEmptyCallout
 *
 * This function is invoked when the events to self queue is
 * interrogated and found to be empty.
 */
void UserSelfEventQueueEmptyCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserSelfEventQueueEmptyCallout()

#ifndef UserSelfEventQueueEmptyCallout
#define UserSelfEventQueueEmptyCallout() UserSelfEventQueueEmptyCalloutf()
#endif

/*
 * UserNonSelfEventQueueEmptyCallout
 *
 * This function is invoked when the events to instance queue is
 * interrogated and found to be empty.
 */
void UserNonSelfEventQueueEmptyCalloutf( void );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserNonSelfEventQueueEmptyCallout()

#ifndef UserNonSelfEventQueueEmptyCallout
#define UserNonSelfEventQueueEmptyCallout() UserNonSelfEventQueueEmptyCalloutf()
#endif

/*
 * UserPersistenceErrorCallout
 *
 * This function is invoked when trouble is detected reading from
 * or writing to persistent storage.
 */
void UserPersistenceErrorCalloutf( i_t );
/* The following empty definition renders the callout hook invisible.
   Delete or comment out the following define to activate the in line
   hook for this callout.  */
#define UserPersistenceErrorCallout( i1 )

#ifndef UserPersistenceErrorCallout
#define UserPersistenceErrorCallout( i1 ) UserPersistenceErrorCalloutf( i1 )
#endif

/*----------------------------------------------------------------------------
 *
 * Run time instrumentation and tracing declarations are defined here.
 *
 * Note:
 *   Multi-line macros use the do {...} while (0) construct recommended
 *   by cert.org (PRE10-C, PRE10-CPP).
 *
 *   Users may copy this file to the /gen folder and modify these macros
 *   as desired to change the way tracing works.
 *
 *--------------------------------------------------------------------------*/

#define XTUML_TRACE_FLUSH( i ) fflush( i )

/*
 * State transition start tracing:
 */
/* To suppress source identification in tracing, uncomment the following macro */
/* #define XTUML_SOURCE_PROLOGUE */

#ifndef XTUML_SOURCE_PROLOGUE
#define XTUML_SOURCE_PROLOGUE printf( "%s #%6u: ", __FILE__, __LINE__ ); XTUML_TRACE_FLUSH( 0 )
#endif

/* To suppress state transition start tracing, uncomment the following macro */
/* #define STATE_TXN_START_TRACE( obj_kl, state_num, state_name ) */

#ifndef STATE_TXN_START_TRACE
#define STATE_TXN_START_TRACE( obj_kl, state_num, state_name ) do {   XTUML_SOURCE_PROLOGUE;   printf( "Transition started:  %s State [%u] %s\r\n", obj_kl, state_num, state_name ); } while (0)
#endif

/*
 * State transition complete tracing:
 */
/* To suppress state transition complete tracing, uncomment the following macro */
/* #define STATE_TXN_END_TRACE( obj_kl, state_num, state_name ) */

#ifndef STATE_TXN_END_TRACE
#define STATE_TXN_END_TRACE( obj_kl, state_num, state_name ) do {   XTUML_SOURCE_PROLOGUE;   printf( "Transition complete:  %s State [%u] %s\r\n", obj_kl, state_num, state_name );   XTUML_TRACE_FLUSH( 0 ); } while (0)
#endif

/*
 * Event ignored tracing:
 */
/* To unsuppress event ignored tracing, comment out the following macro.  */
#define STATE_TXN_IG_TRACE( obj_kl, state_num )

#ifndef STATE_TXN_IG_TRACE
#define STATE_TXN_IG_TRACE( obj_kl, state_num ) do {   XTUML_SOURCE_PROLOGUE;   printf( "Event ignored:  %s current_state = %u\r\n", obj_kl, state_num );   XTUML_TRACE_FLUSH( 0 ); } while (0)
#endif

/*
 * Event can't happen tracing:
 */
/* To suppress can't happen tracing, uncomment the following macro */
/* #define STATE_TXN_CH_TRACE( obj_kl, state_num ) */

#ifndef STATE_TXN_CH_TRACE
#define STATE_TXN_CH_TRACE( obj_kl, state_num ) do {   XTUML_SOURCE_PROLOGUE;   printf( "Event cannot happen:  %s current_state = %u\r\n", obj_kl, state_num );   XTUML_TRACE_FLUSH( 0 ); } while (0)
#endif

/*
 * Component message start tracing:
 */
/* To suppress component message start tracing, uncomment the following macro */
/* #define COMP_MSG_START_TRACE( arg_format, component_number, port_number, message_number, args... ) */

#ifndef COMP_MSG_START_TRACE
#define COMP_MSG_START_TRACE( arg_format, component_number, port_number, message_number, args... ) do {   XTUML_SOURCE_PROLOGUE;   printf( "component %d port %d message %d " arg_format "\n", component_number, port_number, message_number, ## args );   XTUML_TRACE_FLUSH( 0 ); } while (0)
#endif

/*
 * Component message end tracing:
 */


/*
 * Object Action Language (OAL) statement level tracing:
 */

/* To suppress statement source identification, uncomment the following macro */
/* #define XTUML_OAL_STMT_TRACE( blck_level, stmt_action ) */

#ifndef XTUML_OAL_STMT_TRACE
#define XTUML_OAL_STMT_TRACE( blck_level, stmt_action ) do {   XTUML_SOURCE_PROLOGUE;   { /* indenting */ s1_t i; for ( i = 0; i < blck_level; i++ ) printf( "  " ); }   printf( "%s\r\n", stmt_action );   XTUML_TRACE_FLUSH( 0 ); } while (0)
#endif

/* To suppress empty handle detection, modify the following macro.  */

#ifndef XTUML_EMPTY_HANDLE_TRACE
#define XTUML_EMPTY_HANDLE_TRACE( object_keyletters, s ) do { UserEmptyHandleDetectedCallout( object_keyletters, s ); } while (0)
#endif

#ifdef	__cplusplus
}
#endif
#endif  /* SYS_USER_CO_H */
