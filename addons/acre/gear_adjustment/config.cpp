#include "script_component.hpp"

class ItemInfo;

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
      "acre_main"
      , "sws_gear"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
