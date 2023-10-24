#include "script_component.hpp"

#include "CfgWeapons.inc"
#include "XtdGearModels.inc"

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
        requiredAddons[] = { QUOTE(SUBCOMPONENT) };
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
