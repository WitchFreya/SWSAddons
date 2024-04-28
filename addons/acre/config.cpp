#include "script_component.hpp"

#include "CfgWeapons.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "acre_main"
      , "acre_sys_components"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
