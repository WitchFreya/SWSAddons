#include "script_component.hpp"
/*
 * Author: Salbei
 * Digging trenches with vehicles.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Trench Class <STRING>
 * 2: Offset <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle ACE_player, ACE_player, [0,0,0]] call grad_trenches_functions_fnc_bpzBuild
 *
 * Public: No
 */

params ["_vehicle"];

private _config = configFile >> "CfgDigVehicles" >> typeOf _vehicle;
private _distanceToTrench = getNumber (_config >> "distanceToTrench");

private _fnc_detatchTrench = {
    params ["_vehicle", "_trench"];

    detach _trench;
    _vehicle setVariable [QGVAR(trenchDigged), objNull, true];
    _vehicle setVariable [QGVAR(isDigging), false, true];
    _trench setVariable ["ace_trenches_placeData", [getPos _trench, [vectorDir _trench, vectorUp _trench]], true];
    [QGVAR(continueDiggingTrench), [_trench, _unit, false], _unit] call CBA_fnc_targetEvent;
};

[{
    params ["_args", "_handle"];
    _args params ["_vehicle", "_distanceToTrench", "_fnc_detatchTrench"];

    if (
        isNull _vehicle ||
        !(alive _vehicle)
    ) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    #define vehicleNotTiltedValue 0.99

    // save performance //emily's note: this comment was incredible to read
    if (
        (_vehicle getVariable ["grad_trenches_functions_plowlowered", 0] == 0) && 
        !(_vehicle getVariable [QGVAR(isDigging), false])
    ) exitWith {};

    private _mode = _vehicle getVariable [QGVAR(plowMode), PLOW_UNDEF];

    // only dig a trench if a trench is selected
    if (_mode == PLOW_NONE) exitWith {};

    // [side offset, forward offset, vertical offset]
    // Apply trench-specific offsets--this is ugly but I don't want to figure out how to make it prettier rn
    private _trenchOffsets = switch (_mode) do
    {
        case PLOW_VEHICLE_TRENCH: {[-0.227, _distanceToTrench, -3.1]};
        case PLOW_GIANT_TRENCH: {[-0.227, _distanceToTrench + 1.8, -4.7]};
        case PLOW_LONG_TRENCH: {[-0.227, _distanceToTrench + 3.5, -5]};
        default {[0,0,0]};
    };

    // Make an offset copy at level with the vehicle
    private _flatOffsets = +_trenchOffsets;
    _flatOffsets set [2, 0.0];

    // init digging
    if (!(_vehicle getVariable [QGVAR(isDigging), false])) then {

        // can dig vehicle on this position
        if (!([_vehicle modelToWorld _flatOffsets] call grad_trenches_functions_fnc_canDig)) exitWith {};

        // only work when vehicle is not tilted
        if (vectorUp _vehicle select 2 < vehicleNotTiltedValue) exitWith {};

        private _speed = speed _vehicle;
        if (_speed > 1) then {   

            _vehicle setVariable [QGVAR(isDigging), true, true];
            private _trench = _mode createVehicle [0,0,0];
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

        // check for lowered plow
        if (_vehicle getVariable ["grad_trenches_functions_plowlowered", 0] != 1) exitwith {
            [_vehicle, _trench] call _fnc_detatchTrench;
        };

        // check if area is diggable
        if (!([_vehicle modelToWorld _flatOffsets] call grad_trenches_functions_fnc_canDig)) exitWith {
            [_vehicle, _trench] call _fnc_detatchTrench;
        };

        private _speed = speed _vehicle;
        private _digTime = missionNameSpace getVariable [QGVAR(vehicleTrenchBuildSpeed), 5];
        private _diff = 1/(_digTime*10);

        if (_speed > 1) then {
            [_trench, _actualProgress + _diff, 0.7] call grad_trenches_functions_fnc_setTrenchProgress;
            _trench setObjectTextureGlobal [0, surfaceTexture position _vehicle];
            [QUOTE(grad_trenches_functions_digFX), [_trench]] call CBA_fnc_globalEvent;
            [QUOTE(grad_trenches_functions_digFXVehicleBlade), [_vehicle]] call CBA_fnc_globalEvent;            
        } else {
            if (_speed < -0.5 || (vectorUp _vehicle select 2 < vehicleNotTiltedValue)) then {
                [_vehicle, _trench] call _fnc_detatchTrench;
            };
        };
    };

}, 0.1, [_vehicle, _distanceToTrench, _fnc_detatchTrench]] call CBA_fnc_addPerFrameHandler;
