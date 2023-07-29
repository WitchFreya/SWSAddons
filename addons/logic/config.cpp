#include "script_component.hpp"

#include "ace_arsenal_stats.inc"
#include "CfgEventHandlers.inc"
#include "CfgFactionClasses.inc"
#include "CfgVehicles.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { CLASSES_VEHICLES };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"SWS_Main", "SWS_Gear"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
