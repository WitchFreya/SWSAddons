#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

GVAR(MIGRATIONS) = createHashMap;

// v0.2.1
GVAR(MIGRATIONS) set ["SWS_NVG_NeuralLace", "SWS_NVG_NeuralLace_IR"];
GVAR(MIGRATIONS) set ["SWS_Tech_Weapon_NVG_NeuralLace", "SWS_NVG_NeuralLace_IR"];
GVAR(MIGRATIONS) set ["SWS_NVG_NeuralLace_ONI", "SWS_NVG_NeuralLace_WHOT"];
GVAR(MIGRATIONS) set ["SWS_Tech_Weapon_NVG_NeuralLace_ONI", "SWS_NVG_NeuralLace_WHOT"];

// v1.0.8.0
GVAR(MIGRATIONS) set ["SWS_Pack_SWS_V_UAV_SMQ94", "SWS_Bag_UAV_SMQ94"];
GVAR(MIGRATIONS) set ["SWS_Pack_SWS_V_UAV_SMQ94_Maid", "SWS_Bag_UAV_SMQ94_Maid"];
GVAR(MIGRATIONS) set ["SWS_Pack_SWS_V_UAV_Demining", "SWS_Bag_UAV_Demining"];
