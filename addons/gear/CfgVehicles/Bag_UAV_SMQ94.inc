class SWS_Bag_SMQ94_Base : DMNS_UAV_01_backpack_F
{
    ITEM_META(0);
    displayName = QNAME(SMQ-94 UAV Bag (Base));
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_black";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    hiddenSelections[] = { "camo1", "biofoam" };
    hiddenSelectionsMaterials[] = {};
    hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Backpacks\V_ILCS_UAV_CO.paa"};
    class AssembleInfo : AssembleInfo { displayName = "SMQ-94 Drone"; };
};

class SWS_Bag_SMQ94 : SWS_Bag_SMQ94_Base
{
    SCOPE(2);
    displayName = QNAME(SMQ-94 UAV Bag);
    class AssembleInfo : AssembleInfo { assembleTo = "SWS_V_UAV_SMQ94"; };
};

class SWS_Bag_SMQ94_Maid : SWS_Bag_SMQ94_Base
{
    SCOPE(2);
    displayName = QNAME(SMQ-94 UAV Bag (Maid));
    class AssembleInfo : AssembleInfo { assembleTo = "SWS_V_UAV_SMQ94_Maid"; };
};

class SWS_V_UAV_SMQ94 : SWS_V_UAV_SMQ94_Base
{
    class AssembleInfo : AssembleInfo
    {
        dissasembleTo[] = {"SWS_Bag_SMQ94"};
    };
};

class SWS_V_UAV_SMQ94_Maid : SWS_V_UAV_SMQ94_Base
{
    class AssembleInfo : AssembleInfo
    {
        dissasembleTo[] = {"SWS_Bag_SMQ94_Maid"};
    };
};
