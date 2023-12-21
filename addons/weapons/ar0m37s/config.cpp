#include "script_component.hpp"

class Single;
class FullAuto;
class Mode_SemiAuto;
class Mode_FullAuto;
class WeaponSlotsInfo;
class PointerSlot;

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
      "A3_Weapons_F_Enoch_Rifles_MSBS"
      , "LM_OPCAN_WEP_RES"
    };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
