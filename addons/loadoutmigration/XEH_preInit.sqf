#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

//== Migrations
GVAR(MIGRATIONS) = createHashMap;

#include "migrations\v0_1_37.hpp"
#include "migrations\v0_1_43.hpp"
#include "migrations\v0_2_0.hpp"
