#define CLASSES_WEAPONS         \
  "SWS_NVG_NeuralLace_IR"       \
  , "SWS_NVG_NeuralLace_WHOT"   \
  , "SWS_NVG_NeuralLace_IR_UA"  \
  , "SWS_NVG_NeuralLace_WHOT_UA"

#define DESC_BASE Neural implant capable of night vision and the following thermal modes:

class CfgWeapons {
  class OPTRE_NVG;

  class SWS_NVG_NeuralLace_Base : OPTRE_NVG {
    ITEM_META(0);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(Neural Lace);
    descriptionShort = QUOTE(DESC_BASE None);
    modelOptics = "";
    model = "";
    visionMode[] = {"Normal","NVG","TI"};
    thermalMode[] = {};
    class ItemInfo {
      type = 616;
      uniformModel = "";
      modelOff = "";
      mass = 0;
    };

    class XtdGearInfo {
      model = "SWS_NVG_NeuralLace";
      upArmor = "None";
      thermalMode = "Infrared";
    };
  };

  class SWS_NVG_NeuralLace_UAB_UL_CNM_Base : SWS_NVG_NeuralLace_Base {
    picture = "\OPTRE_UNSC_Units\Army\NVGs\Mixed\V_UAB_UL_CNM.paa";
    model = "\OPTRE_UNSC_Units\Army\NVGs\Mixed\V_UAB_UL_CNM.p3d";

    class ItemInfo : ItemInfo {
      mass = 2;
      modelOff = "\OPTRE_UNSC_Units\Army\NVGs\Mixed\V_UAB_UL_CNM.paa";
      uniformModel = "\OPTRE_UNSC_Units\Army\NVGs\Mixed\V_UAB_UL_CNM.p3d";
    };

    class XtdGearInfo : XtdGearInfo { upArmor = "UpArmor_UpLink_CNM"; };
  };

  class SWS_NVG_NeuralLace_IR : SWS_NVG_NeuralLace_Base {
    SCOPE(2);
    displayName = QNAME(Neural Lace (IR));
    descriptionShort = QUOTE(DESC_BASE Infrared);
    thermalMode[] = {THERMAL_MODE_IR};
  };

  class SWS_NVG_NeuralLace_WHOT : SWS_NVG_NeuralLace_Base {
    SCOPE(2);
    displayName = QNAME(Neural Lace (WHOT));
    descriptionShort = QUOTE(DESC_BASE White-Hot);
    thermalMode[] = {THERMAL_MODE_WHITE_HOT};
    class XtdGearInfo : XtdGearInfo { thermalMode = "WhiteHot"; };
  };

  class SWS_NVG_NeuralLace_IR_UA : SWS_NVG_NeuralLace_UAB_UL_CNM_Base {
    SCOPE(2);
    displayName = QNAME(Neural Lace (IR/UA Helmet));
    descriptionShort = QUOTE(DESC_BASE Infrared);
    thermalMode[] = {THERMAL_MODE_IR};
  };

  class SWS_NVG_NeuralLace_WHOT_UA : SWS_NVG_NeuralLace_UAB_UL_CNM_Base {
    SCOPE(2);
    displayName = QNAME(Neural Lace (WHOT/UA Helmet));
    descriptionShort = QUOTE(DESC_BASE White-Hot);
    thermalMode[] = {THERMAL_MODE_WHITE_HOT};
    class XtdGearInfo : XtdGearInfo { thermalMode = "WhiteHot"; };
  };
};
#undef DESC_BASE
