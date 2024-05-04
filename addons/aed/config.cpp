#include "script_component.hpp"

class ItemInfo;

#include "CfgEventHandlers.inc"
#include "CfgWeapons.inc"
#include "ACE_Medical_Treatment_Actions.inc"
#include "ACE_Medical_StateMachine.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = {};
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "ace_medical_treatment"
      , "ace_medical_statemachine"
      , "sws_main"
      , "sws_common"
    };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
