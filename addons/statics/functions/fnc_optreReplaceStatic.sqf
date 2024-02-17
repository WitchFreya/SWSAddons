#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Replace the OPTRE static weapons with just their base after a short delay.
 *
 * Arguments:
 * 0: vehicle <OBJECT> - The optre defense to replace (M41, for example)
 *
 * Return Value:
 * None
 *
 * Example:
 * [_myCutestM41Emplacement] call sws_statics_fnc_optreReplaceStatic;
 *
 * Public: No
 */

params ["_vic"];
if !(local _vic) exitWith {
  TRACE_1("optreReplaceStatic should be run local to the vehicle only",_vic);
};
private _destructionDuration = floor (random 10) + 3;
TRACE_2("Replacing object soon",_vic,_destructionDuration);

[{
  params ["_vic"];
  private _pos = getPosWorld _vic;
  deleteVehicle _vic;
  createSimpleObject ["OPTRE_Static_Base_Turret", _pos];
}, [_vic], _destructionDuration] call CBA_fnc_waitAndExecute;

