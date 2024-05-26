#include "script_component.hpp"

ASSERT_DEFINED({acre_player},"This probably means acre isn't loaded or initialized.");

GVAR(cba_preLoadoutSetEH) = ["CBA_preLoadoutSet", {
  params ["_unit"];
  [_unit] call FUNC(saveRadios);
}] call CBA_fnc_addEventHandler;

GVAR(cba_loadoutSetEH) = ["CBA_loadoutSet", {
  params ["_unit"];
  [_unit] call FUNC(restoreRadios);
}] call CBA_fnc_addEventHandler;


