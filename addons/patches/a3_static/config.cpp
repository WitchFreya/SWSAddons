#include "script_component.hpp"
#include "cfgVehicles.inc"
class CfgPatches {
  class SUBADDON {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
