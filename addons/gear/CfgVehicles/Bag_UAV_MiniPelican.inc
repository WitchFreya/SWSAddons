class SWS_Bag_UAV_MiniPelican : B_UAV_06_Backpack_F
{
    ITEM_META(2);
    displayName = QNAME(UAV Bag (MiniPelican));
    faction = "SWS_UNSC";
    side = SIDE_BLUFOR;
    class AssembleInfo : AssembleInfo
    {
        displayName = "MiniPelican Drone";
        assembleTo = "SWS_V_UAV_MiniPelican";
    };
};

class SWS_V_UAV_MiniPelican : SWS_V_UAV_MiniPelican_Base
{
    class AssembleInfo : AssembleInfo { dissasembleTo[] = {"SWS_Bag_UAV_MiniPelican"}; };
};
