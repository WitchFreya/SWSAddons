#include "script_component.hpp"
#include "CfgVehicles.inc"

class CfgPatches
{
    class SUBADDON
    {
        name = COMPONENT_NAME;
        units[] = { CLASSES_VEHICLES };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"DMNS_Air_UAV_01"};
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
    };
};
