#include "script_component.hpp"
#include "CfgWorlds.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "ibr_fapovo_c" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
