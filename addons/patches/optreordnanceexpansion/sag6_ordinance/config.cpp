#include "script_component.hpp"

class UserActions;

#include "CfgAmmo.inc"

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
        requiredAddons[] = { "SAG6_Ordinance" };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
    };
};
