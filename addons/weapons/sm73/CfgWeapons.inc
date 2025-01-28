#define CLASSES_WEAPONS "SWS_Weapon_SM73"

class CfgWeapons {
  class OPTRE_M73;

  class SWS_Weapon_SM73 : OPTRE_M73 {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(SM73 LMG);
    baseWeapon = "SWS_Weapon_SM73";

    class XtdGearInfo {
      model = "SWS_Weapon_MachineGuns";
      variant = "SM73";
    };
  };
};
