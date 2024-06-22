#define CLASSES_WEAPONS \
  "SWS_Weapon_SX90_Black" \
  , "SWS_Weapon_SXC90_Black"

class CfgWeapons {
  class SMG_03C_TR_Black;
  class SMG_03_TR_Black;

  class SWS_Weapon_Sx90_Black : SMG_03C_TR_Black {
    ITEM_META(2);
    displayName = QNAME(Sx-90);
    magazines[] = {"SWS_Magazine_50rnd_SX90"};
    magazineWell[] = { "Sx90_Caseless_Magwell" };
    modes[] = {"FullAuto","Single"};

    class FullAuto : FullAuto {
      dispersion = 0.0014;
    };

    class Single : Single {
      dispersion = 0.0007;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        class CompatibleItems : SWS_Scopes_PDW {};
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
      underbarrel = "None";
      body = "Sx-90";
      variant = "Standard";
    };
  };

  class SWS_Weapon_SXC90_Black : SMG_03_TR_Black {
    ITEM_META(2);
    displayName = QNAME(SxC-90);
    magazines[] = {"SWS_Magazine_50rnd_SX90"};
    magazineWell[] = { "SX90_Caseless_Magwell" };
    modes[] = {"FullAuto","Single"};


    class FullAuto : FullAuto {
      dispersion = 0.0012;
    };

    class Single : Single {
      dispersion = 0.00065;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        class CompatibleItems : SWS_Scopes_PDW {};
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
      underbarrel = "None";
      body = "SxC-90";
      variant = "Standard";
    };
  };
};
