#define CLASSES_WEAPONS "SWS_Weapon_SMA37K"

class CfgWeapons {
  class OPTRE_MA37K;

  class SWS_Weapon_SMA37K : OPTRE_MA37K {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(SMA37K);
    description = "SMA-37K Carbine";
    descriptionShort = "The SMA-37K, now optimized for advanced operations.";
    baseWeapon = "SWS_Weapon_SMA37K";

    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "None";
      body = "SMA37K";
      variant = "Standard";
    };
  };
};
