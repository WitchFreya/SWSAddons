#include "script_component.hpp"

class InventoryOpticsItem_Base_F;

#include "CfgWeaponCursors.inc"
#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "optre_weapons"
      , "sws_main"
      , "sws_common"
    };
    VERSION_CONFIG;
  };
};
