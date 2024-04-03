#define CLASSES_WEAPONS \
  "SWS_S379_DMR"

class CfgWeapons
{
  class OPTRE_M393_DMR;
  class SWS_Weapon_XMR397: OPTRE_M393_DMR
  {
    WEAPON_META(XMR397,2);
    displayName = QUOTE(sXMR-397 Equalizer);
    magazines[] = {"SWS_Magazine_15rnd_338_Abyssal"};
    magazineWell[] = { "XMR_Abyssal" };
    recoil = "recoil_dmr_02";
    recoilProne = "recoil_ebr";

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot
      {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_Marksman {};
      };
      class PointerSlot : PointerSlot {
        compatibleItems[] = {
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