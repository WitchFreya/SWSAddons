#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.inc.sqf"
ADDON = true;

#include "initSettings.inc.sqf"

["ace_arsenal_loadoutsDisplayOpened", FUNC(onLoadoutsDisplayOpened)] call CBA_fnc_addEventHandler;
