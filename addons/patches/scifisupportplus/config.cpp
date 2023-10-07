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
        ammo[] = { CLASSES_AMMO };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "OPAEX_AirCore", "OPAEX_Glassing", "PHAN_OPAEX" };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
