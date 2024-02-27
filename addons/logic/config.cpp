#include "script_component.hpp"

#include "CfgEventHandlers.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "sws_main" };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
