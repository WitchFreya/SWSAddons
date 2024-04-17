#include "script_component.hpp"

class Components;
class PilotCamera;
class TextureSources;

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
    requiredAddons[] = {
      "a3_air_f_beta_heli_attack_02"
      , "a3_weapons_f"
      , "OPTRE_UNSC_Units_Navy"
      , "optre_weapons"
      , "optre_weapons"
      , "ace_hellfire"
      , "ace_medical_treatment"
      , "sws_main"
      , "sws_weapons_ar0m37s"
    };
    VERSION_CONFIG;
  };
};
