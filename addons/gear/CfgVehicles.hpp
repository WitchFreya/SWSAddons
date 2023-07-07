#define CLASSES_VEHICLES \
    QBAG(UAV_MQ94)

class CfgVehicles {
    class DMNS_UAV_01_backpack_F;
    class BAG(DMNS_UAV_01_backpack_F_base): DMNS_UAV_01_backpack_F {
        class AssembleInfo;
    };

    class BAG(UAV_MQ94): BAG(DMNS_UAV_01_backpack_F_base) {
        ITEM_META(2);
        displayName = NAME(ILCS UAV Rucksack [MQ-94]);
        picture = "\OPTRE_weapons\backpacks\icons\rucksack_black";
        model = "\OPTRE_weapons\backpacks\ODST_ruck";
        hiddenSelections[] = { "camo1", "biofoam" };
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {
            "V_FZ_Armor\Data\Backpacks\V_ILCS_UAV_CO"
        };
        class AssembleInfo : AssembleInfo {
            assembleTo = QVEHICLE(UAV_MQ94);
        };
    };
};
