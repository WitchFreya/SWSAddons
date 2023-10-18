#include "script_component.hpp"

/*
 * Author: Maid
 * Retrieve the user data from the database.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * User Info <HASHMAP>
 *
 * Public: No
 */

params ["_name", "_uid"];

if (isNil "_player") exitWith {
    ERROR_1("Cannot retrieve an empty player's data.",_this);
};

private _db = call FUNC(getDb);

private _playerCreated = [_uid, _name, _db] call FUNC(upsertPlayer);
if (!_playerCreated) exitWith {
    ERROR_3("Unable to create player",_player,_name,_uid);
};
TRACE_2("Player created",_name,_uid);

private _keys = ["getKeys", _uid] call _db;

private _userInfo = _keys apply {
    private _fallback = if (_x == "name") then {""} else {0};
    private _value = ["read", [_uid, _x, _fallback]] call _db;
    [_x, _value];
};
TRACE_1("UserInfo retrieved",_userInfo);

createHashMapFromArray _userInfo;
