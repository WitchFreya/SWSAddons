#include "script_component.inc.sqf"

/*
 * Author: Maid, based on the work by Bloodwyn
 * Handle ACE fatigue when on a WMO.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [sws_walkable_moving_objects_fnc_handleFatigue] call CBA_fnc_addPerFrameHandler;
 *
 * Public: No
 */

if (isNull BW_anker) exitWith {
  GVAR(staminaReserve) = ace_advanced_fatigue_anReserve;
};

private _newStamina = GVAR(staminaReserve) + (ace_advanced_fatigue_recoveryFactor * 0.8) min 2300;

ace_advanced_fatigue_anReserve = _newStamina;
GVAR(staminaReserve) = _newStamina;
