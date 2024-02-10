 #include "script_component.inc.sqf"

/*
 * Author: Maid
 * Handle the TFAR radios received event - this should only run locally.
 *
 * Arguments:
 * 0: unit <OBJECT> - The unit that received new radios
 * 1: radios <ARRAY> - The radios received by this unit
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [player, []] call sws_tfar_fnc_onRadiosReceived;
 *
 * Public: No
 */

TRACE_1("TFAR - OnRadiosReceived",_this);

params [
  ["_unit", objNull, [objNull]]
];

switch (GVAR(restoreRadios)) do {
  case "sr_only": {
    [_unit] call FUNC(restoreShortRangeRadio);
  };
  case "both": {
    [_unit] call FUNC(restoreShortRangeRadio);
  };
};
