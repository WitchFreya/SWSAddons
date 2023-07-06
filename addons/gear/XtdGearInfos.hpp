#define VEST_GEAR_INFO_ONE(name,varVariant)                                        \
    class SWS_Vest_##name##_##varVariant : SWS_Vest_##name                          \
    {                                                                               \
        model = "SWS_Operative_Armor";                                              \
        Operative = QUOTE(name);                                                    \
        Variant = QUOTE(varVariant);                                                \
        Ghillie = "No";                                                             \
    };                                                                              \
    class SWS_Vest_##name##_##varVariant##_Ghillie : SWS_Vest_##name##_##varVariant \
    {                                                                               \
        Ghillie = "Yes";                                                            \
    }

#define VEST_GEAR_INFO(name)                          \
    class SWS_Vest_##name                             \
    {                                                 \
        model = "SWS_Operative_Armor";                \
        Operative = QUOTE(name);                      \
        Variant = "Standard";                         \
        Ghillie = "No";                               \
    };                                                \
    class SWS_Vest_##name##_Ghillie : SWS_Vest_##name \
    {                                                 \
        Ghillie = "Yes";                              \
    };                                                \
    VEST_GEAR_INFO_ONE(name,Demolitions);            \
    VEST_GEAR_INFO_ONE(name,Sniper);                 \
    VEST_GEAR_INFO_ONE(name,Light);                  \
    VEST_GEAR_INFO_ONE(name,Scout);                  \
    VEST_GEAR_INFO_ONE(name,Rifleman);               \
    VEST_GEAR_INFO_ONE(name,Marksman)

#define HELMET_GEAR_INFO_BASE(name)                  \
    class SWS_Helmet_##name                          \
    {                                                \
        model = "SWS_Operative_Helmet";              \
        operative = QUOTE(name);                     \
        polarization = "Yes";                        \
        collar = "No";                               \
        ghillie = "No";                              \
    };                                               \
    class SWS_Helmet_##name##_dp : SWS_Helmet_##name \
    {                                                \
        polarization = "No";                         \
    }

#define HELMET_GEAR_INFO_VARIANT(name, variant, varCollar, varGhillie)       \
    class SWS_Helmet_##name##_##variant : SWS_Helmet_##name                  \
    {                                                                        \
        polarization = "Yes";                                                \
        collar = QUOTE(varCollar);                                           \
        ghillie = QUOTE(varGhillie);                                         \
    };                                                                       \
    class SWS_Helmet_##name##_##variant##_dp : SWS_Helmet_##name##_##variant \
    {                                                                        \
        polarization = "No";                                                 \
    }

#define HELMET_GEAR_INFO(name)                                \
    HELMET_GEAR_INFO_BASE(name);                              \
    HELMET_GEAR_INFO_VARIANT(name,Collar, Yes, No);          \
    HELMET_GEAR_INFO_VARIANT(name,Collar_Ghillie, Yes, Yes); \
    HELMET_GEAR_INFO_VARIANT(name,Ghillie, No, Yes)

#define GEAR_INFO(name)     \
    HELMET_GEAR_INFO(name); \
    VEST_GEAR_INFO(name)

/**
 *  Include all variants of this armor in a single item.
 */
class XtdGearInfos
{
    class CfgWeapons
    {
        GEAR_INFO(Rifleman);
        GEAR_INFO(Ashes);
        GEAR_INFO(Butler);
        GEAR_INFO(Demon);
        GEAR_INFO(Egg);
        GEAR_INFO(Maid);
        GEAR_INFO(Polaris);
        GEAR_INFO(Rabbit);
        GEAR_INFO(Sawbones);
        GEAR_INFO(Tiger);
    };
};
