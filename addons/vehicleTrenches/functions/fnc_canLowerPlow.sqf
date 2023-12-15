#include "script_component.hpp"
/*
 * Author: Ashes
 * Check for whether the given player is able to lower the vehicle's plow.
 *
 * Player must be driver
 * Plow must be raised
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [_vehicle, _player] call sws_vehicletrenches_fnc_canLowerPlow
 *
 * Public: No
 */
params ["_target", "_player"];

private _driver = (driver _target);
(_driver isEqualTo _player && { _target getVariable [QGVAR(plowMode), PLOW_UP] == PLOW_UP });
