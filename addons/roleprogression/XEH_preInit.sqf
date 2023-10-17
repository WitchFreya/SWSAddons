#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

#include "defines.hpp"

["ace_arsenal_leftPanelFilled", {
    _this call FUNC(fillLeftPanel);
}] call CBA_fnc_addEventHandler;

[QGVAR(leftPanelFilled), {
    TRACE_1(QGVAR(leftPanelFilled),_this);
    _this call FUNC(selectCurrentRole);
}] call CBA_fnc_addEventHandler;
