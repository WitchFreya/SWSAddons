#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Cache the LR radio settings for a unit to a variable on the unit.
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [player] call sws_tfar_fnc_saveLongRangeRadio;
 *
 * Public: No
 */

params [
  ["_unit", objNull, [objNull]]
];

if !(local _unit) exitWith {
  [QGVAR(saveLongRangeRadio), [_unit], _unit] call CBA_fnc_targetEvent;
};

private _radio = call tfar_fnc_activeLrRadio;

if (isNil {_radio}) exitWith {
  TRACE_1("Unit does not have a long-range radio",_unit);
  true;
};

private _settings = _radio call tfar_fnc_getLrSettings;

_unit setVariable [QGVAR(savedLongRangeSettings), _settings];
TRACE_2("Saved long-range radio settings",_unit,_settings);
true;
