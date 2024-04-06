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
// intersect with all items to avoid including things that might have been removed in an update or similar
private _blacklist = uiNamespace getVariable [QGVAR(blacklist), []] arrayIntersect _allItems;

private _items = if (_mode == 0 /* whitelist mode*/) then {
  _allItems - _blacklist;
} else {
  private _commonItems = _items arrayIntersect _blacklist;
  private _newItems = _blacklist - _commonItems;
  _items + _newItems;
};

uiNamespace setVariable ["ace_arsenal_attributeValue", [_items, _mode]];
// refresh the list
[_controlsGroup] call ace_arsenal_fnc_attributeAddItems;
