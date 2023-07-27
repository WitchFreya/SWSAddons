#define CLASSES_VEHICLES \
    QBAG(VEH_UAV(SMQ94)), \
    QBAG(VEH_UAV(DOUBLES(SMQ94,Maid))), \
    QVEHICLE(Bag_Hardcase), \
    QVEHICLE(DOUBLES(Bag_Hardcase,Medical)), \
    QVEHICLE(DOUBLES(Bag_Hardcase,Sawbones))

class CfgVehicles {
    class OPTRE_ONI_Researcher_Suitcase;

    class DMNS_UAV_01_backpack_F;
    class BAG(DMNS_UAV_01_backpack_F_base): DMNS_UAV_01_backpack_F {
        ITEM_META(0);
        class AssembleInfo;
    };

    class BAG(VEH_UAV(SMQ94)): BAG(DMNS_UAV_01_backpack_F_base) {
        ITEM_META(2);
        displayName = QNAME(ILCS UAV Rucksack [MQ-94]);
        picture = "\OPTRE_weapons\backpacks\icons\rucksack_black";
        model = "\OPTRE_weapons\backpacks\ODST_ruck";
        hiddenSelections[] = { "camo1", "biofoam" };
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {
            "V_FZ_Armor\Data\Backpacks\V_ILCS_UAV_CO"
        };
        class AssembleInfo : AssembleInfo {
            assembleTo = QVEHICLE(UAV_SMQ94);
        };
        class XtdGearInfo {
            model = QVEH_UAV(SMQ94);
            variant = "Default";
        };
    };

    class BAG(VEH_UAV(DOUBLES(SMQ94,Maid))): BAG(VEH_UAV(SMQ94)) {
        displayName = QNAME(ILCS UAV Rucksack [MQ-94] - Maid);
        class AssembleInfo : AssembleInfo {
            assembleTo = QVEH_UAV(DOUBLES(SMQ94,Maid));
        };

        class XtdGearInfo : XtdGearInfo {
            variant = "Maid";
        };
    };

    #include "CfgVehicles\Bag_Hardcase.inc"
};