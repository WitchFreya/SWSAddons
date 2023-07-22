#define QHELMET_VARIANTS_POLARIZATION_FN(var0) QHELMET(var0), QHELMET(DOUBLES(var0,dp))
#define QHELMET_VARIANTS_GHILLIE_FN(var0)  \
    QHELMET_VARIANTS_POLARIZATION_FN(var0), \
    QHELMET_VARIANTS_POLARIZATION_FN(DOUBLES(var0,Ghillie))
#define QHELMET_VARIANTS_COLLAR_FN(var0) \
    QHELMET_VARIANTS_GHILLIE_FN(var0), \
    QHELMET_VARIANTS_GHILLIE_FN(DOUBLES(var0,Collar))

#define QHELMETS_FN(var0) QHELMET_VARIANTS_COLLAR_FN(var0)

#define QVEST_VARIANTS_GHILLIE_FN(var0) QVEST(var0), QVEST(DOUBLES(var0,Ghillie))
#define QVEST_VARIANTS_CONFIGURATION_FN(var0)               \
    QVEST_VARIANTS_GHILLIE_FN(var0),                        \
    QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Demolitions)),   \
    QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Sniper)),        \
    QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Light)),         \
    QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Scout)),         \
    QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Rifleman)),      \
    QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Marksman)),      \
    QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Lead))

#define QVESTS_FN(var0) QVEST_VARIANTS_CONFIGURATION_FN(var0)

#define QWEAPONS_FN(var0)   \
    QHELMETS_FN(var0),      \
    QVESTS_FN(var0)

#define CLASSES_WEAPONS \
    QWEAPONS_FN(Rifleman), \
    QWEAPONS_FN(Ashes), \
    QWEAPONS_FN(Butler), \
    QWEAPONS_FN(Demon), \
    QWEAPONS_FN(Egg), \
    QWEAPONS_FN(Maid), \
    QWEAPONS_FN(Polaris), \
    QWEAPONS_FN(Rabbit), \
    QWEAPONS_FN(Sawbones), \
    QWEAPONS_FN(Tiger), \
    QWEAPONS_FN(Hurricane), \
    QWEAPONS_FN(Roman), \
    QWEAPONS_FN(Blue), \
    QWEAPONS_FN(Gold), \
    QWEAPONS_FN(Green), \
    QWEAPONS_FN(Orange), \
    QWEAPONS_FN(Purple), \
    QWEAPONS_FN(Red), \
    QHELMET(Maid_Recon), \
    QHELMET(TRIPLES(Maid,Recon,dp))

#define C_GEAR(varName,varVisorColor)   \
    C_HELMET(varName,varVisorColor);    \
    C_VEST(varName)

class CfgWeapons
{
    class OPTRE_UNSC_M52D_Armor;
    class VEST(OPTRE_UNSC_M52D_Armor): OPTRE_UNSC_M52D_Armor {
        ITEM_META(0);
        class ItemInfo;
    };
    class OPTRE_UNSC_CH252D_Helmet_Base;
    class HELMET(OPTRE_UNSC_CH252D_Helmet_Base): OPTRE_UNSC_CH252D_Helmet_Base {
        ITEM_META(0);
        class ItemInfo;
    };

    #include "base\helmet.hpp"
    #include "base\vest.hpp"

    //== BASE
    C_GEAR(Rifleman,grey);

    //== OPERATIVES
    C_GEAR(Ashes,silver);
    C_GEAR(Butler,purple);
    C_GEAR(Demon,purple);
    C_GEAR(Egg,grey);
    C_GEAR(Maid,sepia);
    C_GEAR(Polaris,pink);
    C_GEAR(Rabbit,pink);
    C_GEAR(Tiger,pink);
    C_GEAR(Sawbones,teal);
    C_GEAR(Hurricane,purple);
    C_GEAR(Roman,purple);

    //== COLORS
    C_GEAR(Blue,silver);
    C_GEAR(Gold,silver);
    C_GEAR(Green,silver);
    C_GEAR(Orange,silver);
    C_GEAR(Purple,silver);
    C_GEAR(Red,silver);

    #include "CfgWeapons\Recon.inc"
};
