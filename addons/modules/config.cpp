#include "script_component.hpp"

#include "CfgEventHandlers.inc"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "sws_common", "sws_logic" };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
