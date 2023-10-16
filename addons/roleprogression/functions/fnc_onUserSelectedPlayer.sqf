#include "script_component.hpp"

/*
 * Author: Maid
 * Handles the player connecting to a multiplayer instance and retrieving their data.
 *
 * Arguments:
 * 0: If on a dedicated server, this is a random number. Kill me. If not, this is the steamId. <STRING>
 * 1: User <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_networkId", "_playerObject"];
private _uid = if (local _playerObject) then {
    getPlayerUID _playerObject;
} else {
    _networkId;
};
private _db = call FUNC(getDb);
private _playerCreated = [_uid, name _playerObject, _db] call FUNC(upsertPlayer);
if (!_playerCreated) exitWith {
    ERROR_1("Unable to create player",_playerCreated);
};
private _roleHistory = [_uid, _db] call FUNC(retrieveUser);

// if we're testing things locally we're done
if (local _playerObject) exitWith {
    [QGVAR(userRoleDataRetrieved), _roleHistory] call CBA_fnc_localEvent;
};

[_playerObject, "Local", {
    params ["_player", "_isLocal"];
    TRACE_2("Local",_player,_isLocal);
    _player removeEventHandler ["Local", _thisID];
    if (!_isLocal) exitWith {};
    [QGVAR(userRoleDataRetrieved), _thisArgs] call CBA_fnc_localEvent;
}, [_roleHistory]] call CBA_fnc_addBISEventHandler;
