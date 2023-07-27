#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

GVAR(MIGRATIONS) = createHashMap;

#include "migrations\v0_1_37.hpp";
