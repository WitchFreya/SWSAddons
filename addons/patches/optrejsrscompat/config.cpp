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
        requiredAddons[] = { "OPTRE_Vehicles_Pelican", "OPTRE_JSRS_Sounds" };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
