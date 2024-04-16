#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Add full arsenal to object.
 *
 * Arguments:
 * 0: Target object to turn into arsenal <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject] call sws_modules_fnc_addFullArsenal;
 *
 * Public: No
 */

params ["_target"];

private _whitelist = uiNamespace getVariable [QGVAR(whitelist), []];

[_target, _whitelist, true] call ace_arsenal_fnc_initBox;
