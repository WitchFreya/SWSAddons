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

params ["_role"];
private _oldRole = GVAR(role);

if (_oldRole == _role) exitWith {};
GVAR(role) = _role;

[QGVAR(roleChanged), [_selection, _oldRole]] call CBA_fnc_localEvent;
