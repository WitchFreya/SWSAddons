class CfgWeapons
{
    class SWS_Weapon_NVG_NeuralLace : BaseGearModel
    {
        label = QNAME(NeuralLace Implant);
        options[] = {"Thermal"};
        class Thermal
        {
            values[] = {"IR","WHOT"};
            class IR { description = "Infrared"; };
            class WHOT { description = "White-Hot"; };
        };
    };
};
