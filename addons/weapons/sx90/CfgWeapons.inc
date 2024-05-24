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
      class MuzzleSlot : MuzzleSlot {
        compatibleItems[] = {
          "ACE_muzzle_mzls_H",
          "muzzle_snds_H",
          "muzzle_snds_65_TI_blk_F",
          "OPTRE_MA5Suppressor"
        };
      };
      class PointerSlot : PointerSlot {
        compatibleItems[] = {
          "acc_flashlight",
          ATT_POINTER_ACE,
          ATT_POINTER_OPTRE_RAIL_M12
        };
      };
    };
    class XtdGearInfo {
      model = "SWS_Weapon_PDW";
      underbarrel = "None";
      body = "Sx90";
      variant = "Standard";
    };
  };
};