#include "script_component.hpp"

private _migrations = uiNamespace getVariable ["swst_migrations", createHashMap];

// v3.1.0
_migrations set ["SWS_Helmet_Maid_Recon", "SWS_Helmet_Recon_Maid"];

uiNamespace setVariable ["swst_migrations", _migrations];
