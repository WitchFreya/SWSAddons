#include "script_component.hpp"

class Single;
class WeaponSlotsInfo;
class MuzzleSlot;
class PointerSlot;
class CowsSlot;
class ItemInfo;
class SWS_Scopes_Marksman;
class SWS_Pointers_Standard;
#include "CfgAmmo.inc"
#include "CfgWeapons.inc"
#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"

class CfgPatches
{
  class SUBADDON
  {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons_DMR",
      "ace_ballistics"
    };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
