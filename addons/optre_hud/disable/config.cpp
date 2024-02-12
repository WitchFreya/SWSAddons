#include "script_component.hpp"

#include "CfgFunctions.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "OPTRE_FunctionsLibrary" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
