#include "script_component.hpp"

#include "XtdGearInfos.inc"
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
        requiredAddons[] = { "sws_gear" };
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
