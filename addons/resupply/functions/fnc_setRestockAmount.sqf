#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Designate object for restocking players.
 *
 * Arguments:
 * 0: Object to add the restock action on <OBJECT>
 * 1: Total number of resupplies per person <NUMBER> OPTIONAL - Defaults to -1 for infinite.
 * 2: Total number of resupplies <NUMBER> OPTIONAL - Defaults to -1 for infinite.
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject, 1, 100] call sws_resupply_fnc_setRestockAmount;
 *
 * Public: No
 */

TRACE_1(QFUNC(setRestockAmount),_this);

params [
  ["_target", objNull, [objNull]],
  ["_totalPerPerson", -1, [0]],
  ["_total", -1, [0]]
];

if !(local _target) exitWith {
  [QGVAR(setRestockAmount), _this, [_target]] call CBA_fnc_targetEvent;
};

_target setVariable [QGVAR(maxRestocksPerPerson), _totalPerPerson, true];
_target setVariable [QGVAR(maxRestocks), _total, true];
_target setVariable [QGVAR(restocksUsedPerPerson), createHashMap, true];
_target setVariable [QGVAR(restocksUsed), 0, true];

private _jipId = [QGVAR(addRestockAction), [_target]] call CBA_fnc_globalEventJIP;
[_jipID, _target] call CBA_fnc_removeGlobalEventJIP;
