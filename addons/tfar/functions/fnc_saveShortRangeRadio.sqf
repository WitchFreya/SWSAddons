#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Cache the SR radio settings for a unit to a variable on the unit.
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [player] call sws_tfar_fnc_saveShortRangeRadio;
 *
 * Public: No
 */

params [
  ["_unit", objNull, [objNull]]
];

if !(local _unit) exitWith {
  [QGVAR(saveShortRangeRadio), [_unit], _unit] call CBA_fnc_targetEvent;
};

private _radio = call tfar_fnc_activeSwRadio;

if (isNil {_radio}) exitWith {
  TRACE_1("Unit does not have a short-range radio",_unit);
  true;
};

private _settings = _radio call TFAR_fnc_getSwSettings;

_unit setVariable [QGVAR(savedShortRangeSettings), _settings];
TRACE_2("Saved radio settings",_unit,_settings);
true;
