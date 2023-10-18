class CfgWeapons
{
    class SWS_Weapon_NVG_NeuralLace : BaseGearModel
    {
        label = QNAME(NeuralLace Implant);
        options[] = {"Thermal"};
        class Thermal {
            values[] = {"IR","WHOT"};
            class IR { description = "Infrared"; };
            class WHOT { description = "White-Hot"; };
        };
    };

    class SWS_Weapon_Autorifles : BaseGearModel
    {
        label = QNAME(AR);
        options[] = {"Body","Underbarrel"};
        class Body
        {
            label = "Body Configuration";
            values[] = {"0M37S", "MXS","MA5BSx"};

            class 0M37S { description = "AR-0M37S"; };
            class MXS { description = "ARMXS"; };
            class MA5BSx {};
        };

        class Underbarrel
        {
            label = "Underbarrel Attachment";
            values[] = {"None", "GL","SHT"};
            class None {};
            class GL { description = "Underbarrel grenade launcher."; };
            class SHT { description = "Underbarrel shotgun."; };
        };
    };
};
