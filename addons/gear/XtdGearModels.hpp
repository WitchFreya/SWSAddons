#define VARIANT(Type)                            \
    class Type                                   \
    {                                            \
        label = QUOTE(Type);                     \
        description = QUOTE(Type Configuration); \
    }

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
    HELMET_GEAR_INFO_VARIANT(name, Collar, Yes, No);          \
    HELMET_GEAR_INFO_VARIANT(name, Collar_Ghillie, Yes, Yes); \
    HELMET_GEAR_INFO_VARIANT(name, Ghillie, No, Yes)

#define GEAR_INFO(name)     \
    HELMET_GEAR_INFO(name); \
    VEST_GEAR_INFO(name)

#define OPERATIVES \
    "Rifleman", "Butler", "Demon", "Egg", "Maid", "Polaris", "Rabbit", "Sawbones", "Tiger"

#define XTDGEARMODEL_OPERATIVE(operative, type) \
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
        class SWS_Operative_Helmet
        {
            label = "[SWS] Helmet";
            icon = "\sws_main\assets\icon_sws.paa";
            options[] = {"Operative", "Polarization", "Collar", "Ghillie"};
            class Operative
            {
                label = "Operative";
                values[] = {OPERATIVES};
                XTDGEARMODEL_OPERATIVE_HELMET(Rifleman);
                XTDGEARMODEL_OPERATIVE_HELMET(Butler);
                XTDGEARMODEL_OPERATIVE_HELMET(Demon);
                XTDGEARMODEL_OPERATIVE_HELMET(Egg);
                XTDGEARMODEL_OPERATIVE_HELMET(Maid);
                XTDGEARMODEL_OPERATIVE_HELMET(Polaris);
                XTDGEARMODEL_OPERATIVE_HELMET(Rabbit);
                XTDGEARMODEL_OPERATIVE_HELMET(Sawbones);
                XTDGEARMODEL_OPERATIVE_HELMET(Tiger);
            };

            class Polarization
            {
                values[] = {"Yes", "No"};

                class Yes
                {
                    label = "Yes";
                    description = "Your visor will be opaque, toggled by the HUD key.";
                };

                class No
                {
                    label = "No";
                    description = "Your visor will be translucent, toggled by the HUD key.";
                };
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

        class SWS_Operative_Armor
        {
            label = "[SWS] Armor";
            icon = "\sws_main\assets\icon_sws.paa";
            options[] = {"Operative", "Variant", "Ghillie"};

            class Operative
            {
                label = "Operative";
                values[] = {OPERATIVES};
                XTDGEARMODEL_OPERATIVE_VEST(Rifleman);
                XTDGEARMODEL_OPERATIVE_VEST(Butler);
                XTDGEARMODEL_OPERATIVE_VEST(Demon);
                XTDGEARMODEL_OPERATIVE_VEST(Egg);
                XTDGEARMODEL_OPERATIVE_VEST(Maid);
                XTDGEARMODEL_OPERATIVE_VEST(Polaris);
                XTDGEARMODEL_OPERATIVE_VEST(Rabbit);
                XTDGEARMODEL_OPERATIVE_VEST(Sawbones);
                XTDGEARMODEL_OPERATIVE_VEST(Tiger);
            };

            class Variant
            {
                label = "Variant";
                values[] = {
                    "Standard",
                    "Demolitions",
                    "Sniper",
                    "Light",
                    "Scout",
                    "Rifleman",
                    "Marksman"};

                VARIANT(Standard);
                VARIANT(Demolitions);
                VARIANT(Sniper);
                VARIANT(Light);
                VARIANT(Scout);
                VARIANT(Rifleman);
                VARIANT(Marksman);
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
    };

    class CfgGlasses
    {
        class SWS_Shemagh
        {
            label = "[SWS] Shemagh";
            author = "Maid";
            options[] = {"Color", "Variant"};

            class Color
            {
                label = "Color";
                values[] = {"Pink"};

                class Pink
                {
                    label = "Pink";
                    description = "A pink shemagh.";
                };
            };

            class Variant
            {
                label = "Variant";
                values[] = {"Up", "Down"};

                class Up
                {
                    label = "Up";
                    description = "Hide my nose and mouth too.";
                };

                class Down
                {
                    label = "Down";
                    description = "Just keep my neck warm.";
                };
            };
        };
    };
};
