#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Penalize those standing too close to the AED when it goes off. Or just call it on your friend to zap them.
 *
 * Arguments:
 * 0: obliviousFool <OBJECT> - Unit to penalize.
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call sws_aed_fnc_punishHubris;
 *
 * Public: No
 */

params [
  ["_obliviousFool", objNull, [objNull]]
];

[_obliviousFool, "activity", "%1 stood too close to a defib", [[_obliviousFool, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
[_obliviousFool, 0.3, "body", "punch", _obliviousFool] call ace_medical_fnc_addDamageToUnit;
[_obliviousFool, true] call ace_medical_fnc_setUnconscious;
