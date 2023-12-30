#include "script_component.hpp"

private _migrations = uiNamespace getVariable ["swst_migrations", createHashMap];

// v2.2.0
_migrations set ["adv_aceCPR_AED", "SWS_AED"];

uiNamespace setVariable ["swst_migrations", _migrations];
