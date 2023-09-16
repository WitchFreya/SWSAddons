class VEH_UAV(Demining) : C_IDAP_UAV_06_antimine_F
{
    ITEM_META(2);
    displayName = QNAME(Demining Drone);
    faction = "SWS_UNSC";
    side = 1;
    crew = QUNIT(UAV_Antimine);
    typicalCargo[] = {QUNIT(UAV_Antimine)};
    class AssembleInfo : AssembleInfo
    {
        dissasembleTo[] = {QBAG(VEH_UAV(Demining))};
    };
};

class BAG(VEH_UAV(Demining)) : C_IDAP_UAV_06_antimine_backpack_F
{
    ITEM_META(2);
    displayName = QNAME(UAV Bag (Demining));
    faction = "SWS_UNSC";
    side = 1;
    class AssembleInfo : AssembleInfo
    {
        displayName = QNAME(UAV Bag (Demining));
        assembleTo = QVEH_UAV(Demining);
    };
};

class UNIT(UAV_Antimine) : C_IDAP_UAV_AI_antimine_F
{
    ITEM_META(2);
    faction = "SWS_UNSC";
    side = 1;
};
