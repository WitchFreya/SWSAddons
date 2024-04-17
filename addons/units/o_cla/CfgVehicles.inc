#define CLASSES_VEHICLES      \
  "SWS_V_MBT_M700_Viper_CLA"  \
  , "O_OCLA_Ozelot_AA_01"     \
  , "O_CLA_Gryphon_01"

class CfgVehicles {
  class I_LT_01_AA_F;
  class I_MBT_03_Cannon_F;
  class I_Plane_Fighter_04_F;
  class SWS_V_MBT_M700_Viper_Captured;

  class SWS_V_MBT_M700_Viper_Base : I_MBT_03_Cannon_F {
    class TextureSources : TextureSources {
      class SWS_Basic;
      class INS_Captured : SWS_Basic {
        factions[] += {"O_CLA"};
      };
    };
  };

  class SWS_V_MBT_M700_Viper_CLA : SWS_V_MBT_M700_Viper_Captured {
    faction = "O_CLA";
    displayName = QNAME(M700 Viper (Captured CLA));
    crew = "O_CLA_Crew_01";
    typicalCargo[] = {"O_CLA_Crew_01"};
  };

  class O_OCLA_Ozelot_AA_01 : I_LT_01_AA_F {
    ITEM_META(2);
    displayName = QNAME(Ozelot AA);
    side = SIDE_OPFOR;
    faction = "o_cla";
    crew = "O_CLA_Crew_01";
    typicalCargo[] = {"O_CLA_Crew_01"};

    hiddenSelectionsTextures[]={
      "a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa"
      , "a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa"
      , "a3\armor_f\data\camonet_aaf_digi_green_co.paa"
      , "a3\armor_f\data\cage_olive_co.paa"
    };


    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
    };
  };

  class O_CLA_Gryphon_01 : I_Plane_Fighter_04_F {
    ITEM_META(2);
    displayName = QNAME(A149 Gryphon);
    side = SIDE_OPFOR;
    faction = "o_cla";
    crew = "O_CLA_Crew_01";
    typicalCargo[] = {"O_CLA_Crew_01"};
  };
};
