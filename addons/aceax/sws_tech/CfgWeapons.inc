class CfgWeapons
{
    class OPTRE_NVG;
    class SWS_NVG_NeuralLace_Base : OPTRE_NVG
    {
        class XtdGearInfo
        {
            model = "SWS_NVG_NeuralLace";
            upArmor = "None";
            thermalMode = "Infrared";
        };
    };

    class SWS_NVG_NeuralLace_UAB_UL_CNM_Base : SWS_NVG_NeuralLace_Base
    {
        class XtdGearInfo : XtdGearInfo { upArmor = "UpArmor_UpLink_CNM"; };
    };

    class SWS_NVG_NeuralLace_IR : SWS_NVG_NeuralLace_Base
    {
        class XtdGearInfo : XtdGearInfo { };
    };

    class SWS_NVG_NeuralLace_WHOT : SWS_NVG_NeuralLace_Base
    {
        class XtdGearInfo : XtdGearInfo { thermalMode = "WhiteHot"; };
    };

    class SWS_NVG_NeuralLace_IR_UA : SWS_NVG_NeuralLace_UAB_UL_CNM_Base
    {
        class XtdGearInfo : XtdGearInfo { };
    };

    class SWS_NVG_NeuralLace_WHOT_UA : SWS_NVG_NeuralLace_UAB_UL_CNM_Base
    {
        class XtdGearInfo : XtdGearInfo { thermalMode = "WhiteHot"; };
    };
};
