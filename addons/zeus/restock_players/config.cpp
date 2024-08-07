#include "script_component.hpp"

#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    skipWhenMissingDependencies = TRUE;
    requiredAddons[] = {
      "crowsza_misc" // icon
      , "sws_main"
      , "sws_common"
      , "sws_resupply"
      , "sws_air"
    };
    VERSION_CONFIG;
  };
};
