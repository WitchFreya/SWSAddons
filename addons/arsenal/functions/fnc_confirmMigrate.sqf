#include "script_component.inc.sqf"
#include "defines.inc.sqf"

/*
 * Author: Maid
 * Confirm migrating a loadout before doing it.
 *
 * Arguments:
 * 0: Loadout name <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[player] call CBA_fnc_getLoadout, "My Cool Loadout"] call sws_arsenal_fnc_confirmMigrate;
 *
 * Public: No
 */

TRACE_1(QFUNC(confirmMigrate),_this);

if !(canSuspend) exitWith {
  _this spawn FUNC(confirmMigrate);
};

params [["_loadoutName", "", [""]]];

private _migrations = uiNamespace getVariable [QGVAR(loadoutMigrations), createHashMap];
private _allLoadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];
private _extendedLoadout /* CBA Extended Loadout */ = _allLoadouts select {
  _x params ["_name"];
  _name == _loadoutName;
} select 0 /* [name, loadout] */ select 1;

_extendedLoadout params ["_loadout", "_cbaExtended"];
private _itemsToChange /* string[] */ = call {
  private _items = (flatten _loadout) arrayIntersect (keys _migrations);
  TRACE_1("Items",_items);
  private _unique = _items arrayIntersect _items;
  TRACE_1("Unique",_unique);
  _unique apply {
    private _newValue = _migrations get _x;
    if (isNil {_newValue}) exitWith {
      ERROR_WITH_TITLE_1("Failed migration precondition","Migration map should have contained value %1 but did not",_x);
    };
    format ["• %1 → %2", _x, _newValue];
  };
};
TRACE_1("ItemsToChange",_itemsToChange);

private _message = composeText [
  format ["The following items in loadout %1 have potential migrations:", _loadoutName],
  lineBreak, lineBreak,
  parseText format [
    "<t size='0.8' font='EtelkaMonospacePro'>%1</t>",
    (_itemsToChange joinString "<br/>")
  ],
  lineBreak, lineBreak,
  "Would you like to attempt to migrate them?"
];

private _header = "Migrations Available";

private _display = findDisplay IDD_loadouts_display;

private _doMigrate = [
  _message,
  _header,
  "Migrate",
  "Later",
  _display,
  false,
  true
] call BIS_fnc_guiMessage;

if !(_doMigrate) exitWith {
  TRACE_1("Skipped migrating",_doMigrate);
};

/* Take a loadout and convert it to the new items. Recursive to handle nested properties. */
private _fnc_migrate = {
  params ["_current"];
  if !(typeName _current in ["SCALAR", "ARRAY", "STRING"]) exitWith {
    ERROR_2("Unexpected type %1 in loadout migration for loadout %2",_current,_loadoutName);
    _current;
  };
  params [
    ["_current", [], ["", [], 0]]
  ];
  if (_current isEqualTo [] || {typeName _current == "SCALAR"}) exitWith {_current};
  if (typeName _current == "STRING") exitWith {
    _migrations getOrDefault [_current, _current];
  };
  _current apply { [_x] call _fnc_migrate };
};

// backup the original
[format ["%1 (Backup)", _loadoutName], _extendedLoadout, true] call ace_arsenal_fnc_saveLoadout;

// save the new
private _mut_newLoadout = [_loadout] call _fnc_migrate;
[_loadoutName, [_mut_newLoadout, _cbaExtended], true] call ace_arsenal_fnc_saveLoadout;

// remove the cached data
private _contentPanelCtrl = _display displayCtrl IDC_contentPanel;
_contentPanelCtrl setVariable [LOADOUT_CACHE_NAME(_loadoutName), nil];

// update the displayed data
private _myLoadoutsButton = _display displayCtrl IDC_buttonMyLoadouts;
[_display, format ["Loadout Migrated: %1", _loadoutName]] call ace_arsenal_fnc_message;
[_display,  _display displayCtrl IDC_buttonMyLoadouts] call ace_arsenal_fnc_fillLoadoutsList;
