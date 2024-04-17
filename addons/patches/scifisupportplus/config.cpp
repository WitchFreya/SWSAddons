#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgAmmo.inc"
#include "CfgMagazines.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { CLASSES_AMMO };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "PHAN_OPAEX"
      , "phan_scifisupportplus"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };

  // loads some missing things if PHAN is installed.
  class GVAR(OPAEX) : SUBADDON {
    requiredAddons[] = {
      "OPAEX_AirCore"
      , "OPAEX_Glassing"
      , "PHAN_OPAEX"
      , "phan_scifisupportplus"
    };
  };
};
