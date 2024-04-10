#include "script_component.inc.sqf"
/*
 * Author: Ashes
 * Lower the plow for the target vehicle, setting the plow to the specified mode.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Plow Mode <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, PLOW_NONE] call sws_vehicletrenches_fnc_lowerPlow
 *
 * Public: No
 */

params ["_vehicle", "_plowMode"];

// Grab config for the vehicle's plow
private _config = configFile >> "CfgVehicles" >> typeOf _vehicle >> "PlowConfig";
if (!(isClass _config)) exitWith {
	ERROR_1("Attempted to lowerPlow on invalid vehicle: %1",_vehicle);
};
private _animation = (_config >> "animation") call BIS_fnc_getCfgData;
private _plowLowered = (_config >> "plowLowered") call BIS_fnc_getCfgData;
private _type = (_config >> "type") call BIS_fnc_getCfgData;

// Start animation
if (_type == "animate") then {
	_vehicle animate [_animation, _plowLowered];
} else {
	_vehicle animatesource [_animation, _plowLowered];
};
_vehicle setCruiseControl [7, false];
_vehicle setVariable [QGVAR(plowMode), PLOW_MOVING, true]; // animating state to prevent multi execution
hintSilent "Lowering plow...";

[{
	// Check for animation finish
	params ["_vehicle", "_type", "_animation", "_plowLowered", "_plowMode"];
	if (_type == "animate") then {
		(_vehicle animationPhase _animation == _plowLowered);
	} else {
		(_vehicle animationSourcePhase _animation == _plowLowered);
	};
},
{
	// Apply plow mode on finish
	params ["_vehicle", "_type", "_animation", "_plowLowered", "_plowMode"];
	_vehicle setVariable [QGVAR(plowMode), _plowMode, true];
	hintSilent "Plow lowered.";
	// Add frame event handler for the lowered plow
	[QGVAR(addBuildHandler), [_vehicle]] call CBA_fnc_localEvent;
}, [_vehicle, _type, _animation, _plowLowered, _plowMode]] call CBA_fnc_waitUntilAndExecute;
