class SWS_Bag_SMQ94 : DMNS_UAV_01_backpack_F
{
    ITEM_META(2);
    displayName = QNAME(ILCS UAV Rucksack [MQ-94]);
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_black";
    model = "\OPTRE_weapons\backpacks\ODST_ruck";
    hiddenSelections[] = { "camo1", "biofoam" };
    hiddenSelectionsMaterials[] = {};
    hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Backpacks\V_ILCS_UAV_CO"};
    class AssembleInfo : AssembleInfo
    {
        assembleTo = "SWS_V_UAV_SMQ94";
    };
    class XtdGearInfo
    {
        model = "SWS_V_UAV_SMQ94";
        variant = "Default";
    };
};

class SWS_Bag_SMQ94_Maid : SWS_Bag_SMQ94
{
    displayName = QNAME(ILCS UAV Rucksack [MQ-94] - Maid);
    class AssembleInfo : AssembleInfo
    {
        assembleTo = "SWS_V_UAV_SMQ94_Maid";
    };

    class XtdGearInfo : XtdGearInfo
    {
        variant = "Maid";
    };
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
