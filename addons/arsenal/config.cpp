#include "script_component.hpp"

#include "CfgVehicles.inc"
#include "CfgEventHandlers.inc"
#include "RscCommon.hpp"
#include "defines.hpp"
#include "Cfg3DEN.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    units[] = { CLASSES_VEHICLES };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_arsenal", "ace_zeus", "sws_main","sws_common"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
