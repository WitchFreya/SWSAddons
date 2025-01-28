#include "script_component.hpp"

class GL_3GL_F;

#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    skipWhenMissingDependencies = TRUE;
    requiredAddons[] = {
      "19_UNSC_Weapons"
    };
    VERSION_CONFIG;
  };
};
