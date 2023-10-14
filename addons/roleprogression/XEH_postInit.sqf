#include "script_component.hpp"

GVAR(defaultRole) = "Rifleman";
GVAR(role) = GVAR(defaultRole);

["CBA_loadoutSet", {
    params ["", "", "_extendedInfo"];
    GVAR(role) = _extendedInfo getOrDefault [QGVARMAIN(role), GVAR(defaultRole)];
}] call CBA_fnc_addEventHandler;

["CBA_loadoutGet", {
    params ["", "", "_extendedInfo"];
    _extendedInfo set [QGVARMAIN(role), GVAR(role)];
}] call CBA_fnc_addEventHandler;

[QGVAR(debrief), {
    if (isDedicated) exitWith {};
    if (isNil QGVAR(role) || {
        private _roleNames = uiNamespace getVariable [QGVAR(rolesCache), []] apply { configName _x };
        !(GVAR(role) in _roleNames);
    }) exitWith {
        ERROR_1("Role was not found", GVAR(role));
    };

    [QGVAR(saveRoleProgress), [
        getPlayerUID ace_player,
        profileName,
        GVAR(role)
    ]] call CBA_fnc_serverEvent;
}] call CBA_fnc_addEventHandler;

[QGVAR(saveRoleProgress), {
    _this call FUNC(saveRole);
}] call CBA_fnc_addEventHandler;

[QGVAR(changeRole), {
    params ["_selection"];
    private _oldRole = GVAR(role);
    GVAR(role) = _selection;

    [QGVAR(roleChanged), [_selection, _oldRole]] call CBA_fnc_localEvent;
}] call CBA_fnc_addEventHandler;

private _action = ["recordRole", "[SWS] Record Role Progress", "", FUNC(debrief), {true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;
