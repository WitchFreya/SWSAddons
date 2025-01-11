#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Set the total restock amount and initialize restocking if necessary.
 *
 * Arguments:
 * 0: Restock object <OBJECT>
 * 1: Total number of restocks across all users (set to -1 for infinite) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject, -1] call sws_resupply_fnc_setLimitTotal;
 *
 * Public: No
 */

TRACE_1(QFUNC(setLimitTotal),_this);

if !(isServer) exitWith {};

params [
  ["_target", objNull, [objNull]],
  ["_limitTotal", 0, [0]]
];

if (_limitTotal == 0 || {_limitTotal < -1}) exitWith {
  ERROR_WITH_TITLE_1(QFUNC(setLimitTotal),"Invalid limit %1 for restocks; must be -1 or a positive value",_limitPerPerson);
};

if !(local _target) exitWith {
  [QGVAR(setLimitTotal), _this, [_target]] call CBA_fnc_targetEvent;
};

// not initialized, initialize with infinite
private _currentTotalRestocks = _target getVariable QGVAR(maxRestocks);
if (isNil {_currentTotalRestocks}) exitWith {
  [_target, -1, _limitTotal] call FUNC(setRestockAmount);
};

_target setVariable [QGVAR(maxRestocks), _limitTotal, true];
