#include "script_component.hpp"

#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "19thArmors_new"
      , "19thMD_Vests_Kelp"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
