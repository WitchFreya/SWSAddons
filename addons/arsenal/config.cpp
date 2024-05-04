#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "defines.hpp"
#include "ui\RscCommon.inc"
#include "ui\RscAttributes.inc"
#include "Cfg3DEN.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_arsenal", "sws_main","sws_common"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
