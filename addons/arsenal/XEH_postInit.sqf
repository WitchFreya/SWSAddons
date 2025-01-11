#include "script_component.hpp"

["ace_arsenal_displayClosed", {
  if !(GVAR(saveLastLoadout)) exitWith {
    TRACE_1(QUOTE(GVAR(saveLastLoadout) not enabled),GVAR(saveLastLoadout));
  };
  private _target = currentNamespace getVariable ["ace_arsenal_center", player];
  private _isValidTarget = local _target && {_target isEqualTo player};
  if (_isValidTarget) exitWith {
    TRACE_1("Invalid loadout save target",_target);
  };
  [GVAR(lastLoadoutName), player call CBA_fnc_getLoadout] call FUNC(saveLoadoutWithName);
}] call CBA_fnc_addEventHandler;
