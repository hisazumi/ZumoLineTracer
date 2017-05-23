/*----------------------------------------------------------------------------
 * File:  Zumo_bridge.c
 *
 * Description:
 * Methods for bridging to an external entity.
 *
 * External Entity:  Zumo (Zumo)
 * 
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "ZumoLineTracer_sys_types.h"
#include "Zumo_bridge.h"
#include "Zumo.h"

extern Zumo zumo;

/*
 * Bridge:  driveTank
 */
void
Zumo_driveTank( const i_t p_left, const i_t p_right )
{
    zumo.driveTank(p_left, p_right);
}

