#include "script_component.hpp"

private _id = [QGVAR(addBuildHandler), { _this call FUNC(addBuildHandler); }] call CBA_fnc_addEventHandler;

TRACE_1("Registered addBuildHandler",_id);