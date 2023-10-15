#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

["ace_arsenal_leftPanelFilled", {
    _this call FUNC(fillLeftPanel);
}] call CBA_fnc_addEventHandler;

[missionNamespace, "PlayerConnected", {
    params ["", "_uid", "_name", "", "_owner"];
    TRACE_4("PlayerConnected",_uid,_name,_owner);
    [_uid, _name, _owner] call FUNC(onPlayerConnected);
}] call CBA_fnc_addBISEventHandler;
