#define THERMAL_MODE_WHITE_HOT 0
#define THERMAL_MODE_BLACK_HOT 1
#define THERMAL_MODE_GREEN_HOT 2
#define THERMAL_MODE_GREEN_BLACK_HOT 3
#define THERMAL_MODE_RED_HOT 4
#define THERMAL_MODE_IR 6
#define THERMAL_MODE_RGB 7  // Don't use this. 'tis a silly mode.
#define THERMAL_MODE_WHITE_HOT_2 8 // Same as 0 from what I can tell.

#define DESCRIPTION Neural implant capable of night vision and the following thermal modes:

class SWS_NVG_NeuralLace_Base : OPTRE_NVG
{
    ITEM_META(0);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(Neural Lace);
    descriptionShort = QUOTE(DESCRIPTION None);
    modelOptics = "";
    model = "";
    visionMode[] = {"Normal","NVG","TI"};
    thermalMode[] = {};
    class ItemInfo
    {
        type = 616;
        uniformModel = "";
        modelOff = "";
        mass = 0;
    };
};

class SWS_NVG_NeuralLace_UAB_UL_CNM_Base : SWS_NVG_NeuralLace_Base
{
    picture = "\OPTRE_UNSC_Units\Army\NVGs\Mixed\V_UAB_UL_CNM";
    model = "\OPTRE_UNSC_Units\Army\NVGs\Mixed\V_UAB_UL_CNM";

    class ItemInfo : ItemInfo
    {
        mass = 2;
        modelOff = "\OPTRE_UNSC_Units\Army\NVGs\Mixed\V_UAB_UL_CNM";
        uniformModel = "\OPTRE_UNSC_Units\Army\NVGs\Mixed\V_UAB_UL_CNM";
    };
};

class SWS_NVG_NeuralLace_IR : SWS_NVG_NeuralLace_Base
{
    SCOPE(2);
    displayName = QNAME(Neural Lace (IR));
    descriptionShort = QUOTE(DESCRIPTION Infrared);
    thermalMode[] = {THERMAL_MODE_IR};
};

class SWS_NVG_NeuralLace_WHOT : SWS_NVG_NeuralLace_Base
{
    SCOPE(2);
    displayName = QNAME(Neural Lace (WHOT));
    descriptionShort = QUOTE(DESCRIPTION White-Hot);
    thermalMode[] = {THERMAL_MODE_WHITE_HOT};
};

class SWS_NVG_NeuralLace_IR_UA : SWS_NVG_NeuralLace_UAB_UL_CNM_Base
{
    SCOPE(2);
    displayName = QNAME(Neural Lace (IR/UA Helmet));
    descriptionShort = QUOTE(DESCRIPTION Infrared);
    thermalMode[] = {THERMAL_MODE_IR};
};

class SWS_NVG_NeuralLace_WHOT_UA : SWS_NVG_NeuralLace_UAB_UL_CNM_Base
{
    SCOPE(2);
    displayName = QNAME(Neural Lace (WHOT/UA Helmet));
    descriptionShort = QUOTE(DESCRIPTION White-Hot);
    thermalMode[] = {THERMAL_MODE_WHITE_HOT};
};

#undef THERMAL_MODE_WHITE_HOT
#undef THERMAL_MODE_BLACK_HOT
#undef THERMAL_MODE_GREEN_HOT
#undef THERMAL_MODE_GREEN_BLACK_HOT
#undef THERMAL_MODE_RED_HOT
#undef THERMAL_MODE_IR
#undef THERMAL_MODE_RGB
#undef DESCRIPTION
