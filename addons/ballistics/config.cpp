#include "script_component.hpp"

#include "CfgAmmo.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"sws_main","sws_common"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
