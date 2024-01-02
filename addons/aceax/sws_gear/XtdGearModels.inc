class XtdGearModels
{
  class SWS_BaseGearModel;
  class YesNoOption;

  class OperativeOption
  {
    values[] = {
      "Ashes"
      , "Butler"
      , "Chrome"
      , "Demon"
      , "Egg"
      , "Hound"
      , "Hurricane"
      , "Maid"
      , "Polaris"
      , "Rabbit"
      , "Rifleman"
      , "Roman"
      , "Sawbones"
      , "Snare"
      , "Sonic"
      , "Tiger"
      , "Vertigo"
    };
    class Ashes {};
    class Butler {};
    class Chrome {};
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
    class Sonic {};
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
