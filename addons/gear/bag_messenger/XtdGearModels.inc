class XtdGearModels {
  class SWS_BaseGearModel;
  class CfgVehicles {
    class SWS_Bag_Messenger : SWS_BaseGearModel {
      label = QNAME(Messenger Bag);
      options[] = { "Variant", "Purpose" };

      class Variant {
        values[] = {
          "SWS"
          , "Maid"
          , "Snare"
          , "Tiger"
        };

        class SWS { description = "A messenger bag with the SWS logo."; };
        class Maid { description = "Maid's messenger bag."; };
        class Snare { description = "Snare's messenger bag."; };
        class Tiger { description = "Tiger's messenger bag."; };
      };

      class Purpose {
        values[] = {
          "Standard"
          , "Heavy"
          , "LR"
          , "Medical"
        };

        class Standard { description = "A general purpose bag."; };
        class Heavy { description = "A curiously deep bag that weighs more."; };
        class LR {
          description = "Oddly, this bag has a radio hookup in its front pocket and seems to be putting out a signal.";
        };
        class Medical { description = "A bag with lots of extra pockets and such for medical gear."; };
      };
    };
  };
};
