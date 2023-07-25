#include "script_component.hpp"

["ace_arsenal_loadoutsTabChanged", { _this call DFUNC(migrateLoadouts); }] call CBA_fnc_addEventHandler;
