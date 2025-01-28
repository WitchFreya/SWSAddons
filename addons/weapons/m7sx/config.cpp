#include "script_component.hpp"

#include "CfgMagazines.inc"
#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    skipWhenMissingDependencies = TRUE;
    requiredAddons[] = {
      "19_UNSC_Weapons"
    };
    VERSION_CONFIG;
  };
};
