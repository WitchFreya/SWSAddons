#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Restore the LR radio settings for a unit
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [player] call sws_tfar_fnc_restoreLongRangeRadio;
 *
 * Public: No
 */

params [
  ["_unit", objNull, [objNull]]
];

if !(local _unit) exitWith {
  [QGVAR(restoreLongRangeRadio), [_unit], _unit] call CBA_fnc_targetEvent;
};

private _savedSettings = _unit getVariable QGVAR(savedLongRangeSettings);

if (isNil {_savedSettings}) exitWith {
  TRACE_1("Unit does not have a configuration for long-range radio stored",_unit);
  true;
};

private _radio = call tfar_fnc_activeLrRadio;

if (isNil {_radio}) exitWith {
  TRACE_1("Unit does not have a long-range radio",_unit);
  true;
};

[_radio, _savedSettings] call tfar_fnc_setLrSettings;
true;
