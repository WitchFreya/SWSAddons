#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Drop an orbital resupply on the position.
 *
 * Arguments:
 * 0: Units to resupply <OBJECT[]>
 * 1: Drop height in meters <NUMBER>
 * 2: Destination drop position <PosASL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[player], 100, [0, 0, 0]] call sws_resupply_fnc_orbitalResupplyPos;
 *
 * Public: No
 */

params [
  ["_unitsToResupply", [], [[]]],
  ["_dropHeight", 100, [0]],
  ["_dropPosition", [0, 0, 0], [[]]]
];

TRACE_1(QGVAR(fnc_orbitalResupplyPos),_this);

private _spawnType = ["ground", "chute"] select (_dropHeight > 0);

if (_spawnType != "ground") exitWith {
  ["Only spawning at ground height is supported for now."] call ace_zeus_fnc_showMessage;
};

private _box = createVehicle ["SWS_Ammo_SupplyPod", ASLToATL _dropPosition, [], 0, "CAN_COLLIDE"];
[_box, _unitsToResupply] call FUNC(addRestockAction);
