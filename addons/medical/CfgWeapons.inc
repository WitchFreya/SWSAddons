#define CLASSES_WEAPONS \
  "SWS_Biofoam"
  , "SWS_Medigel"

class CfgWeapons {
  class OPTRE_Biofoam;
  class OPTRE_MedKit;

  class SWS_Biofoam : OPTRE_Biofoam {
    ITEM_META(2);
    displayName = QNAME(Biofoam-Sx);
    displayNameShort = "Biofoam-Sx";
    descriptionShort = "Self-sealing emergency coagulant and antimicrobial polymer.<br />This experimental version of biofoam is everything a bandage wishes it was.";
    ace_isMedicalItem = TRUE;

    class ItemInfo : ItemInfo {
      mass = 6;
    };
  };

  class SWS_Medigel : SWS_Biofoam {
    model = "\OPTRE_Weapons\items\Medigel.p3d";
    displayName = QNAME(Medigel-Sx);
    displayNameShort = "Medigel-Sx";
    descriptionShort = "Topical variant of biofoam in a lighter form factor.<br />An experimental variant of medigel useful for bruises and pain.";
    descriptionUse = "Applying medigel...";
    class ItemInfo : ItemInfo {
      mass = 1;
    };
  };
};
