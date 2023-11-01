class CfgWeapons
{
    class SWS_NVG_NeuralLace : SWS_BaseGearModel
    {
        label = QNAME(NeuralLace Implant);
        options[] = {"ThermalMode", "UpArmor"};
        class ThermalMode
        {
            label = "Thermal Mode";
            values[] = {"Infrared", "WhiteHot"};
            class Infrared
            {
                label = "IR";
                description = "Infrared";
            };
            class WhiteHot
            {
                label = "WHOT";
                description = "White-Hot";
            };
        };

        class UpArmor
        {
            label = "Up-Armor";
            values[] = {"None", "UpArmor_UpLink_CNM"};
            class None {};
            class UpArmor_UpLink_CNM
            {
                label = "UAB/UL/CNM";
                description = "Aesthetic additions to the helmet.";
            };
        };
    };
};
