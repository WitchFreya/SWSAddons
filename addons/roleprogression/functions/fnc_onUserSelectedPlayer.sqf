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
if (isNil "_playerObject") exitWith {
    TRACE_1("Null player",_networkId);
};

// if we're testing things locally we're done
if (local _playerObject && { hasInterface } && { !isServer }) exitWith {
    [QGVAR(userLocal), [_playerObject]] call CBA_fnc_serverEvent;
};

[_playerObject, "Local", {
    params ["_player", "_isLocal"];
    TRACE_2("Local",_player,_isLocal);
    _player removeEventHandler ["Local", _thisID];
    if (!_isLocal) exitWith {};
    [QGVAR(userLocal), [_playerObject]] call CBA_fnc_serverEvent;
}, [_roleHistory]] call CBA_fnc_addBISEventHandler;
