#include "script_component.hpp"

private _fnc_swapSkeletons = {
  if !(OPAEX_SkeletonSwap_Enabled) exitWith {};
  private _options = [
    ["MJOLNIR_", "OPTRE_Spartan2_Soldier_Rifleman_AR", true],
    ["FC_Elite_", "OPTRE_FC_Elite_Minor", true],
    ["", "B_soldier_F", false]
  ];

  {
    private _result = _x call OPAEX_fnc_swapPlayerSkeleton;
    if (_result) exitWith {};
  } forEach _options;
};

[missionNamespace, "arsenalClosed", _fnc_swapSkeletons] call BIS_fnc_addScriptedEventHandler;
["ace_arsenal_displayClosed", _fnc_swapSkeletons] call CBA_fnc_addEventHandler;
