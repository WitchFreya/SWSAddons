#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgUnitInsignia.inc"
#include "ui\RscAttributes.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
