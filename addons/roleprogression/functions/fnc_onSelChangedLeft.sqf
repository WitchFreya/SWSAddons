#include "script_component.hpp"
#include "..\defines.hpp"

_this call aceax_arsenal_fnc_onSelChangedLeft;

if (ace_arsenal_currentLeftPanel != IDC_buttonRole) exitWith {};

params ["_control", "_curSel"];

if (_curSel < 0) exitwith {};

private _display = ctrlParent _control;

private _selection = _control lbData _curSel;

private _oldRole = GVAR(role);
GVAR(role) = _selection;

[QGVAR(roleChanged), [_selection, _oldRole]] call CBA_fnc_localEvent;
