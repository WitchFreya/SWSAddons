#include "script_component.hpp"

#include "CfgWeapons.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = { WEAPON_CLASSES };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"LM_OPCAN_WEP_RES", "SWS_Main"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
