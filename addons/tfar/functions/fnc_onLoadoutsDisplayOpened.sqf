#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Handle the ACE arsenal loadoutsDisplayOpened event.
 *
 * Arguments:
 * 0: display <DISPLAY> - Loadout's display; unused here.
 *
 * Return Value:
 * True on success
 *
 * Example:
 * [] call sws_tfar_fnc_onLoadoutsDisplayOpened;
 *
 * Public: No
 */

TRACE_1("ace_arsenal_loadoutsDisplayOpened",_this);

private _target = currentNamespace getVariable ["ace_arsenal_center", player];

switch (GVAR(restoreRadios)) do {
  case "sr_only": {
    [_target] call FUNC(saveShortRangeRadio);
  };
  case "both": {
    [_target] call FUNC(saveShortRangeRadio);
  };
};
