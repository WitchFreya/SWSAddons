#include "script_component.inc.sqf"

/*
 * Author: Maid
 * List all class names for radios, including unique radio instances.
 *  Includes a cache which can be busted by passing an argument.
 *
 * Arguments:
 * 0: Optional (Defaults to false) - Pass true to clear cache and rebuild it <BOOLEAN>
 *
 * Return Value:
 * The list of config names <STRING[]>
 *
 * Example:
 * [true] call sws_acre_fnc_radioClassNames;
 *
 * Public: No
 */

params [
  ["_rebuildCache", false, [false]]
];

TRACE_1(QGVAR(DOUBLES(fnc,radioClassNames)),_rebuildCache);

private _cache = uiNamespace getVariable QGVAR(radioClassNames);
// force rebuild the cache if it hasn't been populated
if !(_rebuildCache) exitWith {
  if (IS_ARRAY(_cache)) exitWith {_cache};
  [true] call FUNC(radioClassNames);
};

private _base = configFile >> "CfgWeapons";

// collect all the base radios
private _genericRadiosFilter = toString {
  configName _x isKindOf ["ACRE_BaseComponent", _base] && {
    getNumber (_x >> "scope") == 2
  };
};

private _genericRadios = _genericRadiosFilter configClasses _base;

// collect all the unique child radios of each radio
private _specificRadiosFilter = toString {
  inheritsFrom _x in _genericRadios && {
    getNumber (_x >> "scope") == 1;
  };
};

private _specificRadios = _specificRadiosFilter configClasses _base;
private _allClassNames /* string[] */ = _genericRadios + _specificRadios apply { configName _x };
uiNamespace setVariable [QGVAR(radioClassNames), _allClassNames];
TRACE_1("Radio class names cache built",_allClassNames);
_allClassNames;
