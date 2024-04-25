#include "script_component.hpp"

[QGVAR(restoreLastLoadout), FUNC(restoreLastLoadout)] call CBA_fnc_addEventHandler;
[QGVAR(addRestockAction), FUNC(addRestockAction)] call CBA_fnc_addEventHandler;
[QGVAR(resupplyPodHitGround), FUNC(onResupplyPodHitGround)] call CBA_fnc_addEventHandler;
[QGVAR(setRestockAmount), FUNC(setRestockAmount)] call CBA_fnc_addEventHandler;
[QGVAR(consumeRestock), FUNC(consumeRestock)] call CBA_fnc_addEventHandler;

[QGVAR(restock), {
  TRACE_1(QGVAR(restock),_this);
  params ["_unit"];
  [_unit] call FUNC(restoreLastLoadout);
}] call CBA_fnc_addEventHandler;
