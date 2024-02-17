#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Replace the OPTRE static weapons with just their base or delete after a short delay.
 *
 * Arguments:
 * 0: vehicle <OBJECT> - The optre defense to replace (M41, for example)
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
  TRACE_1("optreReplaceStatic should be run local to the vehicle only",_vic);
};
private _destructionDuration = floor (random 10) + 3;
TRACE_2("Replacing object soon",_vic,_destructionDuration);

[{
  params ["_vic", "_replaceWith"];
  private _pos = getPosWorld _vic;
  deleteVehicle _vic;
  if (isNil {_replaceWith}) exitWith {};
  createSimpleObject [_replaceWith, _pos];
}, [_vic, _replaceWith], _destructionDuration] call CBA_fnc_waitAndExecute;

