#include "script_component.hpp"

#include "CfgVehicles.inc"
#include "XtdGearModels.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "A3_Supplies_F_Orange_Bags"
      , "sws_main"
      , "sws_aceax"
    };
    VERSION_CONFIG;
  };
};
