#define CLASSES_VEHICLES  \
  "SWS_V_MBT_M700_Viper_CLA"

class CfgVehicles {
  class I_MBT_03_Cannon_F;
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
};
