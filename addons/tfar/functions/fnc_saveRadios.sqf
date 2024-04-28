#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Save the radio for a unit.
 *
 * Arguments:
 * 0: Unit to save the radio on <OBJECT>
 *
 * Return Value:
 * True on success
 *
 * Example:
 * [player] call sws_tfar_fnc_saveRadios;
 *
 * Public: No
 */

TRACE_1(QGVAR(DOUBLES(fnc,saveRadios)),_this);

if !(local _target) exitWith {
  [QGVAR(saveRadios), [_target], _target] call CBA_fnc_targetEvent;
};

params [
  ["_target", objNull, [objNull]]
];

switch (GVAR(restoreRadios)) do {
  case "sr_only": {
    [_target] call FUNC(saveShortRangeRadio);
  };
  case "lr_only": {
    [_target] call FUNC(saveLongRangeRadio);
  };
  case "both": {
    [_target] call FUNC(saveShortRangeRadio);
    [_target] call FUNC(saveLongRangeRadio);
  };
  default {
    TRACE_2("Skipped saving radio settings",_unit,GVAR(restoreRadios));
  };
};
