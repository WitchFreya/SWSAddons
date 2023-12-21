#include "script_component.hpp"

class Single;
class FullAuto;
class WeaponSlotsInfo;
class PointerSlot;

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgWeapons.inc"

class CfgPatches
{
  class SUBADDON
  {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { CLASSES_AMMO };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons_Ammo"
      , "Dmns_Weapons_F_MachineGuns"
    };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
