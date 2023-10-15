#include "script_component.hpp"

/*
 * Author: Maid
 * Retrieve the user data from the database.
 *
 * Arguments:
 * 0: Player uid <STRING>
 * 1: Database <INIDBI2>
 *
 * Return Value:
 * User role info <MAP<NAME | ROLE>,STRING | NUMBER>
 *
 * Public: No
 */

params ["_playerId", "_db"];

private _keys = ["getKeys", _playerId] call _db;

private _userInfo = _keys apply {
    private _fallback = if (_x == "name") then {""} else {0};
    private _value = ["read", [_playerId, _x, _fallback]] call _db;
    [_x, _value];
};

createHashMapFromArray _userInfo;
