#define CLASSES_WEAPON \
    "SWS_Weapon_MA5BSx" \
    , "SWS_Weapon_MA5BSx_GL" \
    , "SWS_Optic_SmartLink" \
    , "SWS_Weapon_SBR55" \
    , "SWS_Weapon_ARMXS" \
    , "SWS_Weapon_ARMXS_GL"

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
  class LM_OPCAN_ARMX;
  class LM_OPCAN_ARMX_GL;

  #include "CfgWeapons\Guns\MA5BSx.inc"
  #include "CfgWeapons\Guns\SBR55.inc"
  #include "CfgWeapons\Guns\ARMXS.inc"

  //== Optics
  class OPTRE_MA5_SmartLink;

  #include "CfgWeapons\Optics\SmartLink.inc"
};
