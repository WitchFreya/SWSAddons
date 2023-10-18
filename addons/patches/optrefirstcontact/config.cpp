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
            "OPTRE_FC_Vehicles_Locust",
            "OPTRE_FC_Vehicles_Banshee",
            "OPTRE_FC_Vehicles_T26",
            "OPTRE_FC_Vehicles_Spectre",
            "OPTRE_FC_Vehicles_Spirit"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
