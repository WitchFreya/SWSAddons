#include "script_component.hpp"
/*
 * Author: Maid
 * Adds all SWS items to any synchronized ACE arsenals at mission start.
 *
 * Arguments:
 * 0: Logic <LOGIC>
 * 1: Units <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [LOGIC, [crate, box], true] call SWS_logic_fnc_arsenalAddAll
 *
 * Public: No
 */

params ["_logic", "_units", "_activated"];

if (!_activated || !local _logic || count _units == 0) exitWith {0};

private _swsConfigItems = "getText (_x >> 'dlc') == 'sws'" configClasses (configFile >> "CfgWeapons");
private _swsItemClasses = _swsConfigItems apply { configName _x };

_units apply { [_x, _swsItemClasses, true] call ACE_arsenal_fnc_addVirtualItems };

true;
