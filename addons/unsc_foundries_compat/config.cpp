#include "script_component.hpp"

#include "ui\RscAttributes.inc"

class CfgPatches {
  class ADDON {
    author = QUOTE(AUTHOR);
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    skipWhenMissingDependencies = TRUE;
    requiredAddons[] = {
      "DMNS_Modules"
      , "sws_patches"
    };
    VERSION_CONFIG;
  };
};
