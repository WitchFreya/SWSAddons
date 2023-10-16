#include "script_component.hpp"

/*
 * Author: Maid
 * Retrieve the user data from the database. Must be run after the client has acknowledged a user.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_player"];

if (isNil "_player") exitWith {
    ERROR_1("Cannot retrieve an empty player's data.",_this);
};

private _db = call FUNC(getDb);
private _name = name _player;
private _uid = getPlayerUID _player;

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
[QGVAR(userRoleDataRetrieved), [createHashMapFromArray _userInfo], _player] call CBA_fnc_targetEvent;
