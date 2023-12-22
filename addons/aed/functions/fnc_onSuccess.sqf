#include "script_component.hpp"

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

_patient setVariable ["ace_medical_CPR_provider", objNull, true];

if !(alive _patient || {_patient getVariable ["ace_medical_inCardiacArrest", false]}) exitWith {
  TRACE_1("Not alive or in cardiac arrest",_patient);
};

TRACE_1("Sending AED local event",_patient);
[QGVAR(aedLocal), [_medic, _patient], _patient] call CBA_fnc_targetEvent;
