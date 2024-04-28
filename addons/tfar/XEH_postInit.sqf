#include "script_component.hpp"

[QGVAR(OnRadiosReceived), "OnRadiosReceived", FUNC(onRadiosReceived)] call TFAR_fnc_addEventHandler;
["ace_arsenal_loadoutsDisplayOpened", {
  private _target = currentNamespace getVariable ["ace_arsenal_center", player];
  [_target] call FUNC(saveRadios);
}] call CBA_fnc_addEventHandler;

// Ensure that radio configuration doesn't get lost.
[QEGVAR(resupply,restock), FUNC(saveRadios)] call CBA_fnc_addEventHandler;

// Ensure locality.
[QGVAR(restoreShortRangeRadio), FUNC(restoreShortRangeRadio)] call CBA_fnc_addEventHandler;
[QGVAR(saveShortRangeRadio), FUNC(saveShortRangeRadio)] call CBA_fnc_addEventHandler;
[QGVAR(restoreLongRangeRadio), FUNC(restoreLongRangeRadio)] call CBA_fnc_addEventHandler;
[QGVAR(saveLongRangeRadio), FUNC(saveLongRangeRadio)] call CBA_fnc_addEventHandler;
[QGVAR(saveRadios), FUNC(saveRadios)] call CBA_fnc_addEventHandler;
