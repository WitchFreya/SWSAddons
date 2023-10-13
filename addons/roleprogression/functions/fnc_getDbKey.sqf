#include "script_component.hpp"

params ["_player"];
private _id = getPlayerUID _player;
if (_id == "") exitWith {
    ERROR("fnc_getDbKey: _id was empty.");
    -1;
};

private _insignia = [_player] call BIS_fnc_getUnitInsignia;

if (!("SWS_" in _insignia)) exitWith {
    TRACE_1("fnc_getDbKey: Unit insignia was not one of ours.",_insignia);
    0;
};

private _role = configFile >> "CfgUnitInsignia" >> _insignia >> GVAR(role);

if (isNil "_role") exitWith {
    ERROR_1(QUOTE(fnc_getDbKey: GVAR(role) was empty.),_insignia);
    -1;
};

[_insignia, _role];
