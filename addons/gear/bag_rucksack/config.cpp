#include "script_component.hpp"

#include "XtdGearModels.inc"
#include "CfgVehicles.inc"

class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "optre_weapons_backpacks"
      , "sws_main"
      , "sws_aceax"
    };
    VERSION_CONFIG;
  };
};
