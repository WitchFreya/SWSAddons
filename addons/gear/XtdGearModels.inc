#define VARIANT(Type)                            \
    class Type                                   \
    {                                            \
        label = QUOTE(Type);                     \
        description = QUOTE(Type Configuration); \
    }

#define VEST_GEAR_INFO_ONE(name,varVariant)                                         \
    class SWS_Vest_##name##_##varVariant : SWS_Vest_##name                            \
    {                                                                               \
        model = QUOTE(TRIPLES(PREFIX,Operative,Armor));                             \
        Operative = QUOTE(name);                                                    \
        Variant = QUOTE(varVariant);                                                \
        Ghillie = "No";                                                             \
    };                                                                              \
    class SWS_Vest_##name##_##varVariant##_Ghillie : SWS_Vest_##name##_##varVariant  \
    {                                                                               \
        Ghillie = "Yes";                                                            \
    }

#define VEST_GEAR_INFO(name)                            \
    class SWS_Vest_##name                                    \
    {                                                   \
        model = QUOTE(TRIPLES(PREFIX,Operative,Armor)); \
        Operative = QUOTE(name);                        \
        Variant = "Standard";                           \
        Ghillie = "No";                                 \
    };                                                  \
    class SWS_Vest_##name##_Ghillie  : SWS_Vest_##name      \
    {                                                   \
        Ghillie = "Yes";                                \
    };                                                  \
    VEST_GEAR_INFO_ONE(name,Demolitions);               \
    VEST_GEAR_INFO_ONE(name,Sniper);                    \
    VEST_GEAR_INFO_ONE(name,Copilot);                    \
    VEST_GEAR_INFO_ONE(name,Light);                     \
    VEST_GEAR_INFO_ONE(name,Scout);                     \
    VEST_GEAR_INFO_ONE(name,Rifleman);                  \
    VEST_GEAR_INFO_ONE(name,Marksman)

#define HELMET_GEAR_INFO_BASE(name)                         \
    class DOUBLES(SWS_Helmet,name)                                     \
    {                                                       \
        model = "SWS_Operative_Helmet";    \
        operative = QUOTE(name);                            \
        collar = "No";                                      \
        ghillie = "No";                                     \
    }

#define HELMET_GEAR_INFO_VARIANT(name,variant,varCollar,varGhillie)         \
    class TRIPLES(SWS_Helmet,name,variant) : DOUBLES(SWS_Helmet,name)                      \
    {                                                                       \
        collar = QUOTE(varCollar);                                          \
        ghillie = QUOTE(varGhillie);                                        \
    }

#define HELMET_GEAR_INFO(name)                              \
    HELMET_GEAR_INFO_BASE(name);                            \
    HELMET_GEAR_INFO_VARIANT(name,Collar,Yes,No);           \
    HELMET_GEAR_INFO_VARIANT(name,Collar_Ghillie,Yes,Yes);  \
    HELMET_GEAR_INFO_VARIANT(name,Ghillie,No,Yes)

#define GEAR_INFO(name)     \
    HELMET_GEAR_INFO(name); \
    VEST_GEAR_INFO(name)

#define OPERATIVES \
    "Rifleman", "Ashes", "Butler", "Demon", "Egg", "Maid", "Polaris", "Rabbit", "Sawbones", "Tiger", \
    "Hound", "Kitty", "Hurricane", "Roman"

