#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Administer biofoam to a bodypart; modified from ace medication.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 * 3: Treatment <STRING>
 * 4: Item User (not used) <OBJECT>
 * 5: Used Item <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject, "RightArm", "SWS_Biofoam", objNull, "SWS_Biofoam"] call sws_medical_fnc_biofoam
 *
 * Public: No
 */

params ["_medic", "_patient", "_bodyPart", "_className", "", "_usedItem"];

[_patient, _usedItem] call ace_medical_treatment_fnc_addToTriageCard;

[_patient, "activity", "STR_ACE_Medical_Treatment_Activity_usedItem", [[_medic, false, true] call ace_common_fnc_getName, "biofoam-Sx"]] call ace_medical_treatment_fnc_addToLog;

{
  private _fncName = format ["ace_medical_treatment_%1Local", _x];
  [_fncName, [_patient, _bodyPart, _className], _patient] call CBA_fnc_targetEvent;
} forEach ["medication", "bandage"];
