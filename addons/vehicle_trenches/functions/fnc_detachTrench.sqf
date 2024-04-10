#include "script_component.inc.sqf"
/*
 * Author: Ashes
 * detaches an associated trench from its applied vehicle
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Trench <OBJECT>
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [_vehicle, _trench] call sws_vehicletrenches_fnc_detachTrench
 *
 * Public: No
 */

params ["_vehicle", "_trench"];

detach _trench;
_vehicle setVariable [QGVAR(trenchDigged), objNull, true];
_vehicle setVariable [QGVAR(isDigging), false, true];
_trench setVariable ["ace_trenches_placeData", [getPos _trench, [vectorDir _trench, vectorUp _trench]], true];
["grad_trenches_functions_fnc_continueDiggingTrench", [_trench, _unit, false], _unit] call CBA_fnc_targetEvent;
