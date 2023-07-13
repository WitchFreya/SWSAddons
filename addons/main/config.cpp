#include "script_component.hpp"

#include "CfgFactionClasses.hpp"
#include "CfgLoadingScreens.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"Extended_EventHandlers", "cba_main", "19th_Fleet_Armor", "1st_MEU_patch_main" /* load the background changes before our stuff */};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};

VERSIONING
