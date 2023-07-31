#include "script_component.hpp"

["acex_fortify_objectPlaced", {
    _this call FUNC(acexFortifyObjectPlacedEH);
}] call CBA_fnc_addEventHandler;
