#include "script_component.hpp"
/*
 * Author: Maid
 * Adds all SWS items to any synchronized ACE arsenals at mission start.
 *
 * Arguments:
 * 0: Units <ARRAY>
 * 1: Exclude <ARRAY>
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [[crate, box]] call SWS_logic_fnc_arsenalAddAll
 *
 * Public: Yes
 */

params ["_units", "_exclude"];

TRACE_2("arsenalAddAll vars",_units,_exclude);

if (count _units == 0) exitWith {0};

private _filterToSwsItems = "getText (_x >> 'dlc') == 'sws'";
private _relevantConfigs = ["CfgWeapons","CfgGlasses","CfgMagazines","CfgVehicles"];
private _swsItems = flatten (_relevantConfigs apply { _filterToSwsItems configClasses (configFile >> _x) });
private _itemsInScope = _swsItems
    select {
        getNumber (_x >> 'scopeArsenal') > 0
    } apply {
        configName _x
    } select {
        !(_x in _exclude)
    };

TRACE_1("arsenalAddAll Items",_itemsInScope);

{ [_x, _itemsInScope, true] call ACE_arsenal_fnc_addVirtualItems } forEach _units;

INFO("arsenalAddAll Complete");

true;
