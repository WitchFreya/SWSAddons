#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons = {"SWS_Main"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};

#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
