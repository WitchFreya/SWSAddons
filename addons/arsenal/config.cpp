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

#define VEST_GEAR_INFO(name)                              \
    class SWS_Vest_##name                                 \
    {                                                     \
        model = "SWS_Operative_Armor";                    \
        Operative = #name;                                \
        Variant = "Standard";                             \
    };                                                    \
    class SWS_Vest_##name##_Demolitions : SWS_Vest_##name \
    {                                                     \
        Variant = "Demolitions";                          \
    };                                                    \
    class SWS_Vest_##name##_Sniper : SWS_Vest_##name      \
    {                                                     \
        Variant = "Sniper";                               \
    };                                                    \
    class SWS_Vest_##name##_Light : SWS_Vest_##name       \
    {                                                     \
        Variant = "Light";                                \
    };                                                    \
    class SWS_Vest_##name##_Scout : SWS_Vest_##name       \
    {                                                     \
        Variant = "Scout";                                \
    };                                                    \
    class SWS_Vest_##name##_Rifleman : SWS_Vest_##name    \
    {                                                     \
        Variant = "Rifleman";                             \
    };                                                    \
    class SWS_Vest_##name##_Marksman : SWS_Vest_##name    \
    {                                                     \
        Variant = "Marksman";                             \
    }

#define HELMET_GEAR_INFO(name)                                       \
    class SWS_Helmet_##name                                          \
    {                                                                \
        model = "SWS_Operative_Helmet";                              \
        operative = QUOTE(name);                                     \
        polarization = "Yes";                                        \
        collar = "No";                                               \
    };                                                               \
    class SWS_Helmet_##name##_dp : SWS_Helmet_##name                 \
    {                                                                \
        polarization = "No";                                         \
    };                                                               \
    class SWS_Helmet_##name##_Collar : SWS_Helmet_##name             \
    {                                                                \
        collar = "Yes";                                              \
    };                                                               \
    class SWS_Helmet_##name##_Collar_dp : SWS_Helmet_##name##_Collar \
    {                                                                \
        polarization = "No";                                         \
    }

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
            options[] = {"Operative", "Polarization", "Collar"};
            class Operative
            {

                values[] = {"Tiger", "Egg", "Polaris", "Maid"};

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
        };

        class SWS_Operative_Armor
        {
            label = "[SWS] Armor";
            icon = "\sws_main\assets\icon_sws.paa";
            options[] = {"Operative", "Variant"};

            class Operative
            {
                label = "Operative";
                values[] = {"Rifleman", "Tiger", "Egg", "Polaris"};
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
        HELMET_GEAR_INFO(Maid);
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
