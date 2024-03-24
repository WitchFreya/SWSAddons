#define XTD_GEAR_INFO(var0) class XtdGearInfo : XtdGearInfo { variant = QUOTE(var0); }

class CfgVehicles
{
  class B_Messenger_IDAP_F;
  class DMNS_UAV_01_Backpack_F;
  class OPTRE_ONI_Researcher_Suitcase;
  class B_UAV_06_Backpack_F;
  class C_IDAP_UAV_06_Antimine_Backpack_F;

  class SWS_V_Bag_Hardcase_Base : OPTRE_ONI_Researcher_Suitcase
  {
    class XtdGearInfo { model = "SWS_Bag_Hardcase"; };
  };

  class SWS_V_Bag_Hardcase_Medical : SWS_V_Bag_Hardcase_Base { XTD_GEAR_INFO(Medical); };

  class SWS_V_Bag_Hardcase_Bait : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Bait); };
  class SWS_V_Bag_Hardcase_Blue : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Blue); };
  class SWS_V_Bag_Hardcase_Carver : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Carver); };
  class SWS_V_Bag_Hardcase_Chrome : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Chrome); };
  class SWS_V_Bag_Hardcase_Egg : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Egg); };
  class SWS_V_Bag_Hardcase_Sawbones : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Sawbones); };
  class SWS_V_Bag_Hardcase_Snare : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Snare); };
  class SWS_V_Bag_Hardcase_Spritz : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Spritz); };
  class SWS_V_Bag_Hardcase_Vertigo : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Vertigo); };

  class SWS_Bag_UAV_MiniPelican : B_UAV_06_Backpack_F
  {
    class XtdGearInfo
    {
      model = "SWS_Bag_Drone";
      variant = "MiniPelican";
      pattern = "Default";
    };
  };
};

#undef XTD_GEAR_INFO
