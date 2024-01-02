#include "script_component.hpp"

#include "CfgEventHandlers.inc"

class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "crowsza_zeus_text" };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
  };
};
