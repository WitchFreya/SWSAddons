#define HELMET_SELECTIONS_BASE  \
    "camo",                     \
    "camo2",                    \
    "camo3",                    \
    "camo4"

#define HELMET_SELECTIONS_BASE_DP \
    "camo",                       \
    "camo2"

#define HELMET_SELECTIONS_COLLAR \
    "H_VacCollar",               \
    "H_Neck"

class SWS_Helmet_Base : SWS_HELMET_OPTRE_UNSC_CH252D_Helmet_Base
{
    ITEM_META(1);
    descriptionShort = "Armor Level: ODST";
    hiddenSelectionsMaterials[] = {
        MATERIAL(odsthud)};

    hiddenSelectionsTextures[] = {
        "optre_unsc_units\army\data\odst_helmet_co.paa",
        "optre_unsc_units\army\data\odst_helmet_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\soft_packs_co.paa"};
     hiddenSelections[] = {HELMET_SELECTIONS_BASE, "H_Ghillie", HELMET_SELECTIONS_COLLAR};

    class ItemInfo : ItemInfo
    {
        hiddenSelections[] = {HELMET_SELECTIONS_BASE, "H_Ghillie", HELMET_SELECTIONS_COLLAR};
    };
};

class SWS_Helmet_Base_dp : SWS_Helmet_Base
{
    ace_arsenal_hide = 1;
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {HELMET_SELECTIONS_BASE_DP, "H_Ghillie", HELMET_SELECTIONS_COLLAR};
    hiddenSelectionsTextures[] = {
        "optre_unsc_units\army\data\odst_helmet_co.paa",
        QPATHTOF(data\textures\visr_clr_ca.paa)
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
        hiddenSelections[] = {HELMET_SELECTIONS_BASE_DP, "H_Ghillie", HELMET_SELECTIONS_COLLAR};
        hiddenSelectionsTextures[] = {
            "optre_unsc_units\army\data\odst_helmet_co.paa",
            QPATHTOF(data\textures\visr_clr_ca.paa)
        };
    };
};

#define C_HELMET_BASE(varName,texHelmet,texRest)                        \
    class DOUBLES(SWS_Helmet,varName): SWS_Helmet_Base {                \
        ITEM_META(2);                                                       \
        displayName = QNAME(Helmet (name));                             \
        hiddenSelectionsTextures[] = {ARR_2(texHelmet,texRest)};        \
        class ItemInfo : ItemInfo {                                     \
            hiddenSelectionsTextures[] = {ARR_2(texHelmet,texRest)};    \
        };                                                              \
    };                                                                  \
    class TRIPLES(SWS_Helmet,varName,dp): SWS_Helmet_Base_dp {          \
        ITEM_META(1);                                                       \
        displayName = QNAME(Helmet (name));                             \
        ace_arsenal_uniqueBase = QUOTE(DOUBLES(SWS_Helmet,varName)); \
        hiddenSelectionsTextures[] = {texHelmet,QPATHTOF(data\textures\visr_clr_ca.paa)};     \
        class ItemInfo : ItemInfo {                                     \
            hiddenSelectionsTextures[] = {texHelmet,QPATHTOF(data\textures\visr_clr_ca.paa)}; \
        };                                                              \
    }

#define C_HELMET_VARIANT(name,variant,varHiddenSelections,varHiddenSelectionsDp)    \
    class TRIPLES(SWS_Helmet,name,variant) : DOUBLES(SWS_Helmet,name)               \
    {                                                                               \
        hiddenSelections[] = {varHiddenSelections};                                 \
        class ItemInfo : ItemInfo                                                   \
        {                                                                           \
            hiddenSelections[] = {varHiddenSelections};                             \
        };                                                                          \
    };                                                                              \
    class TRIPLES(SWS_Helmet,DOUBLES(name,variant),dp) : TRIPLES(SWS_Helmet,name,dp)\
    {                                                                               \
        ace_arsenal_uniqueBase = QUOTE(TRIPLES(SWS_Helmet,name,variant));                  \
        hiddenSelections[] = {varHiddenSelections};                                 \
        class ItemInfo : ItemInfo                                                   \
        {                                                                           \
            hiddenSelections[] = {varHiddenSelectionsDp};                           \
        };                                                                          \
    }

#define C_HELMET(name,varVisrColor)                                     \
    C_HELMET_BASE(name,                                                 \
        TEXTURE(helmet,name),                                           \
        ARR_3(                                                          \
            TEXTURE(visr,varVisrColor),                                 \
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",       \
            "optre_unsc_units\army\data\soft_packs_co.paa"              \
        ));                                                             \
    C_HELMET_VARIANT(name,Collar,                                       \
        ARR_2(HELMET_SELECTIONS_BASE, "H_Ghillie"),                     \
        ARR_2(HELMET_SELECTIONS_BASE_DP, "H_Ghillie"));                 \
    C_HELMET_VARIANT(name,Ghillie,                                      \
        ARR_2(HELMET_SELECTIONS_BASE, HELMET_SELECTIONS_COLLAR),        \
        ARR_2(HELMET_SELECTIONS_BASE_DP, HELMET_SELECTIONS_COLLAR));    \
    C_HELMET_VARIANT(name,Collar_Ghillie,                               \
        HELMET_SELECTIONS_BASE,                                         \
        HELMET_SELECTIONS_BASE_DP)
