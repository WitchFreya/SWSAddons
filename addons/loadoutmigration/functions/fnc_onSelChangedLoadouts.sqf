#include "script_component.hpp"
#include "..\defines.hpp"
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

// Pass through to ACE.
_this call ace_arsenal_fnc_onSelChangedLoadouts;

params ["_display", "_control", "_curSel"];

private _migrateButtonCtrl = _display displayCtrl IDC_buttonMigrate;

if (_curSel == -1 || { ace_arsenal_currentLoadoutsTab != IDC_buttonMyLoadouts }) exitWith {
    TRACE_2("Exiting",_curSel,ace_arsenal_currentLoadoutsTab);
    _migrateButtonCtrl ctrlEnable false;
    _migrateButtonCtrl ctrlCommit 0;
};

private _contentPanelCtrl = _display displayCtrl IDC_contentPanel;
private _loadoutName = _contentPanelCtrl lnbText [_curSel, 1];
private _allLoadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];
private _selectedLoadoutIdx = _allLoadouts findIf {
    _x params ["_name"];
    _name == _loadoutName;
};

private _selectedLoadout = _allLoadouts select _selectedLoadoutIdx;

_selectedLoadout params ["_name", "_items"];

private _verifiedItems = +_items;

private _verified = [_verifiedItems] call ace_arsenal_fnc_verifyLoadout;
_verified params ["", "_nullItemsCount"];

if (_nullItemsCount != 0) exitWith {
    _migrateButtonCtrl ctrlEnable true;
    _migrateButtonCtrl ctrlCommit 0;
    0
};

TRACE_1("Null items",_nullItemsCount);

_migrateButtonCtrl ctrlEnable false;
_migrateButtonCtrl ctrlCommit 0;
