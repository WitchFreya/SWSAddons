#include "script_component.hpp"

delete CfgDigVehicles;

class CfgPatches
{
  class SUBADDON
  {
    name = QUOTE(ADDON);
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "grad_trenches_functions" };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
