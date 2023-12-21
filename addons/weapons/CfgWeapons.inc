#define CLASSES_WEAPON \
    "SWS_Weapon_MA5BSx" \
    , "SWS_Weapon_MA5BSx_GL" \
    , "SWS_Optic_SmartLink" \
    , "SWS_Weapon_SBR55"

class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class Single;
class Burst;
class FullAuto;

class CfgWeapons {
  //== Rifles
  class OPTRE_MA5B;
  class OPTRE_MA5BGL;
  class InventoryOpticsItem_Base_F;
  class PointerSlot;
  class OPTRE_BR55;

  #include "CfgWeapons\Guns\MA5BSx.inc"
  #include "CfgWeapons\Guns\SBR55.inc"

  //== Optics
  class OPTRE_MA5_SmartLink;

  #include "CfgWeapons\Optics\SmartLink.inc"
};
