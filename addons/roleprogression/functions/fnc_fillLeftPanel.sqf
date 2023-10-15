#include "script_component.hpp"
#include "../defines.hpp"

/*
 * Author: Maid
 * Populate the arsenal with the role selection info.
 *
 * Arguments:
 * 0: Arsenal display <DISPLAY>
 * 1: Tab control idc <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_display", "_panelIdc"];
private _ctrlPanel = _display displayCtrl IDC_leftTabContent;

if (_panelIDC != IDC_buttonRole) exitWith {};

private _roles = uiNamespace getVariable [QGVAR(rolesCache), []];

TOGGLE_RIGHT_PANEL_HIDE;
lbClear _ctrlPanel;

{
    private _className = configName _x;
    private _displayName = [_x, "displayName", _className] call BIS_fnc_returnConfigEntry;
    private _itemPicture = [_x, "icon", QPATHTOF(data\sws_icon_howl_ca.paa)] call BIS_fnc_returnConfigEntry;

    TRACE_3("Adding role:",_className,_displayName,_itemPicture);
    private _lbAdd = _ctrlPanel lbAdd _displayName;
    _ctrlPanel lbSetData [_lbAdd, _className];
    _ctrlPanel lbSetPicture [_lbAdd, _itemPicture];
    private _usage = format ["Select this item to get credit for running as %1 when an op ends.",
        toLower _displayName
    ];
    _ctrlPanel lbSetTooltip [_lbAdd, _usage];

    if (GVAR(role) == _className) then {
        _ctrlPanel lbSetCurSel _lbAdd;
        TRACE_1("Selecting role", _lbAdd);
    };
} forEach _roles;
