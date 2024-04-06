class XtdGearModels {
  class SWS_BaseGearModel;
  class YesNoOption;

  class OperativeOption {
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
        label = "Pattern";
        values[] = {"Default","Maid"};
        class Default { description = "Standard design."; };
        class Maid { description = "Maid's custom design."; };
      };

      class Variant {
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
  };
};
