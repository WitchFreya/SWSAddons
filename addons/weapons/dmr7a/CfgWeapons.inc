#define CLASSES_WEAPONS \
  "SWS_Weapon_SXMR397"

class CfgWeapons
{
  class OPTRE_M393_DMR;
  class SWS_Weapon_SXMR397: OPTRE_M393_DMR
  {
    ITEM_META(2);
    displayName = QUOTE(SxMR-397 Equalizer);
    magazines[] = {"SWS_Magazine_15rnd_338_Abyssal"};
    magazineWell[] = { "XMR_Abyssal" };
    recoil = "recoil_dmr_02";
    recoilProne = "recoil_ebr";

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot
      {
        delete CompatibleItems;
        class CompatibleItems : SWS_Scopes_Marksman {};
      };
      class PointerSlot : PointerSlot {
        CompatibleItems[] = {
          "acc_flashlight",
          "acc_pointer_IR",
          "ACE_acc_pointer_red",
          "ACE_acc_pointer_green_IR",
          "ACE_acc_pointer_green",
          ATT_POINTER_OPTRE_RAIL_M12
        };
      };
    };
  };
};