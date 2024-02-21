#include "script_component.hpp"

class ItemInfo;

#include "CfgWeapons.inc"
#include "Ace_Medical_Treatment.inc"
#include "Ace_Medical_Treatment_Actions.inc"
#include "CfgEventHandlers.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = {};
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "ace_medical"
      , "ace_medical_treatment"
      , "ace_medical_statemachine"
      , "optre_weapons"
      , "optre_ace_compat_medical"
      , "sws_main"
      , "sws_common"
    };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
