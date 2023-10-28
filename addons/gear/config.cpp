#include "script_component.hpp"

#include "CfgVehicles.inc"
#include "CfgWeapons.inc"
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
            "A3_Supplies_F_Orange_Bags"
            , "LM_OPCAN_UNSC"
            , "sws_main"
            , "sws_tech"
            , "sws_common"
            , "sws_air_uav_smq94"
            , "sws_air_uav_demining"
            , "OPTRE_UNSC_Units"
        };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
