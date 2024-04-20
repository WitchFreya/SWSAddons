#include "script_component.hpp"

[QGVAR(restoreLastLoadout), FUNC(restoreLastLoadout)] call CBA_fnc_addEventHandler;
[QGVAR(addRestockAction), FUNC(addRestockAction)] call CBA_fnc_addEventHandler;
[QGVAR(resupplyPodHitGround), FUNC(onResupplyPodHitGround)] call CBA_fnc_addEventHandler;
