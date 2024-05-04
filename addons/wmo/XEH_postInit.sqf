#include "script_component.hpp"

if !(hasInterface) exitWith {};

WMO_enabled = true;

// ensure these global variables are set up. god i hate global variable nonsense.
{
  private _initialized = currentNamespace getVariable [_x, []];
  currentNamespace setVariable [_x, _initialized];
} forEach [
  "WMO_specialObjects",
  "WMO_noRoadway",
  "BW_WMO_enter",
  "BW_WMO_exit"
];

// Create variables
private _specialObjects = currentNamespace getVariable ["WMO_specialObjects", []];
WMO_specialObjects = _specialObjects;
private _noRoadway = currentNamespace getVariable ["WMO_noRoadway", []];
WMO_noRoadway = _noRoadway;

[
  {time > 1},
  {
    if !(isNil {babe_em_fnc_walkonstuff}) then {
      ["EH_em_walkonstuff"] call babe_core_fnc_removeEH;
      if !(isNil {babe_em_help}) then {
        babe_em_help setPosASL [0,0,0];
      };
    };

    GVAR(pfh) = [FUNC(setPosi)] call CBA_fnc_addPerFrameHandler;
  }
] call CBA_fnc_waitUntilAndExecute;

BW_WMP_dmgEvh = player addEventHandler ["HandleDamage", BW_WMO_fnc_handleDamage];
