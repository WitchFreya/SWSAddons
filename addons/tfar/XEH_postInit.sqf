#include "script_component.hpp"

[QGVAR(OnRadiosReceived), "OnRadiosReceived", FUNC(onRadiosReceived)] call TFAR_fnc_addEventHandler;
["ace_arsenal_loadoutsDisplayOpened", FUNC(onLoadoutsDisplayOpened)] call CBA_fnc_addEventHandler;

// Ensure locality.
[QGVAR(restoreShortRangeRadio), FUNC(restoreShortRangeRadio)] call CBA_fnc_addEventHandler;
[QGVAR(saveShortRangeRadio), FUNC(saveShortRangeRadio)] call CBA_fnc_addEventHandler;
