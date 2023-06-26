#define QUOTE(var1) #var1
#define TEXTURE(var1) QUOTE(\z\sws\addons\arsenal\assets\textures\var1)

class XtdGearModels
{
    class CfgWeapons
    {
        class SWS_Operative_Armor
        {
            label = "[SWS] Armor";
            icon = "\sws_main\assets\icon_sws.paa";
            options[] = {"Operative"};

            class Operative
            {
                label = "Operative";
                values[] = {"Tiger", "Egg", "Polaris"};
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
        };
    };
};

#define GEAR_INFO(name)                \
    class SWS_Vest_##name              \
    {                                  \
        model = "SWS_Operative_Armor"; \
        Operative = #name;             \
    }

/**
 *  Include all variants of this armor in a single item.
 */
class XtdGearInfos
{
    class CfgWeapons
    {
        GEAR_INFO(Tiger);
        GEAR_INFO(Egg);
        GEAR_INFO(Polaris);
    };
};

class CfgPatches
{
    class SWS_Arsenal
    {
        author = "Maid";
        requiredAddons[] = {
            "SWS_Main"};
        requiredVersion = 0.1;
        weapons[] = {
            "SWS_Helmet_Tiger",
            "SWS_Helmet_Egg",
            "SWS_Vest_Tiger",
            "SWS_Vest_Egg",
            "SWS_Vest_Polaris"};
        units[] = {};
    };
};

class CfgWeapons
{
#include "cfgWeapons\_cfg.h"
};

class CfgGlasses
{
    class LM_OPCAN_DES_Shemagh;
    class SWS_Shemagh_Pink : LM_OPCAN_DES_Shemagh
    {
        author = "Tiger";
        displayname = "[SWS] Shemagh (Pink)";
        hiddenSelectionsTextures[] = {
            TEXTURE(Shemagh_pink.paa)};
    };
};
