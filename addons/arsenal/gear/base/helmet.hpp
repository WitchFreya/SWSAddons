#include "..\dependencies\common.hpp"

#define HELMET_DISPLAY_NAME(name) displayName = "[SWS] name's Helmet"

#define HELMET_SELECTIONS_BASE \
    "camo",                    \
        "camo2",               \
        "camo3",               \
        "camo4",               \
        "H_Ghillie"

#define HELMET_SELECTIONS_COLLARLESS \
    HELMET_SELECTIONS_BASE,          \
        "H_VacCollar",               \
        "H_Neck"

class SWS_Helmet_Base : OPTRE_UNSC_CH252D_Helmet_Base
{
    ITEM_META(0);

    descriptionShort = "Armor Level: ODST";
    hiddenSelectionsMaterials[] = {
        MATERIAL(odsthud.rvmat)};

    hiddenSelectionsTextures[] = {
        "optre_unsc_units\army\data\odst_helmet_co.paa",
        "optre_unsc_units\army\data\odst_helmet_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\soft_packs_co.paa"};

    class ItemInfo : ItemInfo
    {
        hiddenSelections[] = {HELMET_SELECTIONS_COLLARLESS};
    };
};

class SWS_Helmet_Base_dp : OPTRE_UNSC_CH252D_Helmet_dp
{
    ITEM_META(0);

    descriptionShort = "Armor Level: ODST";
    hiddenSelectionsMaterials[] = {
        MATERIAL(odsthud.rvmat)};

    class ItemInfo : ItemInfo
    {
        hiddenSelections[] = {
            "camo",
            "camo2",
            "H_Ghillie",
            "H_VacCollar",
            "H_Neck"};
    };
};

#define HELMET_BASE(name, texHelmet, texVisor, texGhillie, texPacks)              \
    class SWS_Helmet_##name : SWS_Helmet_Base                                     \
    {                                                                             \
        SCOPE(2);                                                                 \
        HELMET_DISPLAY_NAME(name);                                                \
        hiddenSelectionsTextures[] = {texHelmet, texVisor, texGhillie, texPacks}; \
    };                                                                            \
    class SWS_Helmet_##name##_dp : SWS_Helmet_Base_dp                             \
    {                                                                             \
        SCOPE(2);                                                                 \
        HELMET_DISPLAY_NAME(name);                                                \
        hiddenSelectionsTextures[] = {texHelmet, TEXTURE(visr_clr.paa)};          \
    }

#define HELMET_VARIANT(name, variant, varHiddenSelections)            \
    class SWS_Helmet_##name##_##variant : SWS_Helmet_##name           \
    {                                                                 \
        class ItemInfo : ItemInfo                                     \
        {                                                             \
            hiddenSelections[] = {varHiddenSelections};               \
        };                                                            \
    };                                                                \
    class SWS_Helmet_##name##_##variant##_dp : SWS_Helmet_##name##_dp \
    {                                                                 \
        class ItemInfo : ItemInfo                                     \
        {                                                             \
            hiddenSelections[] = {varHiddenSelections};               \
        };                                                            \
    }

#define HELMET(name,texHelmet,texVisor,texGhillie,texPacks)  \
    HELMET_BASE(name,texHelmet,texVisor,texGhillie,texPacks); \
    HELMET_VARIANT(name,Collar,HELMET_SELECTIONS_BASE)
