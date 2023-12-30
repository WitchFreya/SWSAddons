#include "script_component.hpp"
/*
 * Author: Ashes
 * Adds a per-frame handler for trench building to the target vehicle.
 * Based on work by Salbei from grad_trenches
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle ACE_player] call sws_vehicletrenches_fnc_addBuildHandler
 *
 * Public: No
 */

params ["_vehicle"];

private _config = configOf _vehicle >> "PlowConfig";
private _distanceToTrench = (_config >> "distanceToTrench") call BIS_fnc_getCfgData;

// get initial plow mode
private _initMode = _vehicle getVariable [QGVAR(plowMode), PLOW_MOVING];

private _trenchEnvelope = switch (_initMode) do
{
	case PLOW_VEHICLE_TRENCH: { "GRAD_envelope_vehicle" };
	case PLOW_GIANT_TRENCH: { "GRAD_envelope_giant" };
	case PLOW_LONG_TRENCH: { "GRAD_envelope_long" };
  default {nil};
};

// [side offset, forward offset, vertical offset]
// Apply trench-specific offsets--this is ugly but I don't want to figure out how to make it prettier rn
private _trenchOffsets = switch (_initMode) do
{
  case PLOW_VEHICLE_TRENCH: {[-0.227, _distanceToTrench, -3.1]};
  case PLOW_GIANT_TRENCH: {[-0.227, _distanceToTrench + 1.8, -4.7]};
  case PLOW_LONG_TRENCH: {[-0.227, _distanceToTrench + 3.5, -5]};
  default {nil};
};

if (isNil "_trenchEnvelope") exitWith {
  ERROR_3("Invalid trench mode for creating a trench: %1, %2, %3",_initMode,_trenchEnvelope,_trenchOffsets);
};

// Make an offset copy at level with the vehicle
private _flatOffsets = +_trenchOffsets;
_flatOffsets set [2, 0.0];

// Get mission settings
private _maxTilt = missionNameSpace getVariable [QGVAR(vehicleTrenchMaxTilt), 6];
private _digTime = missionNameSpace getVariable [QGVAR(vehicleTrenchBuildSpeed), 5];
private _digDiff = 1 / (_digTime * 10);

[
  {
    params ["_args", "_handle"];
    _args params ["_vehicle", "_trenchEnvelope", "_trenchOffsets", "_flatOffsets", "_initMode", "_digDiff", "_maxTilt"];
    [_vehicle, _trenchEnvelope, _trenchOffsets, _flatOffsets, _initMode, _digDiff, _maxTilt, _handle] call FUNC(buildHandler);
  },
  0.1,
  [_vehicle, _trenchEnvelope, _trenchOffsets, _flatOffsets, _initMode, _digDiff, _maxTilt]
] call CBA_fnc_addPerFrameHandler;
