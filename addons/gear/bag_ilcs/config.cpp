#include "script_component.hpp"

#include "CfgVehicles.inc"

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
      "OPTRE_Weapons_Backpacks"
      , "OPTRE_ACE_Compat"
      , "sws_main"
      , "sws_aceax"
    };
    VERSION_CONFIG;
  };
};
