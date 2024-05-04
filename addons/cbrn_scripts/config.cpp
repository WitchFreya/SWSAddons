#include "script_component.hpp"

#include "CfgEventHandlers.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = {  };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"CBRN_scripts"};
    skipWhenMissingDependencies = TRUE;
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
