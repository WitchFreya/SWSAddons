#include "script_component.hpp"

#include "CfgWeapons.inc"
#include "CfgEventHandlers.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "ace_arsenal"
      , "acre_main"
      , "acre_sys_components"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
