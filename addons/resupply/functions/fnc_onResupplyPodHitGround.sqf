#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Do some effects when a resupply pod hits the ground to make it less uncanny.
 *
 * Arguments:
 * 0: Pod <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject] call sws_resupply_fnc_resupplyPodHitGround;
 *
 * Public: No
 */

TRACE_1(QGVARMAIN(fnc_resupplyPodHitGround),_this);

params [
  ["_pod", objNull, [objNull]]
];

private _pos /* [x, y, 0] */ = getPosATL _pod vectorMultiply [1, 1, 0];

// Create a shell striking the ground to simulate the sound based on material
createVehicle ["Sh_125mm_APFSDS", _pos, [], 0, 'CAN_COLLIDE'] setVelocity [0, 0, -100];

// creating a crater is only supported for supplypod-type objects
if !(_pod isKindOf "OPTRE_Ammo_SupplyPod_Empty") exitWith {};

private _crater = createVehicle ['Land_ShellCrater_01_F', _pos, [], 0, 'CAN_COLLIDE'];
_pod attachTo [
  _crater
];

// add some variety to the pod's angles on the ground.
private _offset = [random [-8, 0, 8], 0, random [-8, 0, 8]];
{
  private _adjustedVector = ([
    [vectorDir _x, vectorUp _x]
  ] + _offset) call BIS_fnc_transformVectorDirAndUp;
  _x setVectorDirAndUp _adjustedVector;
} forEach [_pod, _crater];
