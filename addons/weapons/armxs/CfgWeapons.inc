#define CLASSES_WEAPONS \
  "SWS_Weapon_ARMXS"    \
  , "SWS_Weapon_ARMXS_GL"

#define HUD_SETUP                         \
  ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR"; \
  HUD_BulletInARows = 2;                  \
  HUD_TotalPosibleBullet = 60;            \
  pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_IRON.paa"

class CfgWeapons {
  class LM_OPCAN_ARMX;
  class LM_OPCAN_ARMX_GL;

  class SWS_Weapon_ARMXS: LM_OPCAN_ARMX {
    ITEM_META(2);
    baseWeapon = "SWS_Weapon_ARMXS";
    displayName = QNAME(ARMXS 6.5mm);
    HUD_SETUP;

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_65mm {};
      };

      class PointerSlot : PointerSlot {
        compatibleItems[] = {
          "acc_flashlight"
          , "acc_pointer_IR"
          , "ACE_acc_pointer_red"
          , "ACE_acc_pointer_green_IR"
          , "ACE_acc_pointer_green"
          , ATT_POINTER_OPTRE_RAIL_M12
        };
      };
    };

    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "None";
      body = "MXS";
      variant = "Standard";
    };
  };

  class SWS_Weapon_ARMXS_GL : LM_OPCAN_ARMX_GL {
    ITEM_META(2);
    baseWeapon = "SWS_Weapon_ARMXS_GL";
    displayName = QNAME(ARMXS UGL 6.5mm);
    HUD_SETUP;

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_65mm {};
      };

      class PointerSlot : PointerSlot {
        delete compatibleItems;
        class CompatibleItems : SWS_Pointers_NoBMR {};
      };
    };

    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "GL";
      body = "MXS";
      variant = "Standard";
    };
  };
};

#undef HUD_SETUP
