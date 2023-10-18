#include "script_component.hpp"

/*
 * Author: Maid
 * Scan CfgRoles to find relevant roles.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _filter = toString {
    configName _x isKindOf ["Rifleman", configFile >> "CfgRoles"];
};

private _roles = _filter configClasses (configFile >> "CfgRoles") apply {
	private _name = [_x, "displayName", configName _x] call BIS_fnc_returnConfigEntry;
	private _path = _x;
	private _icon = [_x, "icon", QPATHTOF(data\sws_icon_howl_ca.paa)] call BIS_fnc_returnConfigEntry;
	private _key = configName _x;
	private _map = createHashMapFromArray [
		["name", _name],
		["path", _path],
		["icon", _icon]
	];
	[_key, _map];
};

private _ordered = [_roles, [], {
	_x params ["_key", "_value"];
	_value get "name";
}] call BIS_fnc_sortBy;
private _order = _ordered apply { _x select 0; };

uiNamespace setVariable [QGVAR(rolesCache), createHashMapFromArray _roles];
uiNamespace setVariable [QGVAR(rolesOrder), _order];
