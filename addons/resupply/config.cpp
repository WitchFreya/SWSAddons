#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgVehicles.inc"
#include "CfgEditorSubcategories.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    units[] = { CLASSES_VEHICLES };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "ace_common"
      , "ace_medical_treatment"
      , "OPTRE_Misc"
      , "sws_main"
      , "sws_common"
      , "sws_weapons"
      , "sws_arsenal"
    };
    VERSION_CONFIG;
  };
};
