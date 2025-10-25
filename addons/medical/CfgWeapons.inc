#define CLASSES_WEAPONS \
  "SWS_Biofoam"         \
  , "SWS_Medigel"

class CfgWeapons {
  class OPTRE_Biofoam;
  class ACE_Morphine;
  class ACE_ItemCore;

  class SWS_Biofoam : OPTRE_Biofoam {
    ITEM_META(2);
    displayName = QNAME(Biofoam-Sx);
    displayNameShort = "Biofoam-Sx";
    picture = "\Foundries\Weapons\Items\icons\biofoam.paa";
    model = "\Foundries\Weapons\Items\Biofoam.p3d";
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
    // TODO: Image for medigel
    picture = "\OPTRE_weapons\items\icons\biofoam.paa";
    descriptionShort = "Topical variant of biofoam in a lighter form factor.<br />An experimental variant of medigel useful for bruises and pain.";
    descriptionUse = "Applying medigel...";
    class ItemInfo : ItemInfo {
      mass = 1;
    };
  };

  class SWS_NeuroStim : ACE_Morphine {
    ITEM_META(2);
    displayName = QNAME(NeuroStim);
    displayNameShort = "NeuroStim";
    descriptionShort = "In pain? Deal with it, fast, with no side effects!*<br />*Project: SCARLET experimental medication is not subject to UNSC FDA approval.";
    descriptionUse = "Applying NeuroStim...";
    // TODO: Different model.
    model = "\z\ace\addons\medical_treatment\data\morphine.p3d";
    // TODO: Different picture
    picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
  };

  class OPTRE_MedKit : ACE_ItemCore {
    class ItemInfo : CBA_MiscItem_ItemInfo {
      mass = 10;
    };
  };
};
