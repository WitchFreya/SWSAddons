#define VEST_GEAR_INFO_ONE(name,varType,varVariant)                                 \
    class VEST(DOUBLES(name,varVariant)) : VEST(name)                               \
    {                                                                               \
        model = QUOTE(TRIPLES(PREFIX,varType,Armor));                               \
        Operative = QUOTE(name);                                                    \
        Variant = QUOTE(varVariant);                                                \
        Ghillie = "No";                                                             \
    };                                                                              \
    class VEST(TRIPLES(name,varVariant,Ghillie)) : VEST(DOUBLES(name,varVariant))   \
    {                                                                               \
        Ghillie = "Yes";                                                            \
    }

#define VEST_GEAR_INFO(name,varType)                    \
    class VEST(name)                                    \
    {                                                   \
        model = QUOTE(TRIPLES(PREFIX,varType,Armor));   \
        varType = QUOTE(name);                          \
        Variant = "Standard";                           \
        Ghillie = "No";                                 \
    };                                                  \
    class VEST(DOUBLES(name,Ghillie)) : VEST(name)      \
    {                                                   \
        Ghillie = "Yes";                                \
    };                                                  \
    VEST_GEAR_INFO_ONE(name,varType,Demolitions);       \
    VEST_GEAR_INFO_ONE(name,varType,Sniper);            \
    VEST_GEAR_INFO_ONE(name,varType,Light);             \
    VEST_GEAR_INFO_ONE(name,varType,Scout);             \
    VEST_GEAR_INFO_ONE(name,varType,Rifleman);          \
    VEST_GEAR_INFO_ONE(name,varType,Marksman);          \
    VEST_GEAR_INFO_ONE(name,varType,Lead)

#define HELMET_GEAR_INFO_BASE(name,varType)             \
    class HELMET(name)                                  \
    {                                                   \
        model = QUOTE(TRIPLES(PREFIX,varType,Helmet));  \
        varType = QUOTE(name);                          \
        polarization = "Yes";                           \
        collar = "No";                                  \
        ghillie = "No";                                 \
    };                                                  \
    class HELMET(DOUBLES(name,dp)) : HELMET(name)       \
    {                                                   \
        polarization = "No";                            \
    }

#define HELMET_GEAR_INFO_VARIANT(name,variant,varCollar,varGhillie)         \
    class HELMET(DOUBLES(name,variant)) : HELMET(name)                      \
    {                                                                       \
        polarization = "Yes";                                               \
        collar = QUOTE(varCollar);                                          \
        ghillie = QUOTE(varGhillie);                                        \
    };                                                                      \
    class HELMET(TRIPLES(name,variant,dp)) : HELMET(DOUBLES(name,variant))  \
    {                                                                       \
        polarization = "No";                                                \
    }

#define HELMET_GEAR_INFO(name,varType)                      \
    HELMET_GEAR_INFO_BASE(name,varType);                    \
    HELMET_GEAR_INFO_VARIANT(name,Collar,Yes,No);           \
    HELMET_GEAR_INFO_VARIANT(name,Collar_Ghillie,Yes,Yes);  \
    HELMET_GEAR_INFO_VARIANT(name,Ghillie,No,Yes)

#define GEAR_INFO(name,varType)     \
    HELMET_GEAR_INFO(name,varType); \
    VEST_GEAR_INFO(name,varType)

#define C_GEAR_INFO_OP(name) GEAR_INFO(name,Operative)
#define C_GEAR_INFO_COLOR(name) GEAR_INFO(name,Color)

/**
 *  Include all variants of this armor in a single item.
 */
class XtdGearInfos
{
    class CfgWeapons
    {
        //== OPERATIVES
        C_GEAR_INFO_OP(Rifleman);
        C_GEAR_INFO_OP(Ashes);
        C_GEAR_INFO_OP(Butler);
        C_GEAR_INFO_OP(Demon);
        C_GEAR_INFO_OP(Egg);
        C_GEAR_INFO_OP(Maid);
        C_GEAR_INFO_OP(Polaris);
        C_GEAR_INFO_OP(Rabbit);
        C_GEAR_INFO_OP(Sawbones);
        C_GEAR_INFO_OP(Tiger);
        C_GEAR_INFO_OP(Hurricane);
        C_GEAR_INFO_OP(Roman);

        //== COLORS
        C_GEAR_INFO_COLOR(Blue);
        C_GEAR_INFO_COLOR(Gold);
        C_GEAR_INFO_COLOR(Green);
        C_GEAR_INFO_COLOR(Orange);
        C_GEAR_INFO_COLOR(Purple);
        C_GEAR_INFO_COLOR(Red);
    };
};
