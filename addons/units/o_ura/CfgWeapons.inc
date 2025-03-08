#define CLASSES_WEAPONS                             \
  "SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"  \
  , "SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full"      \
  , "SWS_O_URArmy_H_PASGT_basic_black_F"            \
  , "SWS_O_URArmy_AK_Rifle"                         \
  , "SWS_O_URArmy_AK_Rifle_GL"                      \
  , "SWS_O_URArmy_MA37K_Rifle"                      \
  , "SWS_O_URArmy_MMG_02_black_F"                   \
  , "SWS_O_URArmy_srifle_DMR_02_F"                  \
  , "SWS_O_URArmy_srifle_GM6_ghex_F"                \
  , "SWS_O_URArmy_19_UNSC_M7"                       \
  , "SWS_O_URArmy_srifle_EBR_F"                     \
  , "SWS_O_URArmy_LMG_Mk200_black_F"                \
  , "SWS_O_URArmy_Dmns_M33_T"                       \
  , "SWS_O_URArmy_SRifle_DMR_05_Tan_F"

class CfgWeapons {
  class H_PASGT_basic_black_F;
  class arifle_AK12_F;
  class arifle_AK12_GL_F;
  class OPTRE_MA37K;
  class MMG_02_black_F;
  class srifle_DMR_02_F;
  class srifle_GM6_ghex_F;
  class 19_UNSC_M7;
  class srifle_EBR_F;
  class LMG_Mk200_black_F;
  class Dmns_M33_T;
  class HGun_Pistol_Heavy_01_F;
  class SRifle_DMR_05_Tan_F;

  class SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight : HGun_Pistol_Heavy_01_F {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsAcc {
        slot = "PointerSlot";
        item = "acc_flashlight_pistol";
      };
    };
  };

  class SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full : SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight {
    ITEM_META(1);
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

  class SWS_O_URArmy_H_PASGT_basic_black_F : H_PASGT_basic_black_F {
    allowedfacewear[] = { "G_Balaclava_TI_G_blk_F", 1 };
  };

  class SWS_O_URArmy_AK_Rifle : arifle_AK12_F {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "OPTRE_M12_Laser";
      };

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
    };
  };

    class SWS_O_URArmy_AK_Rifle_GL : arifle_AK12_GL_F {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "OPTRE_M12_Laser";
      };

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_Hamr";
      };
    };
  };

  class SWS_O_URArmy_MA37K_Rifle : OPTRE_MA37K {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "OPTRE_M12_Laser";
      };

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_Holosight_smg_blk_F";
      };
    };
  };

  class SWS_O_URArmy_MMG_02_black_F : MMG_02_black_F {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_tws";
      };
    };
  };

    class SWS_O_URArmy_srifle_DMR_02_F : srifle_DMR_02_F {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_Nightstalker";
      };
    };
  };

   class SWS_O_URArmy_srifle_GM6_ghex_F : srifle_GM6_ghex_F {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_tws";
      };
    };
  };

  class SWS_O_URArmy_19_UNSC_M7 : 19_UNSC_M7 {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "19_UNSC_M7_LAM";
      };

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "19_UNSC_M7_optic";
      };
    };
  };

   class SWS_O_URArmy_srifle_EBR_F : srifle_EBR_F {
    ITEM_META(1);
    class LinkedItems {

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_Nightstalker";
      };
    };
  };

  class SWS_O_URArmy_LMG_Mk200_black_F : LMG_Mk200_black_F {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "OPTRE_M12_Laser";
      };

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_Yorris";
      };
    };
  };

  class SWS_O_URArmy_Dmns_M33_T : Dmns_M33_T {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "acc_pointer_IR";
      };

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "OPTRE_BR55HB_Scope";
      };
    };
  };


class SWS_O_URArmy_SRifle_DMR_05_Tan_F : SRifle_DMR_05_Tan_F {
    ITEM_META(1);
    class LinkedItems {
      class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "OPTRE_M12_Laser";
      };

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "OPTRE_SRS99_Scope";
      };
    };
  };
};


