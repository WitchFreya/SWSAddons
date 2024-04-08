#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Adds all SWS items to any synchronized ACE arsenals at mission start.
 *
 * Arguments:
 * 0: Logic <LOGIC>
 * 1: Units <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [LOGIC, [crate, box], true] call SWS_logic_fnc_moduleArsenalAddAll
 *
 * Public: No
 */

params ["_logic", "_units", "_activated"];

if (!_activated || { !local _logic; } || { count _units < 1 }) exitWith {0};

TRACE_3("moduleArsenalAddAll vars",_logic,_units,_activated);

private _exclude = _logic getVariable ["Exclude", ""] splitString "," apply { toLower (trim _x); };
private _items = uiNamespace getVariable [QGVAR(arsenalItemNames), []];
private _relevantItems = (_items apply { toLower _x; }) - _exclude;
private _allowDragging = _logic getVariable ["AllowDragging", false];
private _allowCarrying = _logic getVariable ["AllowCarrying", false];

{
  [_x, [], true] call ace_arsenal_fnc_initBox;
  [_x, _relevantItems, true] call ace_arsenal_fnc_addVirtualItems;
  [_x, _allowDragging] call ace_dragging_fnc_setDraggable;
  [_x, _allowCarrying] call ace_dragging_fnc_setCarryable;
} forEach _units;

INFO("moduleArsenalAddAll complete.");
