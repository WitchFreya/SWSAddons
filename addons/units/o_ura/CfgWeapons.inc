#define CLASSES_WEAPONS \
  "SWS_HGun_Pistol_Heavy_01_F_Flashlight"

class CfgWeapons {
  class HGun_Pistol_Heavy_01_F;
  class SWS_HGun_Pistol_Heavy_01_F_Flashlight : HGun_Pistol_Heavy_01_F {
    ITEM_META(1);
    COMMENT("Provides a flashlight to the .45 for use with the URA.");
    displayName = "4-five .45 ACP";
    class LinkedItems {
      class LinkedItemsAcc {
        slot = "PointerSlot";
        item = "acc_flashlight_pistol";
      };
    };
  };

  class SWS_HGun_Pistol_Heavy_01_F_Full : SWS_HGun_Pistol_Heavy_01_F_Flashlight {
    COMMENT("Provides a flashlight, muzzle, and optic to the .45 for use with the URA.");
    class LinkedItems {
      class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "muzzle_snds_acp";
      };

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_MRD_black";
      };
    };
  };
};
