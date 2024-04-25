#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgFactionClasses.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "zen_dialog"
      , "Splits_Vehicles_Air_Pelican"
      , "sws_main"
      , "sws_common"
      , "sws_resupply"
    };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
