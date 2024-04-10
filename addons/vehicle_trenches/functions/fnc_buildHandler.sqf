#include "script_component.inc.sqf"
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

params ["_vehicle", "_trenchEnvelope", "_trenchOffsets", "_flatOffsets", "_initMode", "_digDiff", "_maxTilt", "_handle"];

// Stop execution if vehicle no longer exists
if (isNull _vehicle) exitWith {
  [_handle] call CBA_fnc_removePerFrameHandler;
};

private _isTiltAboveMax = (vectorUp _vehicle select 2 < (1 - sin _maxTilt));

// init digging
if (!(_vehicle getVariable [QGVAR(isDigging), false])) then {
  [_vehicle, _trenchEnvelope, _trenchOffsets, _flatOffsets, _isTiltAboveMax, _initMode, _handle] call FUNC(initTrench);
} else {
  [_vehicle, _digDiff, _flatOffsets, _isTiltAboveMax, _initMode, _handle] call FUNC(continueTrench);
};
