#include "script_component.hpp"

class UserActions;

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
        requiredAddons[] = { "SAG6_Pelican_VTOL" };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
    };
};
