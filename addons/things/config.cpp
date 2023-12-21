#include "script_component.hpp"

#include "CfgWeapons.inc"
#include "CfgVehicles.inc"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = {
        #ifdef CLASSES_VEHICLES
        CLASSES_VEHICLES
        #endif
    };
    weapons[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {};
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
