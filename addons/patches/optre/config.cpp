#include "script_component.hpp"

class LowROF;

#include "CfgAmmo.inc"
#include "CfgFunctions.inc"

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
      "OPTRE_Weapons"
      , "OPTRE_UNSC_Structure_Military"
      , "OPTRE_Vehicles"
      , "OPTRE_Vehicles_Air"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
