#include "script_component.hpp"

#include "CfgWeapons.inc"
#include "CfgVehicles.inc"
#include "XtdGearInfos.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { CLASSES_VEHICLES };
        weapons[] = { CLASSES_WEAPONS };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_UNSC_Units",
            "LM_OPCAN_UNSC",
            "A3_Air_F_Orange_UAV_06",
            "A3_Supplies_F_Orange_Bags",
            "sws_main",
            "sws_tech"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
