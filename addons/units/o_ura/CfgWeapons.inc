#define CLASSES_WEAPONS \
  "SWS_HGun_Pistol_Heavy_01_F_Flashlight"

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
    scope = 1;
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

  class SWS_H_PASGT_basic_black_F : H_PASGT_basic_black_F
  {
    allowedfacewear[] =
    {
      "G_Balaclava_TI_G_blk_F", 1
    };
  };

  class SWS_AK_Rifle : arifle_AK12_F {
    scope = 1;
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

    class SWS_AK_Rifle_GL : arifle_AK12_GL_F {
    scope = 1;
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

  class SWS_MA37K_Rifle : OPTRE_MA37K {
    scope = 1;
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

  class SWS_MMG_02_black_F : MMG_02_black_F {
    scope = 1;
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_tws";
      };
    };
  };

    class SWS_srifle_DMR_02_F : srifle_DMR_02_F {
    scope = 1;
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_Nightstalker";
      };
    };
  };

   class SWS_srifle_GM6_ghex_F : srifle_GM6_ghex_F {
    scope = 1;
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_tws";
      };
    };
  };

  class SWS_19_UNSC_M7 : 19_UNSC_M7 {
    scope = 1;
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

   class SWS_srifle_EBR_F : srifle_EBR_F {
    scope = 1;
    class LinkedItems {

      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_Nightstalker";
      };
    };
  };

  class SWS_LMG_Mk200_black_F : LMG_Mk200_black_F {
    scope = 1;
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

  class SWS_Dmns_M33_T : Dmns_M33_T {
    scope = 1;
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


class SWS_SRifle_DMR_05_Tan_F : SRifle_DMR_05_Tan_F {
    scope = 1;
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


