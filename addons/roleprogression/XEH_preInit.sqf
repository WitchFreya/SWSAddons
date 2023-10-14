#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

#include "defines.hpp"

GVAR(roles) = "getNumber (_x >> 'scope') > 0" configClasses (configFile >> "CfgRoles");
GVAR(role) = "Default";

["ace_arsenal_leftPanelFilled", {
    params ["_display", "_panelIdc"];
    private _ctrlPanel = _display displayCtrl IDC_leftTabContent;

    if (_panelIDC != IDC_buttonRole) exitWith {};
    [_ctrlPanel] call FUNC(onRoleMenuOpen);
}] call CBA_fnc_addEventHandler;
