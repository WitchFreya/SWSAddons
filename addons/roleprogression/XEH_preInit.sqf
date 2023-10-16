#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

["ace_arsenal_leftPanelFilled", {
    _this call FUNC(fillLeftPanel);
}] call CBA_fnc_addEventHandler;

if (!isMultiplayer) exitWith {};

[QGVAR(userRoleDataRetrieved), {
    params ["_roleMap"];
    TRACE_1(QGVAR(userRoleDataRetrieved),_roleMap);
    GVAR(roleHistory) = compileFinal _roleMap;
    [GVAR(roleHistory)] call FUNC(addMyRoleHistory);
}] call CBA_fnc_addEventHandler;

[missionNamespace, "OnUserSelectedPlayer", {
    TRACE_1("OnUserSelectedPlayer",_this);
    _this call FUNC(onUserSelectedPlayer);
}] call CBA_fnc_addBISEventHandler;
