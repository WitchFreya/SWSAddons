#include "script_component.hpp"
#include "XEH_PREP.inc.sqf"

// load the blacklist from file and store it in memory
private _blacklist = call compileFinal preprocessFileLineNumbers QPATHTOF(defaultItems.sqf);
uiNamespace setVariable [QGVAR(blacklist), _blacklist];
