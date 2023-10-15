#include "script_component.hpp"

/*
 * Author: Maid
 * Run role tracking when debrief occurs.
 *
 * Arguments:
 * 0: Player who sent the debrief command <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_caller"];

if (isDedicated) exitWith {
    TRACE_1("Debrief initiated",_caller);
};

if (isNil QGVAR(role)) exitWith {
    ERROR_1("Role not set",GVAR(role));
};

private _knownRoles = uiNamespace getVariable [QGVAR(rolesOrder), []];

if (!(GVAR(role) in _knownRoles)) exitWith {
    ERROR_2("Role not in cache",GVAR(role),_knownRoles);
};

[QGVAR(saveRoleProgress), [getPlayerUID ace_player, profileName, GVAR(role)]] call CBA_fnc_serverEvent;
