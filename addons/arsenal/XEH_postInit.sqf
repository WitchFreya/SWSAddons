#include "script_component.hpp"

["ace_arsenal_loadoutsDisplayClosed", {
  if !(GVAR(saveLastLoadout)) exitWith {};
  private _target = currentNamespace getVariable ["ace_arsenal_center", player];
  if !(local _target || {!(_target isEqualTo player)}) exitWith {
    TRACE_1("Non-player target",_target);
  };
  [GVAR(lastLoadoutName), player call CBA_fnc_getLoadout] call FUNC(saveLoadoutWithName);
}] call CBA_fnc_addEventHandler;
