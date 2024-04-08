#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Predicate for whether AED usage can continue.
 *
 * Arguments:
 * 0: Arguments <ARRAY>
 *   0: Medic <OBJECT>
 *   1: Patient <OBJECT>
 *
 * Return Value:
 * Continue treatment <BOOL>
 *
 * Example:
 * [[_medic, _patient]] call sws_aed_fnc_canProgress;
 *
 * Public: No
 */

params ["_args"];

_args params [
  ["_medic", objNull, [objNull]],
  ["_patient", objNull, [objNull]]
];

_this call ace_medical_treatment_fnc_cprProgress;
