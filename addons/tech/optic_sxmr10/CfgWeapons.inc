#define CLASSES_WEAPONS \
  "SWS_Optic_SxMR10"


class CfgWeapons {
  class Optic_AMS;
  class SWS_Optic_SxMR10: Optic_AMS {
    ITEM_META(2);
    displayName = QNAME(SxMR-10);
		picture = QPATHTOF(data\optic_sxmr10\icon_ca.paa);
    descriptionShort = QUOTE(Experimental optic based on the US Optics MR-10.<br/> A night vision mode has been added.);

    class ItemInfo : ItemInfo {
			class OpticsModes : OpticsModes {
				class AMS : AMS {
					visionMode[] = {
						"Normal"
            , "NVG"
					};
				};
      };
    };
  };
};
