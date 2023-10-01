class CfgWeapons
{
    class SWS_Operative_Helmet : BaseGearModel
    {
        label = QNAME(Operative Helmets);
        options[] = {"Operative","Collar","Ghillie"};
        class Operative : OperativeOption { };
        class Collar : YesNoOption { label = "Vacuum Collar"; };
        class Ghillie : YesNoOption
        {
            class Yes { description = "Ghillie me."; };
            class No { description = "Ghillie is lame."; };
        };
    };

    class SWS_Color_Helmet : SWS_Operative_Helmet
    {
        label = QNAME(Generic Helmets);
        options[] = {"Color","Collar","Ghillie"};
        delete Operative;
        class Color : ColorOption {};
    };

    class SWS_Operative_Armor : BaseGearModel
    {
        label = QNAME(Operative Armor);
        options[] = {"Operative", "Variant", "Ghillie"};
        class Operative : OperativeOption {};
        class Variant
        {
            values[] = {
                "Standard",
                "Demolitions",
                "Sniper",
                "Copilot",
                "Light",
                "Scout",
                "Rifleman",
                "Marksman",
                "Lead"
            };

            class Standard {};
            class Demolitions {};
            class Sniper {};
            class Copilot {};
            class Light {};
            class Scout {};
            class Rifleman {};
            class Marksman {};
            class Lead {};
        };
        class Ghillie : YesNoOption
        {
            class Yes { description = "Ghillie me."; };
            class No { description = "Ghillie is lame."; };
        };
    };

    class SWS_Color_Armor : SWS_Operative_Armor
    {
        label = QNAME(Generic Armor);
        options[] = {"Color","Variant","Ghillie"};
        delete Operative;
        class Color : ColorOption {};
    };

    class SWS_Weapon_NVG_NeuralLace : BaseGearModel
    {
        label = QNAME(NeuralLace Implant);
        options[] = {"Division"};
        class Division {
            values[] = {"ODST","ONI"};
            class ODST { description = "Standard SWS NeuralLace design."; };
            class ONI { description = "ONI NeuralLace Design"; };
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
