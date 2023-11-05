#include "script_component.hpp"

#include "ACEX_Fortify_Presets.inc"
#include "CfgEventHandlers.inc"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sws_main"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
