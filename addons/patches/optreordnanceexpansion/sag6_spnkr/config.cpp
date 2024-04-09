#include "script_component.hpp"

#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "OPTRE_Weapons", "SAG6_SPNKR" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
