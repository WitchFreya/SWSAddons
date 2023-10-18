#include "script_component.hpp"

/*
 * Author: Maid
 * Find an existing player in the database by UID and update the name or create it if it doesn't exist.
 *
 * Arguments:
 * 0: Player UID <STRING>
 * 1: Player in-game profile name <STRING>
 * 2: inidb2 instance <INIDBI2> (default: GVAR(defaultRole))
 *
 * Return Value:
 * true if is write was successfull, false if not
 *
 * Public: No
 */

params ["_uid", "_playerName", "_db"];

private _section = _uid;
if (_section in ["_SP_AI_", "_SP_PLAYER_", ""]) exitWith {
    ERROR_1("Invalid player UID", _section);
};

private _name = ["read", [_section, "name", ""]] call _db;
if (_name == _playerName) exitWith {
    true;
};

["write", [_section, "name", _playerName]] call _db;
