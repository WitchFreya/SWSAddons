#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Rearm the player. If the player retrieved items from an ACE Arsenal this mission, it will restore those
 *  items to the player. Otherwise, it'll open a very limited Arsenal on them to grab some ammo and medical supplies from.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call sws_resupply_fnc_restoreLastLoadout;
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]]];

if !(local _unit) exitWith {
  [QGVAR(restoreLastLoadout),_this,_unit] call CBA_fnc_targetEvent;
};

private _savedLoadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];

private _loadout /* [name: string, extendedLoadout: [Loadout, Metadata]] | nil */ = _savedLoadouts select { (_x select 0) == EGVAR(arsenal,lastLoadoutName)} select 0;

if (isNil {_loadout}) exitWith {
  TRACE_1("Unable to get recent loadout, opening limited arsenal.",_unit);
  hint "You have no last loadout saved. Please ping Zeus if you need additional items outside of this arsenal.";
  private _mags = magazines [player, true];
  private _weapons = weaponsItems player;
  private _additionalMags = flatten (_weapons apply {
    private _primaryMag = _x select 4;
    private _secondaryMag = _x select 4;
    [_primaryMag, _secondaryMag] select { count _x == 2 } apply { _x select 0 };
  });
  private _allMags = _mags + _additionalMags;
  private _uniqueMags = _allMags arrayIntersect _allMags;
  private _medicalItems = ["SWS_Medigel", "SWS_Biofoam", "SWS_NeuroStim", "ACE_quikclot", "ACE_elasticBandage", "ACE_epinephrine", "ACE_bloodIV"];
  private _logic = "Logic" createVehicleLocal [0, 0, 0];
  [_logic, _uniqueMags + _medicalItems, false] call ace_arsenal_fnc_initBox;
  [_logic, player] call ace_arsenal_fnc_openBox;
  deleteVehicle _logic;
};

[player, _loadout select 1, true] call CBA_fnc_setLoadout;
