#include "script_component.hpp"
#include "../defines.hpp"

/*
 * Author: Maid
 * Migrate the selected loadout if possible.
 *
 * Arguments:
 * 0: Arsenal display <DISPLAY>
 * 1: Button control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Public: No
*/

params ["_display","_control"];

if !(ctrlEnabled _control) exitWith {};

private _contentPanelCtrl = _display displayCtrl IDC_contentPanel;
private _curSel = lnbCurSelRow _contentPanelCtrl;
private _loadoutName = _contentPanelCtrl lnbText [_curSel, 1];

private _extendedLoadout = switch (ace_arsenal_currentLoadoutsTab) do {
    // Local and default loadouts
    case IDC_buttonMyLoadouts;
    case IDC_buttonDefaultLoadouts: {
        (_contentPanelCtrl getVariable _loadoutName + str ace_arsenal_currentLoadoutsTab) select 0
    };
    // Shared loadouts
    case IDC_buttonSharedLoadouts: {
        (ace_arsenal_sharedLoadoutsNamespace getVariable ((_contentPanelCtrl lnbText [_curSel, 0]) + (_contentPanelCtrl lnbText [_curSel, 1]))) select 2
    };
};

private _newLoadout = [ace_arsenal_center,_loadoutName] call FUNC(migrateLoadout);
if (_newLoadout == -1) exitWith {0}; // Not a valid loadout to migrate.
[ace_arsenal_center, _newLoadout, true] call CBA_fnc_setLoadout;
ctrlSetText [IDC_textEditBox, _loadoutName + " (Migrated)"];
private _saveControl = _display displayCtrl IDC_buttonSave;
[_display,_saveControl] call ace_arsenal_fnc_buttonLoadoutsSave;
