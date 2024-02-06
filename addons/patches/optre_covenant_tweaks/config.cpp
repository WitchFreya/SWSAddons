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
        requiredAddons[] = {"OPTRE_FC_Weapons_Tyrant"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
    };
};

