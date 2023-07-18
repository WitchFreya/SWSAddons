#include "script_component.hpp"

#include "CfgEventHandlers.hpp"
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
        units[] = { };
        weapons[] = { CLASSES_AMMO };
        magazines[] = { CLASSES_MAGAZINES };
        ammo[] = { CLASSES_AMMO };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "OPTRE_FunctionsLibrary_supercombustion", "LM_OPCAN_WEP_RES", "OPTRE_ACE_Compat", "SWS_Main" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
