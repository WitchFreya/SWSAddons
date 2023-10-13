#include "script_component.hpp"

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.inc"
#include "RscInGameUI.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { CLASSES_WEAPONS };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "DMNS_Air_UAV_01", "sws_main", "sws_logic" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
