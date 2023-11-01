class XtdGearModels {
    class SWS_BaseGearModel;
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

    #include "XtdGearModels\CfgWeapons.inc"
    #include "XtdGearModels\CfgVehicles.inc"
};
