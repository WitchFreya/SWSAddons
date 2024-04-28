#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgFactionClasses.inc"

class CfgPatches {
  class ADDON {
    author = QUOTE(AUTHOR);
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "sws_main"
      , "sws_common"
      , "sws_resupply"
    };
    VERSION_CONFIG;
  };
};
