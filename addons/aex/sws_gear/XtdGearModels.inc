class XtdGearModels {
    class BaseGearModel;
    class YesNoOption;

    class OperativeOption
    {
        values[] = {
            "Ashes",
            "Butler",
            "Demon",
            "Egg",
            "Hound",
            "Hurricane",
            "Maid",
            "Polaris",
            "Rabbit",
            "Rifleman",
            "Roman",
            "Sawbones",
            "Snare",
            "Tiger"
        };
        class Rifleman {};
        class Ashes {};
        class Butler {};
        class Demon {};
        class Egg {};
        class Maid {};
        class Polaris {};
        class Rabbit {};
        class Sawbones {};
        class Tiger {};
        class Hound {};
        class Snare {};
        class Hurricane {};
        class Roman {};
    };

    class ColorOption
    {
        values[] = {"Blue","Gold","Green","Orange","Purple","Red"};
        class Blue {};
        class Gold {};
        class Green {};
        class Orange {};
        class Purple {};
        class Red {};
    };

    class CfgWeapons {
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
            class Color : ColorOption {};
        };
    };
};
