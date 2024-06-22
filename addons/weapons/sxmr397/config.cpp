#include "script_component.hpp"

class Single;
class WeaponSlotsInfo;
class MuzzleSlot;
class PointerSlot;
class CowsSlot;
class SWS_Scopes_65mm;
#include "CfgWeapons.inc"

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons_DMR"
      , "ace_ballistics"
    };
    VERSION_CONFIG;
  };
};
