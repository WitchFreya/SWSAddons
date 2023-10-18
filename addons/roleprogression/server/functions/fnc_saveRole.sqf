#include "script_component.hpp"

/*
 * Author: Maid
 * Saves the role progress to the database. Should only run on the server.
 *
 * Arguments:
 * 0: Player UID <STRING>
 * 1: Player in-game profile name <STRING>
 * 2: Role <STRING> (default: GVAR(defaultRole))
 *
 * Return Value:
 * true if is write was successfull, false if not
 *
 * Public: No
 */

params ["_uid", "_playerName", ["_role", GVAR(defaultRole)]];

private _db = call FUNC(getDb);

if (!([_uid, _playerName, _db] call FUNC(upsertPlayer))) exitWith {
    ERROR_1("Couldn't create player", _db);
};

private _currentCount = ["read", [_uid, _role, 0]] call _db;
["write", [_uid, _role, _currentCount + 1]] call _db;
