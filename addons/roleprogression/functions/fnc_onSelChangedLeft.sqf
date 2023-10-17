#include "script_component.hpp"
#include "..\defines.hpp"

/*
 * Author: Maid
 * Adds additional logic to onSelChangeLeft function from ace.
 *
 * Arguments:
 * 0: Left panel control <CONTROL>
 * 1: Left panel selection <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

if (ace_arsenal_currentLeftPanel != IDC_buttonRole) exitWith {
    _this call ace_arsenal_fnc_onSelChangedLeft;
};

params ["_control", "_curSel"];

if (_curSel < 0) exitwith {};
private _display = ctrlParent _control;
private _selection = _control lbData _curSel;
if (_selection != GVAR(selectedRole) && { !ace_arsenal_leftTabFocus }) exitWith {
    [_display] call FUNC(selectCurrentRole);
};
TRACE_1("Changing selection",_selection);

[_display, _control, _curSel, configFile >> "CfgRoles" >> _selection] call ace_arsenal_fnc_itemInfo;
GVAR(selectedRole) = _selection;
[QGVAR(changeRole), [_selection, ace_arsenal_center]] call CBA_fnc_globalEvent;
