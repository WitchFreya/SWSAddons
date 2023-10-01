#include "script_component.hpp"

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
        requiredAddons[] = { "OPTRE_Weapons_Charges" };
        // skipWhenMissingDependencies = 1; // TODO: enable once deps are enumerated
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
