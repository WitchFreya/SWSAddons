#include "script_component.hpp"

[QGVAR(saveRoleProgress), { _this call FUNC(saveRole); }] call CBA_fnc_addEventHandler;
