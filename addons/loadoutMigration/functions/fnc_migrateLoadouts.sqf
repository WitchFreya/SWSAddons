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

private _verified = [_extendedLoadout] call ace_arsenal_fnc_verifyLoadout;
TRACE_1("Verified",_verified);

_verified params ["","_nullItemsAmount","_unavailableItemsAmount","_nullItemsList","_unavailableItemsList"];

TRACE_4("Item Breakdown",_nullItemsAmount,_unavailableItemsAmount,_nullItemsList,_unavailableItemsList);
