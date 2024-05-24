#define CLASSES_WEAPONS \
  "SWS_Weapon_SXMR397"

class CfgWeapons
{
  class OPTRE_M393_DMR;
  class SWS_Weapon_SXMR397: OPTRE_M393_DMR
  {
    ITEM_META(2);
    displayName = QNAME(SxMR-397);
    magazines[] = {"SWS_Magazine_15rnd_338_Abyssal"};
    magazineWell[] = { "XMR_Abyssal" };
    recoil = "recoil_dmr_02";
    recoilProne = "recoil_ebr";
    baseWeapon = "SWS_Weapon_SXMR397";
    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot
      {
        delete CompatibleItems;
        class CompatibleItems : SWS_Scopes_Marksman {};
      };
      class MuzzleSlot : MuzzleSlot {
        delete CompatibleItems;
        CompatibleItems[] = {
          "OPTRE_MA5Suppressor",
          "muzzle_snds_B",
          "OPTRE_SRS99D_Suppressor",
          "OPTRE_M7_silencer"
        };
      };
      class PointerSlot : PointerSlot {
        CompatibleItems[] = {
          "acc_flashlight",
          ATT_POINTER_ACE,
          ATT_POINTER_OPTRE_RAIL_M12
        };
      };
    };
  };
};