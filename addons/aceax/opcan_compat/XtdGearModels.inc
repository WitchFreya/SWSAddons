class XtdGearModels {
  class OPCAN_Model {
    author = "Burgessss";
    dlc = "LM_OPCAN";
  };

  class CfgWeapons {
    class OPCAN_ODST_Helmet : OPCAN_Model {
      label = "OPCAN CH252";
      options[] = {"Camo","Color","Version"};

      class Camo {
        alwaysSelectable = TRUE;
        values[] = {"None","Digital"};
        class None {};
        class Digital {};
      };

      class Color {
        alwaysSelectable = TRUE;
        values[] = {
          "Grey"
          , "Snow"
          , "Tan"
          , "Wood"
          , "Blue"
          , "Green"
          , "Orange"
          , "Purple"
          , "Red"
          , "Yellow"
        };

        class Grey {};
        class Snow {};
        class Tan {};
        class Wood {};
        class Blue {};
        class Green {};
        class Orange {};
        class Purple {};
        class Red {};
        class Yellow {};
      };

      class Version {
        alwaysSelectable = TRUE;
        label = "Version";
        values[] = {"CE_A", "Templar", "Halo", "Halo_2", "Halo_3", "Halo_Reach"};

        class CE_A {
          label = "CE:A";
        };
        class Templar {
          label = "Templar";
        };
        class Halo {
          label = "Halo";
        };
        class Halo_2 {
          label = "Halo 2";
        };
        class Halo_3 {
          label = "Halo 3";
        };

        class Halo_Reach {
          label = "Reach";
        };
      };
    };
  };
};
