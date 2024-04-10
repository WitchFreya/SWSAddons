#include "script_component.hpp"

class TextureSources;

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
      "ace_fortify"
      , "ace_logistics_wirecutter"
      , "ace_logistics_uavbattery"
      , "ace_medical_treatment"
      , "optre_unsc_units_army"
      , "sws_main"
      , "sws_gear"
      , "sws_weapons_ar0m37s"
      , "sws_weapons_howdy"
    };
    VERSION_CONFIG;
  };
};
