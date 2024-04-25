#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Check if a unit can restock from an item.
 *
 * Arguments:
 * 0: Item to check for available restocks <OBJECT>
 * 1: Unit attempting to restock <OBJECT>
 *
 * Return Value:
 * Boolean
 *
 * Example:
 * [player, cursorObject] call sws_resupply_fnc_canRestock;
 *
 * Public: No
 */

TRACE_1(QGVAR(DOUBLES(fnc,canRestock)),_this);

params [
  ["_target", objNull, [objNull]],
  ["_unit", objNull, [objNull]]
];


private _maxPerPerson = _target getVariable [QGVAR(maxRestocksPerPerson), 0];
private _usedPersonally = _target getVariable [QGVAR(restocksUsedPerPerson), createHashMap]
  getOrDefault [_unit call BIS_fnc_netId, 0];


(_maxPerPerson == -1 || {_usedPersonally < _maxPerPerson}) && {
  private _max = _target getVariable [QGVAR(maxRestocks), 0];
  if (_max == -1) exitWith {true};
  private _used = _target getVariable [QGVAR(restocksUsed), 0];
  _used < _max;
};
