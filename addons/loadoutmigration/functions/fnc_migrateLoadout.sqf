#include "script_component.hpp"

/*
 * Author: Maid
 * Migrate the loadout by name.
 *
 * Arguments:
 * 0: Loadout Name <STRING>
 *
 * Return Value:
 * The updated loadout array <ARRAY>
 *
 * Public: No
*/

params ["_unit","_loadoutName"];

private _allLoadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];
private _selectedLoadoutIdx = _allLoadouts findIf {
    _x params ["_name"];
    _name == _loadoutName;
};

private _selectedLoadout = _allLoadouts select _selectedLoadoutIdx;

_selectedLoadout params ["_name", "_items"];

private _verifiedItems = +_items;

private _verified = [_verifiedItems] call ace_arsenal_fnc_verifyLoadout;

private _nullItemsList = _verified select 3;

if (count _nullItemsList == 0) exitWith {
    TRACE_1("EXIT: No valid items to migrate.",_nullItemsList);
    -1
};

TRACE_1("_relevantItems",_relevantItems);

_items params ["_base", "_cbaExtended"];

private _hasMigrations = false;

private _fnc_migrate = {
    params ["_itemTree", "_itemMap"];
	if (typeName _itemTree == "STRING") exitWith {
		private _replacement = _itemMap get _itemTree;
		if (isNil "_replacement") then {
			_itemTree;
		} else {
            _hasMigrations = true;
			_replacement;
		};
	};
	if (typeName _itemTree != "ARRAY") exitWith {_itemTree};
	if (count _itemTree == 0) exitWith {_itemTree};

	_itemTree apply { [_x,_itemMap] call _fnc_migrate };
};

private _migrated = [_base, GVAR(MIGRATIONS)] call _fnc_migrate;
if !(_hasMigrations) exitWith {0};
if (isNil "_cbaExtended") then {_migrated} else {[_migrated,_cbaExtended]};
