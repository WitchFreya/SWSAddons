#include "script_component.hpp"

#include "XtdGearModels.inc"

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
      "aceax_main"
      , "sws_aceax"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
