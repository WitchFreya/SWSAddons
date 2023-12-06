#include "script_component.hpp"
/*
 * Author: Ashes
 * Detatches an associated trench from its applied vehicle
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Trench <OBJECT>
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [_vehicle, _trench] call sws_vehicletrenches_fnc_detatchTrench
 *
 * Public: No
 */

params ["_vehicle", "_trench"];

detach _trench;
_vehicle setVariable [QGVAR(trenchDigged), objNull, true];
_vehicle setVariable [QGVAR(isDigging), false, true];
_trench setVariable ["ace_trenches_placeData", [getPos _trench, [vectorDir _trench, vectorUp _trench]], true];
[QGVAR(continueDiggingTrench), [_trench, _unit, false], _unit] call CBA_fnc_targetEvent;