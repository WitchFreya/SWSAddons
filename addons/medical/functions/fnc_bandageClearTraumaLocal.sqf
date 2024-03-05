#include "script_component.inc.sqf"

/*
 * Author: Maid, based on Ace https://github.com/acemod/ACE3/blob/4d487dc33e46ee51b3d4a5be3d458f5841c3c811/addons/medical_treatment/functions/fnc_bandageLocal.sqf
 * Clear trauma on an individual limb of a given injury type or types. Based on the ACE medical treatment functions.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * 1: Body Part <STRING>
 * 2: Treatment <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "head", "SWS_Medigel"] call sws_medical_fnc_bandageLocalClearTrauma
 *
 * Public: No
 */

TRACE_1("bandageLocalClearTrauma",_this);

if !(local _patient) exitWith {
  [QGVAR(bandageLocalClearTrauma),_this,_patient] call CBA_fnc_targetEvent;
};

if !(GVAR(clearBruiseOnMedigel)) exitWith {
  TRACE_1("Calling bandageLocal normally",GVAR(clearBruiseOnMedigel));
  _this call ace_medical_treatment_fnc_bandageLocal;
};
TRACE_1("Calling bandageLocal with clearTrauma patch",GVAR(clearBruiseOnMedigel));
private _previousClearTraumaSetting = ace_medical_treatment_clearTrauma;
ace_medical_treatment_clearTrauma = 2;
_this call ace_medical_treatment_fnc_bandageLocal;
ace_medical_treatment_clearTrauma = _previousClearTraumaSetting;
