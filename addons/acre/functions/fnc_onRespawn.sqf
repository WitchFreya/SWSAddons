#include "script_component.inc.sqf"

TRACE_1(QFUNC(onRespawn),_this);

/*
 * Author: Maid
 * Restore unit radios when they respawn.
 *
 * Arguments:
 * 0: Unit that respawned (unused) <OBJECT>
 * 1: Unit's previous body <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, previousBody] call sws_acre_fnc_onRespawn;
 *
 * Public: No
 */

params [
  ["_unit", objNull, [objNull]],
  ["_corpse", objNull, [objNull]]
];

if !(GVAR(restoreOnRespawn)) exitWith {
  TRACE_2("Nothing to do",GVAR(restoreOnRespawn),_unit);
};

private _savedPTTRadios = _corpse getVariable [QGVAR(savedRadiosPTT), []];
private _savedOtherRadios = _corpse getVariable [QGVAR(savedRadiosOther), []];

if (!IS_ARRAY(_savedPTTRadios)) exitWith {
  TRACE_2("No saved radios to restore",_unit,_corpse);
};

_unit setVariable [QGVAR(savedRadiosPTT), _savedPTTRadios];
_unit setVariable [QGVAR(savedRadiosOther), _savedRadiosOther];

// we need to wait until acre_player is bound to the respawned unit so it restores radios properly
[
  {params ["_unit"]; _unit isEqualTo acre_player},
  FUNC(restoreRadios),
  [_unit],
  GVAR(restoreRadiosTimeout),
  {WARNING_2("Timed out waiting for respawn to become acre_player on unit to initialize",_this,acre_player);}
] call CBA_fnc_waitUntilAndExecute;
