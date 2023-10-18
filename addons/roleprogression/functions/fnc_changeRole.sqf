#include "script_component.hpp"

/*
 * Author: Maid
 * Updates a unit's role. Should only run locally.
 *
 * Arguments:
 * 0: The new role <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_role", "_who"];

if (!local player || { player != _who }) exitWith {
    GVAR(playerRoles) set [name _who, _role];
    [QGVAR(playerRolesChanged), [name _who, _role]] call CBA_fnc_localEvent;
};

private _oldRole = GVAR(myRole);

if (_oldRole == _role) exitWith {};
GVAR(myRole) = _role;

[QGVAR(roleChanged), [_selection, _oldRole]] call CBA_fnc_localEvent;
