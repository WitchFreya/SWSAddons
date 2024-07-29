#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Consume a restock.
 *
 * Arguments:
 * 0: Item to restock from <OBJECT>
 * 1: Unit attempting to restock <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject] call sws_resupply_fnc_canRestock;
 *
 * Public: No
 */

TRACE_1(QFUNC(consumeRestock),_this);

params [
  ["_target", objNull, [objNull]],
  ["_unit", objNull, [objNull]]
];

if !(local _target || {!(_this call FUNC(canRestock))}) exitWith {};

private _restocksUsedPerPerson = _target getVariable [QGVAR(restocksUsedPerPerson), createHashMap];
private _restocksUsed = _target getVariable [QGVAR(restocksUsed), 0];
private _restocksUsedPersonally = _restocksUsedPerPerson getOrDefault [_unit call BIS_fnc_netId, 0];

_target setVariable [QGVAR(restocksUsed), _restocksUsed + 1, true];
_restocksUsedPerPerson set [_unit call BIS_fnc_netId, _restocksUsedPersonally + 1];
_target setVariable [QGVAR(restocksUsedPerPerson), _restocksUsedPerPerson, true];
[QGVAR(restock), [_unit], _unit] call CBA_fnc_targetEvent;
