#include "script_component.hpp"

#include "CfgAmmo.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "SAG6_Ordinance" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
