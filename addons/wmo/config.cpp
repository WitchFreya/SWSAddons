#include "script_component.hpp"

#include "CfgFunctions.inc"
#include "CfgEventHandlers.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(ADDON);
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"BW_adaptive_roadway", "sws_main", "sws_common"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
