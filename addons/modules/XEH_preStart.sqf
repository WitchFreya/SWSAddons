#include "script_component.hpp"
#include "XEH_PREP.inc.sqf"

[configFile] call FUNC(scanConfig) params ["_gear"];
uiNamespace setVariable [QGVAR(arsenalItemNames), _gear];
