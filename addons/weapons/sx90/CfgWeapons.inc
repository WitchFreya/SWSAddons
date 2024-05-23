#define CLASSES_WEAPONS \
  "SWS_Weapon_SX90_black"

class CfgWeapons
{
  class SMG_03C_TR_black;
  class SWS_Weapon_SX90_black : SMG_03C_TR_black {
    ITEM_META(2);
    displayName = QNAME(Sx-90);
    magazines[] = {"SWS_Magazine_50rnd_SX90"};
    magazineWell[] = { "SX90_Caseless_Magwell" };
    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_PDW {};
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