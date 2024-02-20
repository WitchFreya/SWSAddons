#define CLASSES_WEAPONS \
  "SWS_Biofoam"

class CfgWeapons {
  class OPTRE_Biofoam;
  class OPTRE_Medigel;
  class OPTRE_MedKit;

  class SWS_Biofoam : OPTRE_Biofoam {
    ITEM_META(2);
    displayName = QNAME(Biofoam-Sx);
    descriptionShort = "Self-sealing emergency coagulant and antimicrobial polymer.<br\>This experimental version of biofoam is everything a bandage wishes it was.";
    ace_isMedicalItem = TRUE;

    class ItemInfo : ItemInfo {
      mass = 6;
    };
  };
};
