#include "script_component.hpp"

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgWeapons.inc"

class CfgPatches
{
    class SUBADDON
    {
        name = COMPONENT_NAME;
        units[] = { };
        weapons[] = { CLASSES_WEAPONS };
        magazines[] = { CLASSES_MAGAZINES };
        ammo[] = { CLASSES_AMMO };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "A3_Weapons_F_Tank", "A3_Weapons_F_Tank_Launchers_MRAWS" };
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
    };
};
