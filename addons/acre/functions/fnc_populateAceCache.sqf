#include "script_component.inc.sqf"

TRACE_1(QFUNC(populateAceCache),_this);

/*
 * Author: Maid
 * Populate the ACE Arsenal cache to give the unique display names for the radios.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call sws_acre_fnc_populateAceCache;
 *
 * Public: No
 */

private _rightPanelCache = uiNamespace getVariable ["ace_arsenal_rightPanelCache", createHashMap];
private _acreItems = [] call FUNC(radioClassNames);
private _radios = items ace_arsenal_center arrayIntersect _acreItems;
{
  private _radio = _x;
  private _cacheKey = "CfgWeapons" + _radio;
  private _displayName = [_radio] call acre_sys_core_fnc_getDescriptiveName;
  _rightPanelCache getOrDefaultCall [_cacheKey, {
    ["", getText (configFile >> "CfgWeapons" >> _radio >> "picture")]
  }] params ["", "_picture"];
  _rightPanelCache set [_cacheKey, [_displayName, _picture]];
} forEach _radios;
