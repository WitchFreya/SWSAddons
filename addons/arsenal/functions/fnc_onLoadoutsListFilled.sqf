#include "script_component.inc.sqf"
#include "defines.inc.sqf"

/*
 * Author: Maid
 * Change the color of loadouts that have migrations available.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 * 1: Loadouts Tab Control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Public: No
*/

TRACE_1(QGVAR(DOUBLES(fnc,onLoadoutsListFilled)),_this);

params ["_display", "_control"];

if (ctrlIDC _control != IDC_buttonMyLoadouts) exitWith {
  TRACE_1("Not on MyLoadouts tab, exiting",IDC_buttonMyLoadouts);
};

private _contentPanelCtrl = _display displayCtrl IDC_contentPanel;
private _numRows = lnbSize _contentPanelCtrl select 0;
TRACE_2("MyLoadouts Data",_contentPanelCtrl,_numRows);
for "_lnbIdx" from 0 to (_numRows - 1) do {
  private _loadoutName = _contentPanelCtrl lnbText [_lnbIdx, 1];
  _contentPanelCtrl getVariable LOADOUT_CACHE_NAME(_loadoutName) params [
    "",
    "_nullItems",
    "_unavailableItems"
  ];
  private _missingItems = _nullItems + _unavailableItems;
  if (_missingItems isEqualTo []) then {continue};

  _contentPanelCtrl lnbSetTooltip [[_lnbIdx, 0],
    format [
      "Unavailable Items: %1 | Null Items: %2",
      count _unavailableItems,
      count _nullItems
    ]
  ];

  private _migrations = uiNamespace getVariable [QGVAR(loadoutMigrations), createHashMap];
  if (keys _migrations arrayIntersect _missingItems isEqualTo []) then {continue};
  _contentPanelCtrl lnbSetColor [[_lnbIdx, 1], [1, 1, 0, 0.8]]; // yellow
};
