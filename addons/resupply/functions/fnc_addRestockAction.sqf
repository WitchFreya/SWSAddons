#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Add a local restock action onto an object.
 *
 * Arguments:
 * 0: Object to add the restock action on <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject] call sws_resupply_fnc_addRestockAction;
 *
 * Public: No
 */

params [
  ["_target", objNull, [objNull]]
];

TRACE_1(QGVAR(DOUBLES(fnc,addRestockAction)),_this);

private _fnc_onInteract = {
  params ["_target", "_caller"];

  private _fnc_onSuccess = {
    params ["_args"];
    _args params ["_target", "_caller"];
    [QGVAR(consumeRestock), [_target, _caller], _target] call CBA_fnc_targetEvent;
  };

  private _fnc_onEachFrame = {
    param [0] call FUNC(canRestock);
  };

  [
    GVAR(restockTime),
    [_target, _caller],
    _fnc_onSuccess,
    QGVAR(restockInterrupted),
    "Restocking",
    _fnc_onEachFrame,
    [],
    false
  ] call ace_common_fnc_progressBar;
};

private _restockAction = [
  QGVAR(restock),
  "Restock Gear",
  QPATHTOEF(main,data\sws_icon_howl_ca.paa), // ICON
  _fnc_onInteract,
  FUNC(canRestock),
  {}, // Insert children
  [] // Parameters
] call ace_interact_menu_fnc_createAction;

[
  _target,
  ACE_INTERACT_ACTIONTYPE_TARGET,
  ["ACE_MainActions"],
  _restockAction
] call ace_interact_menu_fnc_addActionToObject;
