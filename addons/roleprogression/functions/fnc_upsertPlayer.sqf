#include "script_component.hpp"

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
