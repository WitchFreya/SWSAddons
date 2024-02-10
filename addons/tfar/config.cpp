#include "script_component.hpp"

#include "CfgEventHandlers.hpp"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "tfar_core", "ace_arsenal" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
