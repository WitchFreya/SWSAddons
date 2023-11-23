#include "script_component.hpp"

/*
 * Author: Maid
 * Retrieve the active SW radio for a unit.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * The radio class name or nil if not found
 *
 * Public: Yes
 */

params ["_unit"];

private _items = assignedItems _unit;
private _radioIdx = _items findIf {
    _x call TFAR_fnc_isRadio;
};

if (_radioIdx == -1) exitWith {
    TRACE_1("No SW radio on unit",_unit);
    nil;
};

_items select _radioIdx;
