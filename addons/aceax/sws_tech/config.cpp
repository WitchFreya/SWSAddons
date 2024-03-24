#include "script_component.hpp"

/** This was merged into the CfgWeapons\neural_lace subcomponent. */
class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { QUOTE(SUBCOMPONENT) };
    VERSION_CONFIG;
  };
};
