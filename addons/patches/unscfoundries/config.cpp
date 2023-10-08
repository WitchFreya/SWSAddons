#include "script_component.hpp"
#include "CfgVehicles.inc"

class CfgPatches
{
    class SUBADDON
    {
        name = COMPONENT_NAME;
        units[] = { };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "B_19thUNSC",
            "DMNS_Shortsword_F",
            "DMNS_Vehicles_SOEIV"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
