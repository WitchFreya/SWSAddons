#define BASE_PATH \z\sws\addons\arsenal
#define ASSETS BASE_PATH\assets
#define TEXTURE(file) QUOTE(ASSETS\textures\file)
#define QUOTE(var) #var
#define VARIANT(Type)                            \
    class Type                                   \
    {                                            \
        label = QUOTE(Type);                     \
        description = QUOTE(Type Configuration); \
    }

#define VEST_GEAR_INFO_ONE(name, varVariant)                                        \
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

                values[] = {"Tiger", "Egg", "Polaris", "Demon", "Maid"};

                class Tiger
                {
                    label = "Tiger";
                    description = "Tiger's Helmet";
                };
                class Egg
                {
                    label = "Egg";
                    description = "Egg's Helmet";
                };
                class Polaris
                {
                    label = "Polaris";
                    description = "Polaris's Helmet";
                };
                class Maid
                {
                    label = "Maid";
                    description = "Maid's Helmet";
                };

                class Demon
                {
                    label = "Demon";
                    description = "Demon's Helmet";
                };
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
                values[] = {"Rifleman", "Tiger", "Egg", "Polaris", "Demon"};
                class Rifleman
                {
                    label = "Rifleman";
                    description = "Basic Rifleman Armor";
                };
                class Tiger
                {
                    label = "Tiger";
                    description = "Tiger's Armor";
                };

                class Egg
                {
                    label = "Egg";
                    description = "Egg's Armor";
                };

                class Polaris
                {
                    label = "Polaris";
                    description = "Polaris' Armor";
                };

                class Demon
                {
                    label = "Demon";
                    description = "Demon's Armor";
                };
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
};

/**
 *  Include all variants of this armor in a single item.
 */
class XtdGearInfos
{
    class CfgWeapons
    {
        GEAR_INFO(Rifleman);
        GEAR_INFO(Tiger);
        GEAR_INFO(Egg);
        GEAR_INFO(Polaris);
        GEAR_INFO(Maid);
        VEST_GEAR_INFO(Demon);
    };
};

class CfgPatches
{
    class SWS_Arsenal
    {
        author = "Maid";
        requiredAddons[] = {
            "OPTRE_UNSC_Units",
            "SWS_Main"};
        requiredVersion = 0.1;
        weapons[] = {};
        units[] = {};
    };
};

class CfgGlasses
{
    class LM_OPCAN_DES_Shemagh;
    class SWS_Shemagh_Pink : LM_OPCAN_DES_Shemagh
    {
        displayname = "[SWS] Shemagh (Pink)";
        hiddenSelectionsTextures[] = {
            TEXTURE(shemagh_pink_co.paa)};
    };
};
