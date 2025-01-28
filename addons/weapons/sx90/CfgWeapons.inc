#define CLASSES_WEAPONS \
  "SWS_Weapon_Sx90_Black" \
  , "SWS_Weapon_SxC90_Black"

class CfgWeapons {
  class SMG_03C_TR_Black;
  class SMG_03_TR_Black;

  class SWS_Weapon_Sx90_Black : SMG_03C_TR_Black {
    ITEM_META(2);
    displayName = QNAME(Sx-90);
    magazines[] = {CLASSES_MAGAZINES};
    magazineWell[] = {};
    modes[] = {"FullAuto","Single"};

    class FullAuto : FullAuto {
      dispersion = 0.0014;
    };

    class Single : Single {
      dispersion = 0.0007;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        class CompatibleItems {
          optic_aco = TRUE;
          optic_aco_grn = TRUE;
          optic_aco_smg = TRUE;
          optic_aco_grn_smg = TRUE;

          optic_holosight = TRUE;
          optic_holosight_blk_f = TRUE;
          optic_holosight_khk_f = TRUE;

          optic_holosight_smg = TRUE;
          optic_holosight_smg_blk_f = TRUE;
          optic_holosight_smg_khk_f = TRUE;

          optic_mrco = TRUE;

          optre_recon_sight = TRUE;
          optre_recon_sight_desert = TRUE;
          optre_recon_sight_green = TRUE;
          optre_recon_sight_red = TRUE;
          optre_recon_sight_snow = TRUE;
          optre_recon_sight_unsc = TRUE;
        };
      };

      class MuzzleSlot : MuzzleSlot {
        class CompatibleItems {
          ace_muzzle_mzls_H = TRUE;
          muzzle_snds_H = TRUE;
          muzzle_snds_65_TI_blk_F = TRUE;
          OPTRE_MA5Suppressor = TRUE;
        };
      };

      class PointerSlot : PointerSlot {
        class CompatibleItems : SWS_Pointers_NoBMR {};
      };
    };

    class XtdGearInfo {
      model = "SWS_Weapon_PDW";
      weapon = "Sx90";
    };
  };

  class SWS_Weapon_SxC90_Black : SMG_03_TR_Black {
    ITEM_META(2);
    displayName = QNAME(SxC-90);
    magazines[] = {CLASSES_MAGAZINES};
    magazineWell[] = {};
    modes[] = {"FullAuto","Single"};


    class FullAuto : FullAuto {
      dispersion = 0.0012;
    };

    class Single : Single {
      dispersion = 0.00065;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        class CompatibleItems {
          optic_aco = TRUE;
          optic_aco_grn = TRUE;
          optic_aco_smg = TRUE;
          optic_aco_grn_smg = TRUE;

          optic_holosight = TRUE;
          optic_holosight_blk_f = TRUE;
          optic_holosight_khk_f = TRUE;

          optic_holosight_smg = TRUE;
          optic_holosight_smg_blk_f = TRUE;
          optic_holosight_smg_khk_f = TRUE;

          optic_mrco = TRUE;

          optre_recon_sight = TRUE;
          optre_recon_sight_desert = TRUE;
          optre_recon_sight_green = TRUE;
          optre_recon_sight_red = TRUE;
          optre_recon_sight_snow = TRUE;
          optre_recon_sight_unsc = TRUE;
        };
      };

      class MuzzleSlot : MuzzleSlot {
        class CompatibleItems {
          ace_muzzle_mzls_H = TRUE;
          muzzle_snds_H = TRUE;
          muzzle_snds_65_TI_blk_F = TRUE;
          optre_MA5Suppressor = TRUE;
        };
      };

      class PointerSlot : PointerSlot {
        class CompatibleItems : SWS_Pointers_NoBMR {};
      };
    };

    class XtdGearInfo {
      model = "SWS_Weapon_PDW";
      weapon = "SxC90";
    };
  };
};
