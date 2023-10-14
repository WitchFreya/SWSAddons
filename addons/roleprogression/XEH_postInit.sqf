#include "script_component.hpp"

["CBA_loadoutSet", {
    params ["_unit", "_loadout", "_extendedInfo"];
    GVAR(role) = _extendedInfo getOrDefault [QGVARMAIN(role), "Default"];
}] call CBA_fnc_addEventHandler;

["CBA_loadoutGet", {
    params ["_unit", "_loadout", "_extendedInfo"];
    _extendedInfo set [QGVARMAIN(role), GVAR(role)];
}] call CBA_fnc_addEventHandler;

[QGVAR(debrief), {
    if (isDedicated) exitWith {};
    [GVAR(role)] params [["_role", "Default"]];
    [getPlayerUID ace_player, profileName, _role] remoteExec [QFUNC(saveRole), 2];
}] call CBA_fnc_addEventHandler;
