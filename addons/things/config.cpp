#include "script_component.hpp"

#include "CfgEditorSubcategories.inc"
#include "CfgWeapons.inc"
#include "CfgVehicles.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    author = QUOTE(AUTHOR);
    units[] = {
        #ifdef CLASSES_VEHICLES
        CLASSES_VEHICLES
        #endif
    };
    weapons[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {};
    VERSION_CONFIG;
  };
};
