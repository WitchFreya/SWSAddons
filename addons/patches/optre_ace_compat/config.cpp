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
    requiredAddons[] = {
      "OPTRE_Weapons"
      , "OPTRE_ACE_Compat"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
