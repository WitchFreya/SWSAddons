#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Spawn a vehicle to drop a resupply.
 *
 * Arguments:
 * 0: Vehicle type <STRING>
 * 1: Vehicle spawn position <PosAGL>
 * 2: Vehicle airdrop position <Position2D>
 * 3: Total number of resupplies per person <NUMBER> OPTIONAL - Defaults to -1 for infinite.
 * 4: Total number of resupplies <NUMBER> OPTIONAL - Defaults to -1 for infinite.
 *
 * Return Value:
 * None
 *
 * Example:
 * ["Splits_UNSC_D77_TC_Pelican", getPosATL player vectorAdd [0, 0, 100], [200, 200], [player]] call sws_resupply_fnc_spawnAirdropResupply;
 *
 * Public: No
 */

TRACE_1(QGVAR(fnc_spawnAirdropResupply),_this);

params [
  ["_airVicClassName", "Splits_UNSC_D77_TC_Pelican", [""]],
  ["_spawnPosAGL", [], [[]]],
  ["_destinationPos", [], [[]]],
  ["_totalPerPerson", -1, [0]],
  ["_total", -1, [0]]
];

private _airVicCfg = configFile >> "CfgVehicles" >> _airVicClassName;
if !(isClass _airVicCfg) exitWith {
  [format ["Invalid aircraft: %1", _airVicClassName]] call ace_zeus_fnc_showMessage;
};

private _height = _spawnPosAGL select 2;
private _destinationPosAGL = (_destinationPos select [0, 2]) + [_height];
private _direction = _spawnPosAGL getDir _destinationPos;
private _cargo = createVehicle ["SWS_Box_TeamSupplies", [0, 0], [], 0, "CAN_COLLIDE"];
[_cargo, _totalPerPerson, _total] call FUNC(setRestockAmount);

private _aircraft = createVehicle [_airVicClassName, _spawnPosAGL, [], 0, "FLY"];

[_cargo, _aircraft, true] call ace_cargo_fnc_loadItem;
["ace_cargoUnloaded", {
  params ["_object", "_vehicle", "_unloadType"];
  _thisArgs params ["_cargo"];
  if (_unloadType != "paradrop" || {!(_cargo isEqualTo _object)}) exitWith {};
  _cargo setVelocity [0, 0, -30];
  ["ace_cargoUnloaded", _thisId] call CBA_fnc_removeEventHandler;
}, [_cargo]] call CBA_fnc_addEventHandlerArgs;

_aircraft setPosATL _spawnPosAGL;
_aircraft setDir _direction;
_aircraft setVelocity [sin _direction * 100, cos _direction * 100, 0];
_aircraft flyInHeight _height;

private _group = civilian createVehicleCrew _aircraft;
private _dropWP = _group addWaypoint [AGLToASL _destinationPosAGL , -1];
_dropWP setWaypointType "SCRIPTED";
_dropWP setWaypointScript "\z\ace\addons\zeus\functions\fnc_moduleCargoParadropWaypoint.sqf";

private _waypointEnd = _group addWaypoint [_spawnPosAGL, -1];
_waypointEnd setWaypointType "MOVE";
_waypointEnd setWaypointBehaviour "CARELESS";
_waypointEnd setWaypointCombatMode "BLUE";
_waypointEnd setWaypointSpeed _speed;

_waypointEnd setWaypointStatements ["true", toString {
  private _units = units group this;
  private _vehicles = _units apply { vehicle _x };
  private _toRemove = _units + (_vehicles arrayIntersect _vehicles);
  { deleteVehicle _x; } forEach _toRemove;
}];
