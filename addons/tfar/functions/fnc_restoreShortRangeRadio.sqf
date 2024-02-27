#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Restore the SR radio settings for a unit
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [player] call sws_tfar_fnc_restoreShortRangeRadio;
 *
 * Public: No
 */

params [
  ["_unit", objNull, [objNull]]
];

if !(local _unit) exitWith {
  [QGVAR(restoreShortRangeRadio), [_unit], _unit] call CBA_fnc_targetEvent;
};

private _savedSettings = _unit getVariable QGVAR(savedShortRangeSettings);

if (isNil {_savedSettings}) exitWith {
  TRACE_1("Unit does not have a configuration for short-range radio stored",_unit);
  true;
};

private _radio = call tfar_fnc_activeSwRadio;

if (isNil {_radio}) exitWith {
  TRACE_1("Unit does not have a short-range radio",_unit);
  true;
};

[_radio, _savedSettings] call tfar_fnc_setSwSettings;
true;
