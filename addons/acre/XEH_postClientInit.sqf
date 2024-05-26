#include "script_component.hpp"

ASSERT_DEFINED({acre_player},"This probably means acre isn't loaded or initialized.");

// When the display is opened, adjust the cache for the radio items to display the descriptive name from acre
GVAR(ace_arsenal_displayOpenedEH) = ["ace_arsenal_displayOpened", {
  [] call FUNC(populateAceCache);

}] call CBA_fnc_addEventHandler;

GVAR(cba_loadoutGet) = ["CBA_loadoutGet", {
  params ["_unit"];
}] call CBA_fnc_addEventHandler;


