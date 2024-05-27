#include "script_component.inc.sqf"

TRACE_1(QFUNC(onKilled),_this);

/*
 * Author: Maid
 * Save unit radios when they are killed.
 *
 * Arguments:
 * 0: Unit that died <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call sws_acre_fnc_onKilled;
 *
 * Public: No
 */

params [
  ["_unit", objNull, [objNull]]
];

if !(GVAR(restoreOnRespawn)) exitWith {
  TRACE_2("Nothing to do",GVAR(restoreOnRespawn),_unit);
};

[_unit] call FUNC(saveRadios);
