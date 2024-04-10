#include "script_component.inc.sqf"
/*
 * Author: Ashes
 * Raise the plow for the target vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, PLOW_NONE] call sws_vehicletrenches_fnc_raisePlow
 *
 * Public: No
 */

params ["_vehicle"];

// Grab config for the vehicle's plow
private _config = configFile >> "CfgVehicles" >> typeOf _vehicle >> "PlowConfig";
if (!(isClass _config)) exitWith {
	ERROR_1("Attempted to lowerPlow on invalid vehicle: %1",_vehicle);
};
private _animation = (_config >> "animation") call BIS_fnc_getCfgData;
private _plowRaised = (_config >> "plowRaised") call BIS_fnc_getCfgData;
private _type = (_config >> "type") call BIS_fnc_getCfgData;

// Start animation
if (_type == "animate") then {
	_vehicle animate [_animation, _plowRaised];
} else {
	_vehicle animatesource [_animation, _plowRaised];
};

_vehicle setCruiseControl [0, false];
_vehicle setVariable [QGVAR(plowMode), PLOW_MOVING, true]; // animating state to prevent multi execution
hintSilent "Raising plow...";

[{
	// Check for animation finish
	params ["_vehicle", "_type", "_animation", "_plowRaised"];
	if (_type == "animate") then {
		(_vehicle animationPhase _animation == _plowRaised)
	} else {
		(_vehicle animationSourcePhase _animation == _plowRaised)
	};
},
{
	// Set plow mode to raised
	params ["_vehicle", "_type", "_animation", "_plowRaised"];
	_vehicle setVariable [QGVAR(plowMode), PLOW_UP, true];
	hintSilent "Plow raised.";
}, [_vehicle, _type, _animation, _plowRaised]] call CBA_fnc_waitUntilAndExecute;
