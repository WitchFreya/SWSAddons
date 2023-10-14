#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

#include "defines.hpp"

GVAR(roles) = "getNumber (_x >> 'scope') > 0" configClasses (configFile >> "CfgRoles");

["ace_arsenal_leftPanelFilled", {
    params ["_display", "_panelIdc"];
    private _ctrlPanel = _display displayCtrl IDC_leftTabContent;

    if (_panelIDC != IDC_buttonRole) exitWith {};
    [_ctrlPanel] call FUNC(onRoleMenuOpen);
}] call CBA_fnc_addEventHandler;

["ace_arsenal_rightPanelFilled", {
    params ["_display", "", "_panelIdc"];
    private _ctrlPanel = displayCtrl IDC_rightTabContent;
    if (_panelIDC != IDC_buttonMisc) exitWith {};
}] call CBA_fnc_addEventHandler;

["ace_arsenal_weaponItemChanged", {
    {
        TRACE_1("Prop", _x);
    } forEach _this;
}] call CBA_fnc_addEventHandler;
