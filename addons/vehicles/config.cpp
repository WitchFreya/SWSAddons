#include "script_component.hpp"

#include "CfgVehicles.inc"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = { CLASSES_VEHICLES };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Armor_F_EPB",
            "ace_medical",
            "OPTRE_UNSC_Units_Army",
            "sws_common",
            "sws_main",
            "sws_weapons"
        };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
