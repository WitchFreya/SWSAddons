#include "script_component.hpp"

#include "CfgEventHandlers.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"swst_loadoutmigration"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
