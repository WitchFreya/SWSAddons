#define CLASSES_UNITS \
  "SWS_U_UAV_Antimine"

#define CLASSES_VEHICLES    \
  "SWS_V_UAV_Demining"      \
  , "SWS_Bag_UAV_Demining"  \
  , CLASSES_UNITS

class AssembleInfo;

class CfgVehicles
{
  class C_IDAP_UAV_06_AntiMine_F;
  class C_IDAP_UAV_AI_AntiMine_F;
  class C_IDAP_UAV_06_AntiMine_Backpack_F;

  // Provide a pilot AI for UAV
  class SWS_U_UAV_AntiMine : C_IDAP_UAV_AI_AntiMine_F {
    ITEM_META(1);
    faction = "SWS_UNSC";
    side = SIDE_BLUFOR;
  };

  class SWS_V_UAV_Demining_Base : C_IDAP_UAV_06_AntiMine_F {
    ITEM_META(0);
    displayName = QNAME(Demining Drone (Base));
    faction = "SWS_UNSC";
    side = SIDE_BLUFOR;
    crew = "SWS_U_UAV_AntiMine";
    typicalCargo[] = {"SWS_U_UAV_AntiMine"};
    fuelCapacity = 40;
    armor = 4;
    class AssembleInfo : AssembleInfo { dissasembleTo[] = {}; };
  };

  class SWS_V_UAV_Demining : SWS_V_UAV_Demining_Base {
    SCOPE(2);
    displayName = QNAME(Demining Drone);
    class AssembleInfo : AssembleInfo { dissasembleTo[] = {"SWS_Bag_UAV_Demining"}; };
  };

  class SWS_Bag_UAV_Demining : C_IDAP_UAV_06_AntiMine_Backpack_F {
    ITEM_META(2);
    displayName = QNAME(UAV Bag (Demining));
    faction = "SWS_UNSC";
    side = SIDE_BLUFOR;
    class AssembleInfo : AssembleInfo {
      displayName = "Demining Drone";
      assembleTo = "SWS_V_UAV_Demining";
    };

    class XtdGearInfo {
      model = "SWS_Bag_Drone";
      variant = "Demining";
      pattern = "Default";
    };
  };
};
