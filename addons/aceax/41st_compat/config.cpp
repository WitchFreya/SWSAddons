#include "script_component.hpp"

#include "XtdGearInfos.inc"
#include "XtdGearModels.inc"

class CfgPatches {
  class SUBADDON {
    skipWhenMissingDependencies = TRUE;
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"41ST_ODST_CORE"};
    VERSION_CONFIG;
  };
};
