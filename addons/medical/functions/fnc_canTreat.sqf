#include "script_component.inc.sqf"
/*
 * Author: Maid
 * Checks if treatment will do anything.
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

switch (_treatment) do {
  case "SWS_Biofoam": {
    private _effectiveWounds = [_patient, _treatment, toLower _part] call ace_medical_treatment_fnc_findMostEffectiveWounds;
    !(_effectiveWounds isEqualTo createHashMap);
  };
  default { _this call ace_medical_treatment_fnc_canTreat; };
};
