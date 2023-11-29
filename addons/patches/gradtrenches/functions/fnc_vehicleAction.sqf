#include "script_component.hpp"
/*
 * Author: Ashes
 * Add plow actions to vehicles that can dig.
 * Based on work by Salbei from grad_trenches
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * vehicle ACE_player call grad_trenches_functions_vehicleAction
 *
 * Public: No
 */

params ["_vehicle"];

if (!(isClass (configFile >> "CfgDigVehicles" >> typeOf _vehicle))) exitWith {
    diag_log format ["Vehicle Digging not supported on %1", typeOf _vehicle];
};

if ((_vehicle getVariable [QGVAR(plowMode), ""]) == PLOW_NONE) exitWith {
    WARNING_1("attempt to add vehicle action more than once on %1", _vehicle);
};

_vehicle setVariable [QGVAR(plowMode), PLOW_NONE];

// Menu root
private _plow_mode = [
	"SWS_PlowMode", "Plow Mode", "", 
	{_target setVariable [QGVAR(plowMode), PLOW_VEHICLE_TRENCH];}, 
	{!(_vehicle getVariable [QGVAR(isDigging), false])}
] call ace_interact_menu_fnc_createAction;
[(typeOf _vehicle), 1, ["ACE_SelfActions"], _plow_mode] call ace_interact_menu_fnc_addActionToClass;

// Children
private _plow_none = [
	"PlowNone", "None", "", 
	{_target setVariable [QGVAR(plowMode), PLOW_NONE];}, 
	{(_target getVariable [QGVAR(plowMode), PLOW_NONE]) != PLOW_NONE}
] call ace_interact_menu_fnc_createAction;
[(typeOf _vehicle), 1, ["ACE_SelfActions", "SWS_PlowMode"], _plow_none] call ace_interact_menu_fnc_addActionToClass;

private _plow_vehicle = [
	"PlowTrenchVehicle", "Vehicle Trench", "", 
	{_target setVariable [QGVAR(plowMode), PLOW_VEHICLE_TRENCH];}, 
	{(_target getVariable [QGVAR(plowMode), PLOW_NONE]) != PLOW_VEHICLE_TRENCH}
] call ace_interact_menu_fnc_createAction;
[(typeOf _vehicle), 1, ["ACE_SelfActions", "SWS_PlowMode"], _plow_vehicle] call ace_interact_menu_fnc_addActionToClass;

private _plow_giant = [
	"PlowTrenchGiant", "Giant Trench", "", 
	{_target setVariable [QGVAR(plowMode), PLOW_GIANT_TRENCH];}, 
	{(_target getVariable [QGVAR(plowMode), PLOW_NONE]) != PLOW_GIANT_TRENCH}
] call ace_interact_menu_fnc_createAction;
[(typeOf _vehicle), 1, ["ACE_SelfActions", "SWS_PlowMode"], _plow_giant] call ace_interact_menu_fnc_addActionToClass;

private _plow_long = [
	"PlowTrenchGiant", "Long Trench", "", 
	{_target setVariable [QGVAR(plowMode), PLOW_LONG_TRENCH];}, 
	{(_target getVariable [QGVAR(plowMode), PLOW_NONE]) != PLOW_LONG_TRENCH}
] call ace_interact_menu_fnc_createAction;
[(typeOf _vehicle), 1, ["ACE_SelfActions", "SWS_PlowMode"], _plow_long] call ace_interact_menu_fnc_addActionToClass;


// building is on server only
if (isServer) then {
	[_vehicle] call grad_trenches_functions_fnc_vehicleTrenchBuild;
};

if (hasInterface) then {
	_vehicle addAction [
		"Lower Plow",
		{
			params ["_target", "_caller", "_actionId", "_arguments"];

		    private _config = configFile >> "CfgDigVehicles" >> typeOf _target;
		    private _animation = getText (_config >> "animation");
		    private _plowLowered = getNumber (_config >> "plowLowered");
		    private _type = getText (_config >> "type");
		    if (_type == "animate") then {
		        _target animate [_animation, _plowLowered];
		    } else {
		        _target animatesource [_animation, _plowLowered];
		    };

		    _target setCruiseControl [7, false];    
		    _target setVariable ["grad_trenches_functions_plowlowered", -1, true]; // animating state to prevent multi execution

		    [{
		    	params ["_target", "_type", "_animation", "_plowLowered"];
		    	if (_type == "animate") then {
		    		(_target animationPhase _animation == _plowLowered)
		    	} else {
		    		(_target animationSourcePhase _animation == _plowLowered)
		    	};
			},
		    {	
		    	params ["_target", "_type", "_animation", "_plowLowered"];
				_target setVariable ["grad_trenches_functions_plowlowered", 1, true];
			}, [_target, _type, _animation, _plowLowered]] call CBA_fnc_waitUntilAndExecute;
		},
		nil,
		1.5,
		true,
		true,
		"",
		"((_target getVariable ['grad_trenches_functions_plowlowered', 0]) == 0) && _this == driver _target", // _target, _this, _originalTarget
		50,
		false,
		"",
		""
	];

	_vehicle addAction [
		"Raise Plow",
		{
			params ["_target", "_caller", "_actionId", "_arguments"];

		    private _config = configFile >> "CfgDigVehicles" >> typeOf _target;
		    private _animation = getText (_config >> "animation");
		    private _plowRaised = getNumber (_config >> "plowRaised");
		    private _type = getText (_config >> "type");
		    if (_type == "animate") then {
		    	_target animate [_animation, _plowRaised];
		    } else {
		    	_target animatesource [_animation, _plowRaised];
			};
		    _target setCruiseControl [0, false];
		    _target setVariable ["grad_trenches_functions_plowlowered", -1, true]; // animating state to prevent multi execution

		    [{
		    	params ["_target", "_type", "_animation", "_plowRaised"];
		    	if (_type == "animate") then {
		    		(_target animationPhase _animation == _plowRaised)
		    	} else {
		    		(_target animationSourcePhase _animation == _plowRaised)
		    	};
			},
		    {	
		    	params ["_target", "_type", "_animation", "_plowRaised"];
				_target setVariable ["grad_trenches_functions_plowlowered", 0, true];
			}, [_target, _type, _animation, _plowRaised]] call CBA_fnc_waitUntilAndExecute;
		    
		},
		nil,
		1.5,
		true,
		true,
		"",
		"((_target getVariable ['grad_trenches_functions_plowlowered', 0]) == 1) && (call CBA_fnc_currentUnit) == driver _target", // _target, _this, _originalTarget
		10,
		false,
		"",
		""
	];
};
