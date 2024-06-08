#include "script_component.hpp"

#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "optre_vehicles_air"
      , "v_fz_air_vehicles"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
