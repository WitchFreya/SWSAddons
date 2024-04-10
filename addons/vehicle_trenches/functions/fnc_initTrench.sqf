#include "script_component.inc.sqf"
/*
 * Author: Ashes
 * Initializes a vehicle-dug trench
 * Based on work by Salbei from grad_trenches
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Trench Envelope <STRING>
 * 2: Trench Offsets <ARRAY>
 * 3: Flat Offsets <ARRAY>
 * 4: Is Tilted Above Max <BOOL>
 * 5: Init Mode <STRING>
 * 6: Handle <HANDLE>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, _trenchEnvelope, _trenchOffsets, _flatOffsets, _isTiltAboveMax, _initMode, _handle] call sws_vehicletrenches_fnc_continueTrench
 *
 * Public: No
 */

params ["_vehicle", "_trenchEnvelope", "_trenchOffsets", "_flatOffsets", "_isTiltAboveMax", "_initMode", "_handle"];

// check for vehicle aliveness
if (!(alive _vehicle)) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
};

// check for changed plow state
if (_vehicle getVariable [QGVAR(PlowMode), PLOW_MOVING] != _initMode) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
};

// can dig vehicle on this position
if (!([_vehicle modelToWorld _flatOffsets] call grad_trenches_functions_fnc_canDig)) exitWith {};

// only work when vehicle is not tilted
if (_ifTiltAboveMax) exitWith {};

private _speed = speed _vehicle;
if (_speed > 1) then {
	_vehicle setVariable [QGVAR(isDigging), true, true];
	private _trench = _trenchEnvelope createVehicle [0,0,0];
	[_trench, 0] call grad_trenches_functions_fnc_setTrenchProgress;
	_vehicle setVariable [QGVAR(trenchDigged), _trench, true];

	[{
		params ["_vehicle", "_trench", "_trenchOffsets"];
		_trench setObjectTextureGlobal [0, surfaceTexture getPos _vehicle];
		_trench attachTo [_vehicle, _trenchOffsets];
	}, [_vehicle, _trench, _trenchOffsets], 0.2] call CBA_fnc_waitAndExecute;
};
