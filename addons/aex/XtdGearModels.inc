class XtdGearModels
{
    class BaseGearModel
    {
        author = QUOTE(AUTHOR);
        icon = "\sws_main\data\icon_sws_ca.paa";
    };

    class YesNoOption
    {
        values[] = {"Yes","No"};
        class Yes {};
        class No {};
    };

    class OperativeOption
    {
        values[] = {
            "Rifleman",
            "Ashes",
            "Butler",
            "Demon",
            "Egg",
            "Maid",
            "Polaris",
            "Rabbit",
            "Sawbones",
            "Tiger",
            "Hound",
            "Kitty",
            "Hurricane",
            "Roman"
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
        class Kitty {};
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

    #include "CfgVehicles.inc"
    #include "CfgWeapons.inc"
};
