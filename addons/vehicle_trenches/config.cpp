#include "script_component.hpp"

class ACE_SelfActions;

#include "SelfActions.inc"
#include "CfgEventHandlers.inc"
#include "CfgVehicles.hpp"

class CfgPatches {
  class ADDON {
    name = QUOTE(ADDON);
    units[] = { CLASSES_VEHICLES };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "grad_trenches_functions"
      , "A3_Armor_F_Beta"
    };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};

