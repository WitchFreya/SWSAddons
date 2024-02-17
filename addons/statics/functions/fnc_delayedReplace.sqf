#include "script_component.inc.sqf"

/*
 * Author: Maid
 * After a short delay (3-13 seconds), replace or remove a vehicle from the world.
 *
 * Arguments:
 * 0: vehicle <OBJECT> - The vehicle to replace (M41, for example)
 * 1: replaceWith <STRING> - OPTIONAL The simple object to put when it is replaced; if excluded, the vehicle will just be deleted.
 *
 * Return Value:
 * None
 *
 * Example:
 * [_myCutestM41Emplacement, "OPTRE_Static_Base_Turret"] call sws_statics_fnc_optreReplaceStatic;
 *
 * Public: No
 */

params [
  ["_vic", objNull, [objNull]],
  ["_replaceWith", nil, ["", nil]]
];
if !(local _vic) exitWith {
  TRACE_1("delayedReplace should be run local to the vehicle only",_vic);
};
private _destructionDuration = floor (random 10) + 3;
TRACE_3("Replacing object soon",_vic,_destructionDuration,_replaceWith);

[{
  params ["_vic", "_replaceWith"];
  private _pos = getPosWorld _vic;
  deleteVehicle _vic;
  if (isNil {_replaceWith}) exitWith {};
  createSimpleObject [_replaceWith, _pos];
}, [_vic, _replaceWith], _destructionDuration] call CBA_fnc_waitAndExecute;

