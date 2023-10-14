#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgWeapons.inc"
#include "ui\RscAttributes.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { CLASSES_WEAPONS };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "ace_dogtags" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
