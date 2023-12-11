#define XTD_GEAR_INFO(var0) class XtdGearInfo : XtdGearInfo { variant = QUOTE(var0); }

class CfgVehicles
{
    class B_Messenger_IDAP_F;
    class DMNS_UAV_01_backpack_F;
    class OPTRE_ONI_Researcher_Suitcase;
    class B_UAV_06_Backpack_F;
    class C_IDAP_UAV_06_antimine_backpack_F;
    class 19thANPRC419;

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
    class SWS_V_Bag_Hardcase_Egg : SWS_V_Bag_Hardcase_Medical { XTD_GEAR_INFO(Egg); };

    class SWS_V_Bag_Messenger : B_Messenger_IDAP_F
    {
        class XtdGearInfo
        {
            model = "SWS_Bag_Messenger";
            variant = "SWS";
            purpose = "Standard";
        };
    };
    class SWS_V_Bag_Messenger_Tiger : SWS_V_Bag_Messenger { XTD_GEAR_INFO(Tiger); };
    class SWS_V_Bag_Messenger_Tiger_Hammerspace : SWS_V_Bag_Messenger_Tiger
    {
        class XtdGearInfo : XtdGearInfo
        {
            purpose = "Heavy";
        };
    };
    class SWS_V_Bag_Messenger_Tiger_Radio : 19thANPRC419
    {
        class XtdGearInfo
        {
            model = "SWS_Bag_Messenger";
            variant = "Tiger";
            purpose = "RTO";
        };
    };

    class SWS_Bag_UAV_SMQ94_Base : DMNS_UAV_01_backpack_F
    {
        class XtdGearInfo
        {
            model = "SWS_Bag_Drone";
            variant = "SMQ94";
        };
    };

    class SWS_Bag_UAV_SMQ94 : SWS_Bag_UAV_SMQ94_Base {
        class XtdGearInfo : XtdGearInfo
        {
            pattern = "Default";
        };
    };

    class SWS_Bag_UAV_SMQ94_Maid : SWS_Bag_UAV_SMQ94_Base {
        class XtdGearInfo : XtdGearInfo
        {
            pattern = "Maid";
        };
    };

    class SWS_Bag_UAV_MiniPelican : B_UAV_06_Backpack_F
    {
        class XtdGearInfo
        {
            model = "SWS_Bag_Drone";
            variant = "MiniPelican";
            pattern = "Default";
        };
    };

    class SWS_Bag_UAV_Demining : C_IDAP_UAV_06_antimine_backpack_F
    {
        class XtdGearInfo
        {
            model = "SWS_Bag_Drone";
            variant = "Demining";
            pattern = "Default";
        };
    };
};

#undef XTD_GEAR_INFO
