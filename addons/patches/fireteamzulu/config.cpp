#include "script_component.hpp"

/** Deprecated - To be removed in a future version. */
class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "V_FZ_Core" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
