#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Apply AED effects to unit.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject, player] call sws_aed_fnc_aedLocal;
 *
 * Public: No
 */

params [
  ["_medic", objNull, [objNull]],
  ["_patient", objNull, [objNull]]
];

TRACE_2("aedLocal",_medic,_patient);

[_patient, "activity", "%1 defibrillated patient", [[_medic, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

private _bloodVolume = _patient getVariable ["ace_medical_bloodVolume", 6.0];
private _successChance = linearConversion [BLOOD_VOLUME_CLASS_4_HEMORRHAGE, BLOOD_VOLUME_CLASS_2_HEMORRHAGE, _bloodVolume, GVAR(chanceMin), GVAR(chanceMax), true];

if (random 1 >= _successChance) exitWith {
  TRACE_2("AED random fail",_bloodVolume,_successChance);
};

TRACE_2("AED random success",_bloodVolume,_successChance);
[QGVAR(aedSucceeded), _patient] call CBA_fnc_localEvent;
