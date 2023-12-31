#include "script_component.hpp"

#include "RscDisplayMain.hpp"
#include "CfgLoadingScreens.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "19th_Fleet_Armor" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
