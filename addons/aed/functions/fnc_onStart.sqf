#include "script_component.hpp"

/*
 * Author: Maid
 * Handles starting the AED usage.
 *
 * Arguments:
 * 0: medic <OBJECT> - The unit attempting to use the AED.
 * 1: patient <OBJECT> - The unit to try defibrillating.
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject] call sws_aed_fnc_onStart;
 *
 * Public: No
 */

params [
  ["_medic", objNull, [objNull]],
  ["_patient", objNull, [objNull]]
];

TRACE_2("AED Start",_medic,_patient);

_this call ace_medical_treatment_fnc_cprStart;
