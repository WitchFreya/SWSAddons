#include "script_component.hpp"

delete CfgDigVehicles;

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = QUOTE(ADDON);
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "grad_trenches_functions" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
