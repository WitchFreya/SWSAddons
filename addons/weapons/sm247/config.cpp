#include "script_component.hpp"

class Single;
class FullAuto;
class WeaponSlotsInfo;
class PointerSlot;

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgWeapons.inc"
#include "CfgMagazineWells.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { CLASSES_AMMO };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons"
      , "Dmns_Weapons_F_MachineGuns"
    };
    VERSION_CONFIG;
  };
};
