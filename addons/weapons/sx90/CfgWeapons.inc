#define CLASSES_WEAPONS \
  "SWS_Weapon_SX90_black" \
  , "SWS_Weapon_SXC90_black"

class CfgWeapons
{
  class SMG_03C_TR_black;
  class SWS_Weapon_SX90_black : SMG_03C_TR_black {
    ITEM_META(2);
    displayName = QNAME(Sx-90);
    magazines[] = {"SWS_Magazine_50rnd_SX90"};
    magazineWell[] = { "SX90_Caseless_Magwell" };
    modes[] = {"FullAuto","Single"};
    class FullAuto : FullAuto {
      dispersion = 0.0014;
    };
    class Single : Single {
      dispersion = 0.0007;
    };


    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_PDW {};
      };
      class MuzzleSlot : MuzzleSlot {
        delete compatibleItems;
        class compatibleItems {
          ACE_muzzle_mzls_H = TRUE;
          muzzle_snds_H = TRUE;
          muzzle_snds_65_TI_blk_F = TRUE;
          OPTRE_MA5Suppressor = TRUE;
        };
      };
      class PointerSlot : PointerSlot {
        delete compatibleItems;
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
  class SMG_03_TR_black;
  class SWS_Weapon_SXC90_black : SMG_03_TR_black {
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
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_PDW {};
      };
      class MuzzleSlot : MuzzleSlot {
        delete compatibleItems;
        class compatibleItems {
          ACE_muzzle_mzls_H = TRUE;
          muzzle_snds_H = TRUE;
          muzzle_snds_65_TI_blk_F = TRUE;
          OPTRE_MA5Suppressor = TRUE;
        };
      };
      class PointerSlot : PointerSlot {
        delete compatibleItems;
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