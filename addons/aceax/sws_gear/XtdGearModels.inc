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
            "Tiger",
            "Vertigo"
        };
        class Ashes {};
        class Butler {};
        class Demon {};
        class Egg {};
        class Hound {};
        class Hurricane {};
        class Maid {};
        class Polaris {};
        class Rabbit {};
        class Roman {};
        class Sawbones {};
        class Snare {};
        class Tiger {};
        class Vertigo {};
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
