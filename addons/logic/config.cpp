#include "script_component.hpp"

#include "ace_arsenal_stats.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"

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


