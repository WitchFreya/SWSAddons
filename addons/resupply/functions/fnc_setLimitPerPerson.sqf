#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Set the restock amount per person and initialize restocking if necessary.
 *
 * Arguments:
 * 0: Restock object <OBJECT>
 * 1: Total number of resupplies per person (set to -1 for infinite) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject, -1] call sws_resupply_fnc_setLimitPerPerson;
 *
 * Public: No
 */

TRACE_1(QFUNC(setLimitPerPerson),_this);

params [
  ["_target", objNull, [objNull]],
  ["_limitPerPerson", 0, [0]]
];

if (_limitPerPerson == 0 || {_limitPerPerson < -1}) exitWith {
  ERROR_WITH_TITLE_1(QFUNC(setRestockAmount),"Invalid limit for restocks per person; must be -1 or a positive value",_limitPerPerson);
};

if !(local _target) exitWith {
  [QGVAR(setLimitPerPerson), _this, [_target]] call CBA_fnc_targetEvent;
};

// not initialized, initialize with infinite
private _currentMaxRestocks = _target getVariable QGVAR(maxRestocksPerPerson);
if (isNil {_currentMaxRestocks}) exitWith {
  [_target, _limitPerPerson, -1] call FUNC(setRestockAmount);
};

_target setVariable [QGVAR(maxRestocksPerPerson), _limitPerPerson, true];
