#include "script_component.hpp"

["loadout", {
    _this call FUNC(loadoutChangeEH);
}] call CBA_fnc_addPlayerEventHandler;
