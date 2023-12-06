#include "script_component.hpp"
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
	diag_log format ["No plow configuration found for %1", typeOf _vehicle];
};
private _animation = getText (_config >> "animation");
private _plowRaised = getNumber (_config >> "plowRaised");
private _type = getText (_config >> "type");

// Start animation
if (_type == "animate") then {
	_vehicle animate [_animation, _plowRaised];
} else {
	_vehicle animatesource [_animation, _plowRaised];
};

_vehicle setCruiseControl [0, false];
_vehicle setVariable [QGVAR(plowMode), PLOW_MOVING, true]; // animating state to prevent multi execution
hint "Raising plow...";

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
	hint "Plow raised.";
}, [_vehicle, _type, _animation, _plowRaised]] call CBA_fnc_waitUntilAndExecute;
