#include "script_component.hpp"

// When the display is opened, adjust the cache for the radio items to display the descriptive name from acre
GVAR(ace_arsenal_displayOpenedEH) = ["ace_arsenal_displayOpened", {
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
}] call CBA_fnc_addEventHandler;
