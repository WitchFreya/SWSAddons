#include "script_component.inc.sqf"
/*
 * Author: Ashes
 * Continues a vehicle trench placed by fnc_initTrench
 * Based on work by Salbei from grad_trenches
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Dig Difference <NUMBER>
 * 2: Flat Offset <ARRAY>
 * 3: Is Tilted Above Max <BOOL>
 * 4: Init Mode <STRING>
 * 5: Handle <HANDLE>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, _digDiff, _flatOffsets, _isTiltAboveMax, _initMode, _handle] call sws_vehicletrenches_fnc_continueTrench
 *
 * Public: No
 */

params ["_vehicle", "_digDiff", "_flatOffsets", "_isTiltAboveMax", "_initMode", "_handle"];

private _trench = _vehicle getVariable [QGVAR(trenchDigged), nil];
private _actualProgress = _trench getVariable ["ace_trenches_progress", 0];

// check for vehicle aliveness
if (!(alive _vehicle)) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
	[_vehicle, _trench] call FUNC(detachTrench);
};

// check for changed plow state
if (_vehicle getVariable [QGVAR(PlowMode), PLOW_MOVING] != _initMode) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
	[_vehicle, _trench] call FUNC(detachTrench);
};

// check area diggability
if (!([_vehicle modelToWorld _flatOffsets] call grad_trenches_functions_fnc_canDig)) exitWith {
	[_vehicle, _trench] call FUNC(detachTrench);
};

private _speed = speed _vehicle;

if (_speed > 1) then {
	[_trench, _actualProgress + _digDiff, 0.7] call grad_trenches_functions_fnc_setTrenchProgress;
	_trench setObjectTextureGlobal [0, surfaceTexture position _vehicle];
	[QUOTE(grad_trenches_functions_digFX), [_trench]] call CBA_fnc_globalEvent;
	[QUOTE(grad_trenches_functions_digFXVehicleBlade), [_vehicle]] call CBA_fnc_globalEvent;
} else {
	if (_speed < -0.5 || _isTiltAboveMax) then {
		[_vehicle, _trench] call FUNC(detachTrench);
	};
};
