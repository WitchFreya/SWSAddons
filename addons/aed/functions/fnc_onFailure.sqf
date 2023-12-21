#include "script_component.hpp"

/*
 * Author: Maid
 * Handles failure of the AED treatment.
 *
 * Arguments:
 * 0: medic (not used) <OBJECT> - The unit attempting to use the AED.
 * 1: patient <OBJECT> - The unit to try defibrillating.
 *
 * Return Value:
 * BOOL - True if can use AED, false otherwise.
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

_this call ace_medical_treatment_fnc_cprFailure;
