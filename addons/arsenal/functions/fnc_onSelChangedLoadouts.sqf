#include "script_component.inc.sqf"
#include "defines.inc.sqf"
/*
 * Author: Maid
 * On selection change in loadouts.
 *
 * Arguments:
 * 0: Loadout display <DISPLAY>
 * 1: Tab control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Public: No
*/

TRACE_1(QGVAR(DOUBLES(fnc,onSelChangedLoadouts)),_this);

params ["_control", "_curSel"];

private _ctrlGroup = ctrlParentControlsGroup _control;
private _migrateButtonCtrl = _ctrlGroup controlsGroupCtrl IDC_buttonMigrate;

_migrateButtonCtrl ctrlEnable false;

if (_curSel == -1 || { ace_arsenal_currentLoadoutsTab != IDC_buttonMyLoadouts }) exitWith {
  TRACE_2("Exiting",_curSel,ace_arsenal_currentLoadoutsTab);
  _migrateButtonCtrl ctrlCommit 0;
};

private _loadoutName = _control lnbText [_curSel, 1];
private _allLoadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];
_allLoadouts select {
  _x params ["_name"];
  _name == _loadoutName;
} select 0 params ["_name", "_extendedLoadout"];

// avoid mutating the loadout by creating a copy first
[+_extendedLoadout] call ace_arsenal_fnc_verifyLoadout params [
  "",
  "_nullItemsList",
  "_unavailableItems"
];

private _missingItems /* string[] */ = _nullItemsList + _unavailableItems;
if (_missingItems isEqualTo []) exitWith {
  TRACE_1("No items missing in loadout",_missingItems);
  _migrateButtonCtrl ctrlCommit 0;
};

private _uniqueMissingItems = _missingItems arrayIntersect _missingItems;
private _migrations = uiNamespace getVariable [QGVAR(loadoutMigrations), createHashMap];
private _migratableItems = (keys _migrations) arrayIntersect _uniqueMissingItems;
if (_migratableItems isEqualTo []) exitWith {
  TRACE_1("No items to migrate",_uniqueMissingItems);
  _migrateButtonCtrl ctrlCommit 0;
};

_migrateButtonCtrl ctrlEnable true;
_migrateButtonCtrl ctrlCommit 0;
