#include "script_component.hpp"

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
        requiredAddons[] = { "1st_MEU_patch_main" }; // loads 1st meu so they don't override the title screen
        author = QUOTE(AUTHOR);
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};
