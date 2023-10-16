#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

["ace_arsenal_leftPanelFilled", {
    _this call FUNC(fillLeftPanel);
}] call CBA_fnc_addEventHandler;
