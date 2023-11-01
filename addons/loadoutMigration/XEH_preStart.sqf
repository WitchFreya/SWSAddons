#include "script_component.hpp"

private _migrations = uiNamespace getVariable ["swst_migrations", createHashMap];

// v0.2.1
_migrations set ["SWS_NVG_NeuralLace", "SWS_NVG_NeuralLace_IR"];
_migrations set ["SWS_Tech_Weapon_NVG_NeuralLace", "SWS_NVG_NeuralLace_IR"];
_migrations set ["SWS_NVG_NeuralLace_ONI", "SWS_NVG_NeuralLace_WHOT"];
_migrations set ["SWS_Tech_Weapon_NVG_NeuralLace_ONI", "SWS_NVG_NeuralLace_WHOT"];

// v1.0.8.0
_migrations set ["SWS_Pack_SWS_V_UAV_SMQ94", "SWS_Bag_UAV_SMQ94"];
_migrations set ["SWS_Pack_SWS_V_UAV_SMQ94_Maid", "SWS_Bag_UAV_SMQ94_Maid"];
_migrations set ["SWS_Pack_SWS_V_UAV_Demining", "SWS_Bag_UAV_Demining"];

uiNamespace setVariable ["swst_migrations", _migrations];
