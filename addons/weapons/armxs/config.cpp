#include "script_component.hpp"

class Single;
class FullAuto;
class WeaponSlotsInfo;
class PointerSlot;
class CowsSlot;
class SWS_Scopes_65mm;
class SWS_Pointers_NoBMR;

#include "CfgWeapons.inc"
#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"

class CfgPatches {
  class SUBADDON {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "A3_Weapons_F_Rifles_MX_Black"
      , "LM_OPCAN_WEP_RES"
    };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
