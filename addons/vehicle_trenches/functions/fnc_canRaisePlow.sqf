#include "script_component.inc.sqf"
/*
 * Author: Ashes
 * Check for whether the given player is able to raise the vehicle's plow.
 *
 * Player must be driver
 * Plow must *not* be moving or raised
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [_vehicle, _player] call sws_vehicletrenches_fnc_canRaisePlow
 *
 * Public: No
 */

params ["_target", "_player"];

private _driver = (driver _target);
(_driver isEqualTo _player && {
	private _mode = _target getVariable [QGVAR(plowMode), PLOW_UP];
	_mode != PLOW_UP && _mode != PLOW_MOVING;
});
