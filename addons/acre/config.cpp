#include "script_component.hpp"

#include "CfgFunctions.inc"
#include "CfgWeapons.inc"
#include "CfgEventHandlers.inc"

#include "ui\RscCommon.inc"
#include "ui\RscAttributes.inc"

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
      , "acre_api"
      , "acre_sys_components"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
