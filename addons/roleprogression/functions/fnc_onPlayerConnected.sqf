#include "script_component.hpp"

/*
 * Author: Maid
 * Handles the player connecting to a multiplayer instance and retrieving their data.
 *
 * Arguments:
 * 0: User steam id <STRING>
 * 1: Profile name <STRING>
 * 2: User object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_uid", "_name", "_player"];
private _db = call FUNC(getDb);
private _playerCreated = [_uid, _name, _db] call FUNC(upsertPlayer);
if (!_playerCreated) exitWith {
    ERROR_1("Unable to create player",_playerCreated);
};
private _roleMap = [_uid, _db] call FUNC(retrieveUser);
TRACE_2("User retrieved",_roleMap);
[QGVAR(userRoleDataRetrieved), [_roleMap], _player] call CBA_fnc_ownerEvent;
