#include "script_component.hpp"

["acre_api_fnc_godModeConfigureAccess", acre_api_fnc_godModeConfigureAccess] call CBA_fnc_addEventHandler;

ASSERT_DEFINED({acre_player},"This probably means acre isn't loaded or initialized.");

GVAR(cba_preLoadoutSetEH) = ["CBA_preLoadoutSet", {
  params ["_unit"];
  if !(GVAR(restoreOnLoadoutSet)) exitWith {
    TRACE_2("Nothing to do",GVAR(restoreOnLoadoutSet),_unit);
  };
  [_unit] call FUNC(saveRadios);
}] call CBA_fnc_addEventHandler;

GVAR(cba_loadoutSetEH) = ["CBA_loadoutSet", {
  params ["_unit"];
  if !(GVAR(restoreOnLoadoutSet)) exitWith {
    TRACE_2("Nothing to do",GVAR(restoreOnLoadoutSet),_unit);
  };
  [_unit] call FUNC(restoreRadios);
}] call CBA_fnc_addEventHandler;

GVAR(ace_zeus_zeusCreatedEH) = ["ace_zeus_zeusCreated", {
  [true, true] call acre_api_fnc_godModeConfigureAccess;
}] call CBA_fnc_addEventHandler;

// add god mode access to zeuses that aren't in zeus cam
if !(isNull getAssignedCuratorLogic player) then {
  [true, true] call ace_api_fnc_godModeConfigureAccess;
};
