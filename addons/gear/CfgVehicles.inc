#define CLASSES_UNITS \
    "SWS_U_UAV_Antimine"

#define CLASSES_VEHICLES \
    "SWS_Bag_UAV_Demining", \
    "SWS_Bag_SMQ94", \
    "SWS_Bag_SMQ94_Maid", \
    "SWS_V_Bag_Hardcase_Base", \
    "SWS_V_Bag_Hardcase_Blue", \
    "SWS_V_Bag_Hardcase_Medical", \
    "SWS_V_Bag_Hardcase_Sawbones", \
    "SWS_V_Bag_Hardcase_Vertigo", \
    "SWS_V_Bag_Hardcase_Bait", \
    "SWS_V_Bag_Hardcase_Snare", \
    "SWS_V_UAV_Demining", \
    "SWS_V_Bag_Messenger", \
    "SWS_V_Bag_Messenger_Tiger", \
    CLASSES_UNITS


class AssembleInfo;

class CfgVehicles
{
    class B_Messenger_IDAP_F;
    class C_IDAP_UAV_06_antimine_backpack_F;
    class DMNS_UAV_01_backpack_F;
    class OPTRE_ONI_Researcher_Suitcase;
    class SWS_V_UAV_SMQ94_Base;
    class SWS_V_UAV_Demining_Base;

    //== Bags
    #include "CfgVehicles\Bag_Hardcase.inc"
    #include "CfgVehicles\Bag_Messenger.inc"
    #include "CfgVehicles\Bag_UAV_Demining.inc"
    #include "CfgVehicles\Bag_UAV_SMQ94.inc"
};
