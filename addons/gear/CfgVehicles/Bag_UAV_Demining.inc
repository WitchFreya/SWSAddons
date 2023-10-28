class SWS_Bag_UAV_Demining : C_IDAP_UAV_06_antimine_backpack_F
{
    ITEM_META(2);
    displayName = QNAME(UAV Bag (Demining));
    faction = "SWS_UNSC";
    side = 1;
    class AssembleInfo : AssembleInfo
    {
        displayName = "Demining Drone";
        assembleTo = "SWS_V_UAV_Demining";
    };
};

class SWS_V_UAV_Demining : SWS_V_UAV_Demining_Base
{
    class AssembleInfo : AssembleInfo { dissasembleTo[] = {"SWS_Bag_UAV_Demining"}; };
};
