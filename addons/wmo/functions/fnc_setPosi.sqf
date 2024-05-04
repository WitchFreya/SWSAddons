#include "script_component.inc.sqf"

/*
 * Author: Maid, based on the work by Bloodwyn
 * Patch the WMO frame handler to include ace fatigue fix.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [sws_walkable_moving_objects_fnc_setPosi] call CBA_fnc_addPerFrameHandler;
 *
 * Public: No
 */

if !(WMO_Enabled) exitWith {
  if (isNull BW_anker) exitWith {};
  [BW_anker, true] call BW_WMO_fnc_collision;
  BW_anker = objNull;
};

if ([player] call FUNCMAIN(isInVehicle)) exitWith {
  if !(isNull BW_anker) then {
    [BW_anker,true] call BW_WMO_fnc_collision;
    BW_anker = objNull;
  };
};

// Ace Fatigue recovery aid
if (!isNil {ace_advanced_fatigue_anReserve} && {!isNull BW_anker}) then {
  ace_advanced_fatigue_anReserve = ace_advanced_fatigue_anReserve + (ace_advanced_fatigue_recoveryFactor * 0.8);
  if (ace_advanced_fatigue_anReserve < 2300) exitWith {};
  ace_advanced_fatigue_anReserve = 2300;
};

_this call BW_WMO_fnc_setPosi;
