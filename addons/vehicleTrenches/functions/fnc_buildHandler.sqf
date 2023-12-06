#include "script_component.hpp"
/*
 * Author: Ashes
 * Builds and places trenches for the target vehicle.
 * Based on work by Salbei from grad_trenches
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Trench Offset <ARRAY>
 * 2: Flat Offset <ARRAY>
 * 3: Initializing Mode <NUMBER>
 * 4: Dig Speed <NUMBER>
 * 5: Max Tilt <NUMBER>
 * 6: Handle <HANDLE>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, _trenchOffsets, _flatOffsets, _initMode, _digDiff, _maxTilt, _handle] call sws_vehicletrenches_fnc_buildHandler
 *
 * Public: No
 */

params ["_vehicle", "_trenchOffsets", "_flatOffsets", "_initMode", "_digDiff", "_maxTilt", "_handle"];

// Stop execution if vehicle no longer exists
if (isNull _vehicle) exitWith {
    [_handle] call CBA_fnc_removePerFrameHandler;
};

private _tiltAboveMax = (vectorUp _vehicle select 2 < (1 - sin _maxTilt));

// init digging
if (!(_vehicle getVariable [QGVAR(isDigging), false])) then {

    // check for vehicle aliveness
    if (!(alive _vehicle)) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    // check for changed plow state
    if (_vehicle getVariable [QGVAR(PlowMode), PLOW_MOVING] != _initMode) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    private _worldPos = _vehicle modelToWorld _flatOffsets;

    // can dig vehicle on this position
    if (!([_vehicle modelToWorld _flatOffsets] call grad_trenches_functions_fnc_canDig)) exitWith {};

    // only work when vehicle is not tilted
    if (_tiltAboveMax) exitWith {};

    private _speed = speed _vehicle;
    if (_speed > 1) then {
        _vehicle setVariable [QGVAR(isDigging), true, true];
        private _trench = ([_initMode] call FUNC(getTrenchEnvelope)) createVehicle [0,0,0];
        [_trench, 0] call grad_trenches_functions_fnc_setTrenchProgress;
        _vehicle setVariable [QGVAR(trenchDigged), _trench, true];

        [{
            params ["_vehicle", "_trench", "_trenchOffsets"];
            _trench setObjectTextureGlobal [0, surfaceTexture getPos _vehicle];
            _trench attachTo [_vehicle, _trenchOffsets];
        }, [_vehicle, _trench, _trenchOffsets], 0.2] call CBA_fnc_waitAndExecute;
    };

} else {
    private _trench = _vehicle getVariable [QGVAR(trenchDigged), objNull];
    private _actualProgress = _trench getVariable ["ace_trenches_progress", 0];

    // check for vehicle aliveness
    if (!(alive _vehicle)) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
        [_vehicle, _trench] call FUNC(detatchTrench);
    };

    // check for changed plow state
    if (_vehicle getVariable [QGVAR(PlowMode), PLOW_MOVING] != _initMode) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
        [_vehicle, _trench] call FUNC(detatchTrench);
    };

    // check area diggability
    if (!([_vehicle modelToWorld _flatOffsets] call grad_trenches_functions_fnc_canDig)) exitWith {
        [_vehicle, _trench] call FUNC(detatchTrench);
    };

    private _speed = speed _vehicle;

    if (_speed > 1) then {
        [_trench, _actualProgress + _digDiff, 0.7] call grad_trenches_functions_fnc_setTrenchProgress;
        _trench setObjectTextureGlobal [0, surfaceTexture position _vehicle];
        [QUOTE(grad_trenches_functions_digFX), [_trench]] call CBA_fnc_globalEvent;
        [QUOTE(grad_trenches_functions_digFXVehicleBlade), [_vehicle]] call CBA_fnc_globalEvent;            
    } else {
        if (_speed < -0.5 || _tiltAboveMax) then {
            [_vehicle, _trench] call FUNC(detatchTrench);
        };
    };
};
