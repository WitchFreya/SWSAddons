#include "script_component.hpp"

#include "CfgWeapons.inc"
#include "XtdGearModels.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_UNSC_Units_Army"
      , "OPTRE_ACE_Compat"
      , "sws_main"
      , "sws_aceax"
    };
    VERSION_CONFIG;
  };
};
