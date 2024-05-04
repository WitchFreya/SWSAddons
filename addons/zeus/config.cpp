#include "script_component.hpp"

#include "CfgEventHandlers.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    skipWhenMissingDependencies = TRUE;
    requiredAddons[] = {
      "ace_zeus"
      , "zen_dialog"
      , "Splits_Vehicles_Air_Pelican" // default vehicle for restock
      , "sws_main"
      , "sws_common"
      , "sws_modules"
      , "sws_arsenal"
    };
    VERSION_CONFIG;
  };
};
