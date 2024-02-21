#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Simultaneously apply bandage and medication.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 * 3: Treatment <STRING> - the type from ACE_Medical_Treatment_Actions
 * 4: Item User (not used) <OBJECT>
 * 5: Used Item <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject, "RightArm", "SWS_Medigel", objNull, "SWS_Biofoam"] call sws_medical_fnc_treatMedicationBandageCombo
 *
 * Public: No
 */

params ["_medic", "_patient", "_bodyPart", "_className", "", "_usedItem"];

TRACE_1("Treat Medication",_this);
// displayNameShort > displayName > item class name.
private _itemConfig /* config */ = configFile >> "CfgWeapons" >> _usedItem;
private _displayNameShort /* string | nil */ = (_itemConfig >> "displayNameShort") call BIS_fnc_getCfgData;
private _displayName /* string */ = if (isNil {_displayNameShort}) then {
  [_itemConfig, "displayName", _usedItem] call BIS_fnc_returnConfigEntry;
} else {_displayNameShort};

private _medicName /* string */ = [_medic, false, true] call ace_common_fnc_getName;

[_patient, _usedItem] call ace_medical_treatment_fnc_addToTriageCard;

[_patient, "activity", "STR_ACE_Medical_Treatment_Activity_usedItem", [_medicName, _displayName]] call ace_medical_treatment_fnc_addToLog;

{
  private _eventName /* string */ = format ["ace_medical_treatment_%1Local", _x];
  [_eventName, [_patient, _bodyPart, _className], _patient] call CBA_fnc_targetEvent;
} forEach ["medication", "bandage"];
