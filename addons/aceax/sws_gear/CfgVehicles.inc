#define XTD_GEAR_INFO(var0) class XtdGearInfo : XtdGearInfo { variant = QUOTE(var0); }

class CfgVehicles
{
    class B_Messenger_IDAP_F;
    class DMNS_UAV_01_backpack_F;
    class OPTRE_ONI_Researcher_Suitcase;

    class SWS_V_Bag_Hardcase_Base : OPTRE_ONI_Researcher_Suitcase
    {
        class XtdGearInfo { model = "SWS_Bag_Hardcase"; };
    };

    class SWS_V_Bag_Hardcase_Medical : SWS_V_Bag_Hardcase_Base { XTD_GEAR_INFO(Medical); };
    class SWS_V_Bag_Hardcase_Sawbones : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Sawbones); };
    class SWS_V_Bag_Hardcase_Blue : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Blue); };
    class SWS_V_Bag_Hardcase_Vertigo : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Vertigo); };
    class SWS_V_Bag_Hardcase_Bait : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Bait); };
    class SWS_V_Bag_Hardcase_Snare : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Snare); };

    class SWS_V_Bag_Messenger : B_Messenger_IDAP_F
    {
        class XtdGearInfo
        {
            model = "SWS_Bag_Messenger";
            variant = "SWS";
        };
    };
    class SWS_V_Bag_Messenger_Tiger : SWS_V_Bag_Messenger { XTD_GEAR_INFO(Tiger); };

    class SWS_Bag_SMQ94_Base : DMNS_UAV_01_backpack_F
    {
        class XtdGearInfo { model = "SWS_Bag_SMQ94"; };
    };
    class SWS_Bag_SMQ94 : SWS_Bag_SMQ94_Base { XTD_GEAR_INFO(Default); };
    class SWS_Bag_SMQ94_Maid : SWS_Bag_SMQ94_Base { XTD_GEAR_INFO(Maid); };
};

#undef XTD_GEAR_INFO
