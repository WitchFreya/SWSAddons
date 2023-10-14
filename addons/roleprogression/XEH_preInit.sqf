#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

#include "defines.hpp"

["ace_arsenal_leftPanelFilled", {
    params ["_display", "_panelIdc"];
    private _ctrlPanel = _display displayCtrl IDC_leftTabContent;


    if (_panelIDC != IDC_buttonRole) exitWith {};
    [_display] call FUNC(onRoleMenuOpen);
}] call CBA_FNC_addEventHandler;
