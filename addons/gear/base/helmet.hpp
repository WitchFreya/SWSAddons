#define HELMET_SELECTIONS_BASE \
    "camo",                    \
        "camo2",               \
        "camo3",               \
        "camo4"

#define HELMET_SELECTIONS_BASE_DP \
    "camo",                       \
        "camo2"

#define HELMET_SELECTIONS_COLLAR \
    "H_VacCollar",               \
        "H_Neck"

class HELMET(Base) : OPTRE_UNSC_CH252D_Helmet_Base
{
    ITEM_META(0);

    descriptionShort = "Armor Level: ODST";
    hiddenSelectionsMaterials[] = {
        MATERIAL(odsthud)};

    hiddenSelectionsTextures[] = {
        "optre_unsc_units\army\data\odst_helmet_co.paa",
        "optre_unsc_units\army\data\odst_helmet_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\soft_packs_co.paa"};

    class ItemInfo : ItemInfo
    {
        hiddenSelections[] = {HELMET_SELECTIONS_BASE, "H_Ghillie", HELMET_SELECTIONS_COLLAR};
    };
};

class DOUBLES(HELMET(Base),dp): OPTRE_UNSC_CH252D_Helmet_dp
{
    ITEM_META(0);

    descriptionShort = "Armor Level: ODST";
    hiddenSelectionsMaterials[] = {
        MATERIAL(odsthud)};

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

#define C_HELMET_BASE_DP(varName,texHelmet)

#define C_HELMET_BASE(varName,texHelmet,texRest)                        \
    class HELMET(varName): HELMET(Base) {                               \
        SCOPE(2);                                                       \
        displayName = NAME(Helmet (name));                              \
        hiddenSelectionsTextures[] = {ARR_2(texHelmet,texRest)};        \
    };                                                                  \
    class DOUBLES(HELMET(varName),dp): DOUBLES(HELMET(Base),dp) {       \
        SCOPE(2);                                                       \
        displayName = NAME(Helmet (name));                              \
        hiddenSelectionsTextures[] = {texHelmet,TEXTURE(visr,clr)}; \
    }

#define C_HELMET_VARIANT(name,variant,varHiddenSelections,varHiddenSelectionsDp)    \
    class HELMET(DOUBLES(name,variant)) : HELMET(name)                              \
    {                                                                               \
        class ItemInfo : ItemInfo                                                   \
        {                                                                           \
            hiddenSelections[] = {varHiddenSelections};                             \
        };                                                                          \
    };                                                                              \
    class HELMET(TRIPLES(name,variant,dp)) : HELMET(DOUBLES(name,dp))               \
    {                                                                               \
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
