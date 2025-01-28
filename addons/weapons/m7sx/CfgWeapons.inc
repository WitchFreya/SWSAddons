#define CLASSES_WEAPONS \
  "SWS_M7Sx"

// 19_UNSC_M7
class CfgWeapons {
  class 19_UNSC_M7;

  class SWS_M7Sx : 19_UNSC_M7 {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(M7-Sx SMG);
    baseWeapon = "SWS_M7Sx";
  };
};
