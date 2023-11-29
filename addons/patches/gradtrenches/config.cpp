#include "script_component.hpp"

#include "CfgDigVehicles.inc"
#include "CfgFunctions.inc"

class CfgPatches {
    class SUBADDON {
        name = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "ace_trenches" };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};

