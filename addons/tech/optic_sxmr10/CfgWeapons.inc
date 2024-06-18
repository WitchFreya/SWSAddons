#define CLASSES_WEAPONS \
  "SWS_Optic_SxMR10"


class CfgWeapons {
  class optic_AMS;
  class SWS_Optic_SxMR10: optic_AMS {
    ITEM_META(2);
    displayName = QNAME(SxMR-10);
		picture = "\x\sws\addons\tech\optic_sxmr10\data\icon_ca.paa";
    descriptionShort = QUOTE(Experimental optic based on the US Optics MR-10.<br/> A night vision mode has been added.);

    class ItemInfo : ItemInfo {
			class OpticsModes : OpticsModes {
				class AMS : AMS {
					visionMode[]= {
						"Normal", "NVG"
					};
				};
				class Iron : Iron {};
      };
    };
  };
};
