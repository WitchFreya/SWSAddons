#include "script_component.hpp"
/*
 * Author: Maid
 * Adds all SWS items to any synchronized ACE arsenals at mission start.
 *
 * Arguments:
 * 0: Units <ARRAY>
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [[crate, box]] call SWS_logic_fnc_arsenalAddAll
 *
 * Public: Yes
 */

params ["_units"];

TRACE_1("arsenalAddAll vars",_units);

if (count _units == 0) exitWith {0};

private _filterToSwsItems = "getText (_x >> 'dlc') == 'sws'";
private _relevantConfigs = ["CfgWeapons", "CfgGlasses"];
private _swsItems = flatten (_relevantConfigs apply { _filterToSwsItems configClasses (configFile >> _x) });
private _itemsInScope = _swsItems select { getNumber (_x >> 'scopeArsenal') > 0 } apply { configName _x };

TRACE_1("arsenalAddAll Items",_itemsInScope);

{ [_x, _itemsInScope, true] call ACE_arsenal_fnc_addVirtualItems } forEach _units;

INFO("arsenalAddAll Complete");

true;
