#include "script_component.hpp"

private _id = ["addBuildHandler", { _this call FUNC(addBuildHandler); }] call CBA_fnc_addEventHandler;

diag_log format ["registered EventHandler 'addBuildHandler' at id: %1", _id];