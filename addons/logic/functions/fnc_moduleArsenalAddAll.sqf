#include "script_component.hpp"

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

params["_logic", "_units", "_activated"];

if (!_activated || !local _logic) exitWith {0};

TRACE_2("moduleArsenalAddAll vars",_logic,_activated);

[_units] call FUNC(arsenalAddAll);

INFO("moduleArsenalAddAll complete.");