#define XTDGEARMODEL_OPERATIVE(operative,type) \
    class operative                             \
    {                                           \
        label = QUOTE(operative);               \
        description = QUOTE(operative's type); \
    }

#define XTDGEARMODEL_OPERATIVE_HELMET(operative) XTDGEARMODEL_OPERATIVE(operative, Helmet)
#define XTDGEARMODEL_OPERATIVE_VEST(operative) XTDGEARMODEL_OPERATIVE(operative, Armor)

class XtdGearModels
{
    class CfgWeapons
    {
        class TRIPLES(PREFIX,Operative,Helmet)
        {
            label = QNAME(Operative Helmets);
            icon = "\sws_main\data\icon_sws_ca.paa";
            options[] = {"Operative", "Collar", "Ghillie"};
            class Operative
            {
                label = "Operative";
                values[] = {OPERATIVES};
                XTDGEARMODEL_OPERATIVE_HELMET(Rifleman);
                XTDGEARMODEL_OPERATIVE_HELMET(Ashes);
                XTDGEARMODEL_OPERATIVE_HELMET(Butler);
                XTDGEARMODEL_OPERATIVE_HELMET(Demon);
                XTDGEARMODEL_OPERATIVE_HELMET(Egg);
                XTDGEARMODEL_OPERATIVE_HELMET(Maid);
                XTDGEARMODEL_OPERATIVE_HELMET(Polaris);
                XTDGEARMODEL_OPERATIVE_HELMET(Rabbit);
                XTDGEARMODEL_OPERATIVE_HELMET(Sawbones);
                XTDGEARMODEL_OPERATIVE_HELMET(Tiger);
                XTDGEARMODEL_OPERATIVE_HELMET(Hound);
                XTDGEARMODEL_OPERATIVE_HELMET(Kitty);
                XTDGEARMODEL_OPERATIVE_HELMET(Hurricane);
                XTDGEARMODEL_OPERATIVE_HELMET(Roman);
            };

            class Collar
            {
                label = "Vacuum Collar";
                values[] = {"Yes", "No"};

                class Yes
                {
                    label = "Yes";
                    description = "Include a vacuum collar.";
                };

                class No
                {
                    label = "No";
                    description = "Exclude a vacuum collar";
                };
            };

            class Ghillie
            {
                label = "Ghillie";
                values[] = {"Yes", "No"};

                class Yes
                {
                    label = "Yes";
                    description = "Ghillie me.";
                };
                class No
                {
                    label = "No";
                    description = "Ghillie is lame.";
                };
            };
        };

        class TRIPLES(PREFIX,Color,Helmet) : TRIPLES(PREFIX,Operative,Helmet) {
            label = QNAME(Generic Helmets);
            options[] = {"Color", "Collar", "Ghillie"};
            delete Operative;
            class Color {
                values[] = {"Blue","Gold","Green","Orange","Purple","Red"};

                class Blue {
                    label = "Blue";
                    description = "A generic blue helmet";
                };
                class Gold {
                    label = "Gold";
                    description = "A generic gold helmet";
                };
                class Green {
                    label = "Green";
                    description = "A generic green helmet";
                };
                class Orange {
                    label = "Orange";
                    description = "A generic orange helmet";
                };
                class Purple {
                    label = "Purple";
                    description = "A generic purple helmet";
                };
                class Red {
                    label = "Red";
                    description = "A generic red helmet";
                };
            };
        };

        class TRIPLES(PREFIX,Operative,Armor)
        {
            label = QNAME(Operative Armor);
            icon = "\sws_main\data\icon_sws_ca.paa";
            options[] = {"Operative", "Variant", "Ghillie"};

            class Operative
            {
                label = "Operative";
                values[] = {OPERATIVES};
                XTDGEARMODEL_OPERATIVE_VEST(Rifleman);
                XTDGEARMODEL_OPERATIVE_VEST(Ashes);
                XTDGEARMODEL_OPERATIVE_VEST(Butler);
                XTDGEARMODEL_OPERATIVE_VEST(Demon);
                XTDGEARMODEL_OPERATIVE_VEST(Egg);
                XTDGEARMODEL_OPERATIVE_VEST(Maid);
                XTDGEARMODEL_OPERATIVE_VEST(Polaris);
                XTDGEARMODEL_OPERATIVE_VEST(Rabbit);
                XTDGEARMODEL_OPERATIVE_VEST(Sawbones);
                XTDGEARMODEL_OPERATIVE_VEST(Tiger);
                XTDGEARMODEL_OPERATIVE_VEST(Hound);
                XTDGEARMODEL_OPERATIVE_VEST(Kitty);
                XTDGEARMODEL_OPERATIVE_VEST(Hurricane);
                XTDGEARMODEL_OPERATIVE_VEST(Roman);
            };

            class Variant
            {
                label = "Variant";
                values[] = {
                    "Standard",
                    "Demolitions",
                    "Sniper",
                    "Copilot",
                    "Light",
                    "Scout",
                    "Rifleman",
                    "Marksman",
                    "Lead"};

                VARIANT(Standard);
                VARIANT(Demolitions);
                VARIANT(Sniper);
                VARIANT(Copilot);
                VARIANT(Light);
                VARIANT(Scout);
                VARIANT(Rifleman);
                VARIANT(Marksman);
                VARIANT(Lead);
            };

            class Ghillie
            {
                label = "Ghillie";
                values[] = {"Yes", "No"};

                class Yes
                {
                    label = "Yes";
                    description = "Ghillie me.";
                };
                class No
                {
                    label = "No";
                    description = "Ghillie is lame.";
                };
            };
        };

        class TRIPLES(PREFIX,Color,Armor) : TRIPLES(PREFIX,Operative,Armor) {
            delete Operative;
            label = QNAME(Generic Armor);
            options[] = {"Color","Variant","Ghillie"};
            class Color {
                values[] = {"Blue","Gold","Green","Orange","Purple","Red"};
                class Blue {
                    label = "Blue";
                    description = "A generic blue helmet";
                };
                class Gold {
                    label = "Gold";
                    description = "A generic gold helmet";
                };
                class Green {
                    label = "Green";
                    description = "A generic green helmet";
                };
                class Orange {
                    label = "Orange";
                    description = "A generic orange helmet";
                };
                class Purple {
                    label = "Purple";
                    description = "A generic purple helmet";
                };
                class Red {
                    label = "Red";
                    description = "A generic red helmet";
                };
            };
        };
    };
};
