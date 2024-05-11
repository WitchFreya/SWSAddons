#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Handles finishing AED on the patient.
 *
 * Arguments:
 * 0: medic <OBJECT> - The unit attempting to use the AED.
 * 1: patient <OBJECT> - The unit to try defibrillating.
 *
 * Return Value:
 * None
 *
 * Example:
 * [_medic, _patient] call sws_aed_fnc_canUse;
 *
 * Public: No
 */

params [
  ["_medic", objNull, [objNull]],
  ["_patient", objNull, [objNull]]
];

TRACE_2("AED success",_medic,_patient);

playSound3D [QPATHTO_R(sounds\bump.ogg), objNull, false, getPosASL _patient, 5, 1, 15];

_patient setVariable ["ace_medical_CPR_provider", objNull, true];

// patient is not in a vehicle
if (vehicle _patient isEqualTo _patient) then {
  private _bystanders = nearestObjects [_medic, ["CAManBase"], 1.7] - [_medic];
  {
    [_x] call FUNC(punishHubris);
  } forEach _bystanders;
};

if !(alive _patient || {_patient getVariable ["ace_medical_inCardiacArrest", false]}) exitWith {
  TRACE_1("Not alive or in cardiac arrest",_patient);
  [_medic, _patient, "HEAD"] call ace_medical_treatment_fnc_checkPulse;
};

TRACE_1("Sending AED local event",_patient);
[QGVAR(aedLocal), [_medic, _patient], _patient] call CBA_fnc_targetEvent;
[_medic, _patient, "HEAD"] call ace_medical_treatment_fnc_checkPulse;
