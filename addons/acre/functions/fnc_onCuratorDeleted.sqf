#include "script_component.inc.sqf"

TRACE_1(QFUNC(onCuratorDeleted),_this);

/*
 * Author: Maid
 * Remove God Mode access when a curator module is deleted.
 *
 * Arguments:
 * 0: Curator logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [getAssignedCuratorLogic player] call sws_acre_fnc_onCuratorDeleted;
 *
 * Public: No
 */

params ["_logic"];

["acre_api_fnc_godModeConfigureAccess", [false, false], getAssignedCuratorUnit _logic] call CBA_fnc_targetEvent;
