#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Save a loadout programmatically. This can overwrite existing loadouts.
 *
 * Arguments:
 * 0: Loadout name <STRING>
 * 1: Loadout or extended CBA loadout. This will be mutated, be careful! <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["My Cool Loadout", player call CBA_fnc_getLoadout] call sws_arsenal_fnc_saveLoadoutWithName;
 *
 * Public: No
 */

TRACE_1(QGVAR(fnc_saveLoadoutWithName),_this);

params [
  ["_loadoutName", "", [""]],
  "_mut_loadout"
];

private _loadout = [_mut_loadout] call ace_arsenal_fnc_replaceUniqueItemsLoadout;
private _loadoutMetadata = [[], _mut_loadout select 1] select (count _mut_loadout == 2);
private _extendedLoadout = [_loadout, _loadoutMetadata];

private _loadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];
private _mut_loadoutIndex = _loadouts findIf {(_x select 0) == _loadoutName};

if (_mut_loadoutIndex == -1) then {
  _mut_loadoutIndex = _loadouts pushBack [_loadoutName, _extendedLoadout];
} else {
  _loadouts set [_mut_loadoutIndex, [_loadoutName, _extendedLoadout]];
};

profileNamespace setVariable ["ace_arsenal_saved_loadouts", _loadouts];

["ace_arsenal_onLoadoutSave", [_mut_loadoutIndex, _loadout]] call CBA_fnc_localEvent;
["ace_arsenal_onLoadoutSaveExtended", [_mut_loadoutIndex, _extendedLoadout]] call CBA_fnc_localEvent;
