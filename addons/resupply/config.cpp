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
      "OPTRE_Misc"
      , "sws_main"
      , "sws_common"
      , "sws_weapons"
      , "sws_arsenal"
      , "ace_medical_treatment"
    };
    VERSION_CONFIG;
  };
};
