#include "script_component.hpp"

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazineWells.hpp"
#include "XtdGearModels.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = { CLASSES_AMMO };
        magazines[] = { CLASSES_MAGAZINE };
        ammo[] = { CLASSES_AMMO };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "LM_OPCAN_WEP_RES", "OPTRE_ACE_Compat", "1st_MEU_patch_weapons", "SWS_Main" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
