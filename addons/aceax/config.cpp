#include "script_component.hpp"

#include "XtdGearModels.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    author = QUOTE(AUTHOR);
    units[] = {  };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"aceax_main"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
