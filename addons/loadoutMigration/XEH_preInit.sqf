#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

GVAR(MIGRATIONS) = createHashMap;

// v0.1.37
GVAR(MIGRATIONS) set ["MEU_Medical_Hardcase", "SWS_V_Bag_Hardcase_Medical"];

// v0.2.1
GVAR(MIGRATIONS) set ["SWS_NVG_NeuralLace", "SWS_NVG_NeuralLace_IR"];
GVAR(MIGRATIONS) set ["SWS_Tech_Weapon_NVG_NeuralLace", "SWS_NVG_NeuralLace_IR"];
GVAR(MIGRATIONS) set ["SWS_NVG_NeuralLace_ONI", "SWS_NVG_NeuralLace_WHOT"];
GVAR(MIGRATIONS) set ["SWS_Tech_Weapon_NVG_NeuralLace_ONI", "SWS_NVG_NeuralLace_WHOT"];
