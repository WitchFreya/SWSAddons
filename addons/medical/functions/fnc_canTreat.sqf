#include "script_component.inc.sqf"
/*
 * Author: Maid
 * Adds an additional treatment check to only show it if it will actually help an injury.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 * 3: Treatment <STRING>
 *
 * Return Value:
 * Can treat <BOOL>
 *
 * Example:
 * [player, cursorObject, "Head", "SWS_Biofoam"] call sws_medical_fnc_canTreat
 *
 * Public: No
 */

TRACE_1("canTreat",_this);
params [
  ["_medic", objNull, [objNull]],
  ["_patient", objNull, [objNull]],
  ["_part", "", [""]],
  ["_treatment", "", [""]]
];

private _aceCanTreat = _this call ace_medical_treatment_fnc_canTreat;

if !(_aceCanTreat) exitWith {false};

switch (_treatment) do {
  case "SWS_Biofoam": {
    private _effectiveWounds = [_patient, _treatment, toLower _part] call ace_medical_treatment_fnc_findMostEffectiveWounds;
    !(_effectiveWounds isEqualTo createHashMap);
  };
  default { false };
};
