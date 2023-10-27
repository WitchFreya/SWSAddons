#define CLASSES_UNITS \
    "SWS_U_UAV_Antimine"

#define CLASSES_VEHICLES \
    "SWS_Pack_SWS_V_UAV_Demining", \
    "SWS_Pack_SWS_V_UAV_SMQ94", \
    "SWS_Pack_SWS_V_UAV_SMQ94_Maid", \
    "SWS_V_Bag_Hardcase_Base", \
    "SWS_V_Bag_Hardcase_Blue", \
    "SWS_V_Bag_Hardcase_Medical", \
    "SWS_V_Bag_Hardcase_Sawbones", \
    "SWS_V_Bag_Hardcase_Vertigo", \
    "SWS_V_Bag_Hardcase_Bait", \
    "SWS_V_Bag_Hardcase_Snare", \
    "SWS_V_UAV_Demining", \
    "SWS_V_UAV_SMQ94", \
    "SWS_V_UAV_SMQ94_Maid", \
    "SWS_V_UAV_Pelican", \
    "SWS_V_Bag_Messenger", \
    "SWS_V_Bag_Messenger_Tiger", \
    CLASSES_UNITS


class AssembleInfo;
class TextureSources;
class Turrets;
class MainTurret;
class HitPoints;
class HitHull;

class CfgVehicles {
    class OPTRE_ONI_Researcher_Suitcase;
    class DMNS_UAV_01_backpack_F;
    class UAV_01_base_F;

    #include "CfgVehicles\UAV_SMQ94.inc"

    class BAG(SWS_V_UAV_SMQ94): DMNS_UAV_01_backpack_F {
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
            assembleTo = "SWS_V_UAV_SMQ94";
        };
        class XtdGearInfo {
            model = "SWS_V_UAV_SMQ94";
            variant = "Default";
        };
    };

    class BAG(SWS_V_UAV_SMQ94_Maid) : BAG(SWS_V_UAV_SMQ94) {
        displayName = QNAME(ILCS UAV Rucksack [MQ-94] - Maid);
        class AssembleInfo : AssembleInfo {
            assembleTo = "SWS_V_UAV_SMQ94_Maid";
        };

        class XtdGearInfo : XtdGearInfo {
            variant = "Maid";
        };
    };

    #include "CfgVehicles\Bag_Hardcase.inc"

    class C_IDAP_UAV_06_antimine_backpack_F;
    class C_IDAP_UAV_06_antimine_F;
    class C_IDAP_UAV_AI_antimine_F;
    #include "CfgVehicles\UAV_Demining.inc"

    class B_Messenger_IDAP_F;
    #include "CfgVehicles\Bag_Messenger.inc"

    class UAV_06_Base_F;
    #include "CfgVehicles\B_UAV_06_F.inc"
    #include "CfgVehicles\UAV_Pelican.inc"
};
