#include "script_component.inc.sqf"

/*
 * Author: Maid
 *  Add a restock action onto an object for some units.
 *
 * Arguments:
 * 0: Object to add the restock action on <OBJECT>
 * 1: Units for whom it should restock <OBJECT[]>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject, [player]] call sws_resupply_fnc_addRestockAction;
 *
 * Public: No
 */

params [
  ["_target", objNull, [objNull]],
  ["_units", [], [[]]]
];

private _localUnits = _units select { local _x; };
private _nonLocalUnits = _units - _localUnits;
{
  [QGVAR(addRestockAction), [_target, [_x]], _x] call CBA_fnc_targetEvent;
} forEach _nonLocalUnits;

private _restockAction = [
  QGVAR(restock),
  "Restock Gear",
  QPATHTOEF(main,data\sws_icon_howl_ca.paa), // ICON
  {
    params ["", "_caller"];
    // TODO: Probably some kind of delay or something?
    [_caller] call FUNC(restoreLastLoadout);
  },
  {true}, // TODO: Probably a condition based on whether the vehicle has any supplies left?
  {}, // Insert children
  [] // Parameters
] call ace_interact_menu_fnc_createAction;

[
  _target,
  ACE_INTERACT_ACTIONTYPE_TARGET,
  ["ACE_MainActions"],
  _restockAction
] call ace_interact_menu_fnc_addActionToObject;
