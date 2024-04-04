#define CLASSES_WEAPONS "SWS_Weapon_XMA37K"

class CfgWeapons
{
  class OPTRE_MA37K;
  class SWS_Weapon_XMA37K : OPTRE_MA37K {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(xMA37K);
    descriptionShort = "The xMA-37K, now optimized for advanced operations.";
    baseWeapon = "SWS_Weapon_XMA37K";
    class FlashLight{};
  };
};
