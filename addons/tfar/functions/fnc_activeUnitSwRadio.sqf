#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Retrieve the active SW radio for a unit.
 *
 * Arguments:
 * 0: unit <OBJECT> - The unit to check for a radio.
 *
 * Return Value:
 * <string | nil> - The radio class name or nil if not found
 *
 * Example:
 * [player] call sws_tfar_fnc_activeUnitSwRadio;
 *
 * Public: No
 */

params [
  ["_unit", objNull, [objNull]]
];

private _items = assignedItems _unit;
private _radioIdx = _items findIf {
  _x call TFAR_fnc_isRadio;
};

if (_radioIdx == -1) exitWith {
  TRACE_1("No SW radio on unit",_unit);
  nil;
};

_items select _radioIdx;
