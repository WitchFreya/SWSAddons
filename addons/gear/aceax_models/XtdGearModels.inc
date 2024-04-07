class XtdGearModels {
  class SWS_BaseGearModel;
  class YesNoOption;

  class OperativeOption {
    alwaysSelectable = TRUE;
    values[] = {
      "Ashes"
      , "Bait"
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
      , "Spritz"
      , "Tiger"
      , "Vertigo"
    };
    class Ashes {};
    class Bait {};
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
    class Spritz {};
    class Tiger {};
    class Vertigo {};
  };

  class ColorOption {
    alwaysSelectable = TRUE;
    values[] = {"Blue","Gold","Green","Orange","Purple","Red"};
    class Blue {};
    class Gold {};
    class Green {};
    class Orange {};
    class Purple {};
    class Red {};
  };

  class CfgWeapons {
    class SWS_Operative_Helmet : SWS_BaseGearModel {
      label = QNAME(Operative Helmets);
      options[] = {"Operative","Collar","Ghillie"};
      class Operative : OperativeOption { };
      class Collar : YesNoOption { label = "Vacuum Collar"; };
      class Ghillie : YesNoOption {
        class Yes { description = "Ghillie me."; };
        class No { description = "Ghillie is lame."; };
      };
    };

    class SWS_Color_Helmet : SWS_Operative_Helmet {
      label = QNAME(Generic Helmets);
      options[] = {"Color","Collar","Ghillie"};
      class Color : ColorOption {};
    };

    class SWS_Role_Helmet : SWS_Operative_Helmet {
      label = QNAME(Role Helmets);
      options[] = {"Role","Collar","Ghillie"};
      class Role {
        alwaysSelectable = TRUE;
        values[] = {"CLS"};
        class CLS {
          description = "A helmet specialized for a CLS or medic.";
        };
      };
    };

    class SWS_Operative_Armor : SWS_BaseGearModel {
      label = QNAME(Operative Armor);
      options[] = {"Operative", "Variant", "Ghillie"};
      class Operative : OperativeOption {};
      class Variant {
        alwaysSelectable = TRUE;
        values[] = {
          "Standard"
          , "Demolitions"
          , "Sniper"
          , "Copilot"
          , "Light"
          , "Scout"
          , "Rifleman"
          , "Marksman"
          , "Lead"
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

      class Ghillie : YesNoOption {
        class Yes { description = "Ghillie me."; };
        class No { description = "Ghillie is lame."; };
      };
    };

    class SWS_Color_Armor : SWS_Operative_Armor {
      label = QNAME(Generic Armor);
      options[] = {"Color","Variant","Ghillie"};
      class Color : ColorOption {};
    };

    class SWS_Role_Armor : SWS_Operative_Armor {
      label = QNAME(Role Armor);
      options[] = {"Role","Variant","Ghillie"};
      class Role {
        alwaysSelectable = TRUE;
        values[] = {"CLS"};
        class CLS {
          description = "Armor specialized for a CLS or medic.";
        };
      };
    };
  };

  class CfgVehicles {
    class SWS_Bag_Drone : SWS_BaseGearModel {
      label = QNAME(UAV Bags);
      options[] = {"Variant", "Pattern"};
      class Pattern {
        alwaysSelectable = TRUE;
        label = "Pattern";
        values[] = {"Default","Maid"};
        class Default { description = "Standard design."; };
        class Maid { description = "Maid's custom design."; };
      };

      class Variant {
        alwaysSelectable = TRUE;
        label = "Variant";
        values[] = {"SMQ94","Demining","MiniPelican"};
        class SMQ94 {
          label = "SMQ-94";
          description = "A powerful reconnaissance drone.";
        };
        class Demining {
          description = "A drone with grenades that can be dropped.";
        };
        class MiniPelican {
          label = "Mini-Pelican";
          description = "A drone with extra storage capacity.";
        };
      };
    };

    class SWS_Bag_Hardcase : SWS_BaseGearModel {
      label = QNAME(Hardcases);
      options[] = {"Variant"};

      class Variant {
        alwaysSelectable = TRUE;
        values[] = {
          "Medical"
          , "Bait"
          , "Blue"
          , "Carver"
          , "Chrome"
          , "Egg"
          , "Sawbones"
          , "Snare"
          , "Spritz"
          , "Vertigo"
        };
        class Medical { description = "Standard issue medical hardcase."; };
        #define C_VALUE(name) class name { description = QUOTE(A modified medical satchel for name.); }
        C_VALUE(Bait);
        C_VALUE(Blue);
        C_VALUE(Carver);
        C_VALUE(Chrome);
        C_VALUE(Egg);
        C_VALUE(Sawbones);
        C_VALUE(Snare);
        C_VALUE(Vertigo);
        #undef C_VALUE
      };
    };

    class SWS_Bag_Rucksack : SWS_BaseGearModel {
      label = QNAME(Rucksacks);
      options[] = { "Variant", "Customization" };
      class Variant {
        alwaysSelectable = TRUE;
        values[] = { "Basic", "Medic", "Heavy" };
        class Basic {};
        class Medic {};
        class Heavy {};
      };

      class Customization {
        alwaysSelectable = TRUE;
        values[] = { "None", "Hound" };
        class None {};
        class Hound { description = "Hound's customized version."; };
      };
    };

    class SWS_Bag_Messenger : SWS_BaseGearModel {
      label = QNAME(Messenger Bag);
      options[] = { "Variant", "Purpose" };

      class Variant {
        alwaysSelectable = TRUE;
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
        alwaysSelectable = TRUE;
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
