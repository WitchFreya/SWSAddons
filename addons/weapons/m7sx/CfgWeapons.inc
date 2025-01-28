#define CLASSES_WEAPONS \
  "SWS_Weapon_M7Sx"

class CfgWeapons {
  class 19_UNSC_M7;

  class SWS_Weapon_M7Sx : 19_UNSC_M7 {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(M7-Sx SMG);
    baseWeapon = "SWS_Weapon_M7Sx";

    class XtdGearInfo {
      model = "SWS_Weapon_PDW";
      weapon = "M7Sx";
    };
  };
};
