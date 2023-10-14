#include "script_component.hpp"

params ["_uid", "_playerName", "_role"];

private _db = call FUNC(getDb);

if (!([_uid, _playerName, _db] call FUNC(upsertPlayer))) exitWith {
    ERROR_1("Couldn't create player", _db);
};

private _currentCount = ["read", [_uid, _role, 0]] call _db;
["write", [_uid, _role, _currentCount + 1]] call _db;
