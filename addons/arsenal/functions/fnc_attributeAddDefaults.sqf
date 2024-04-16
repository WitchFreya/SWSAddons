#include "script_component.inc.sqf"
#include "defines.inc.sqf"

/*
 * Author: Maid
 * Adds default SWS items.
 *
 * Arguments:
 * 0: Attribute controls group <CONTROL> - Unused but might be in the future
 *
 * Return Value:
 * None
 *
 * Example:
 * [CONTROL] call sws_modules_fnc_arsenalAttributeAddDefaults;
 *
 * Public: No
 */

params ["_controlsGroup"];
uiNamespace getVariable ["ace_arsenal_attributeValue", [[], 0]] params ["_items", "_mode"];

private _allItems = uiNamespace getVariable "ace_arsenal_configItemsFlat" apply { _x };
private _blacklist = uiNamespace getVariable [QGVAR(blacklist), []];
private _whitelist = uiNamespace getVariable [QGVAR(whitelist), []];

private _list = uiNamespace getVariable [[QGVAR(whitelist), QGVAR(blacklist)] select _mode, []];

private _commonItems = _items arrayIntersect _list;
private _newItems = _list - _commonItems;

uiNamespace setVariable ["ace_arsenal_attributeValue", [_items + _newItems, _mode]];
// refresh the list
[_controlsGroup] call ace_arsenal_fnc_attributeAddItems;
