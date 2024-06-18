#define CLASSES_WEAPONS \
  "SWS_Weapon_SXMR397"

class CfgWeapons
{
  class OPTRE_M393_DMR;
  class SWS_Weapon_SXMR397: OPTRE_M393_DMR
  {
    ITEM_META(2);
    displayName = QNAME(SxMR-397 Longshot);
    magazines[] = {"SWS_Magazine_15rnd_338_Abyssal"};
    magazineWell[] = { "XMR_Abyssal" };
    recoil = "recoil_dmr_02";
    recoilProne = "recoil_ebr";
    baseWeapon = "SWS_Weapon_SXMR397";
    class Single : Single {
      reloadTime = 0.2;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot
      {
        delete CompatibleItems;
        class CompatibleItems : SWS_Scopes_Marksman {};
      };
      class MuzzleSlot : MuzzleSlot {
        delete CompatibleItems;
        class CompatibleItems {
          OPTRE_MA5Suppressor = TRUE;
          muzzle_snds_B = TRUE;
          OPTRE_SRS99D_Suppressor = TRUE;
          OPTRE_M7_silencer = TRUE;
        };
      };
      class PointerSlot : PointerSlot {
        delete compatibleItems;
        class CompatibleItems : SWS_Pointers_Standard {
          ACE_SPIR = FALSE;
        };
      };
    };
    class XtdGearInfo {
      model = "SWS_Weapon_DMR";
      underbarrel = "None";
      body = "SxMR-397";
      variant = "Standard";
    };
  };
};