#define CLASSES_WEAPONS "SWS_AED"

class CfgWeapons {
  class ACE_ItemCore;

  class SWS_AED : ACE_ItemCore {
    ITEM_META(2);
    displayName = QNAME(Automated External Defibrillator);
    picture = QPATHTOF(data\defib.paa);
    model = "\a3\structures_f_epa\items\medical\defibrillator_f.p3d";
    description = "Use to halt abnormal heart rhythm during cardiac arrest.";
    descriptionShort = "Use to halt abnormal heart rhythm during cardiac arrest.";

    ace_isMedicalItem = TRUE;

    class ItemInfo : ItemInfo {
      mass = 30;
    };
  };
};
