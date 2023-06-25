#define QUOTE(var1) #var1
#define TEXTURE(var1) QUOTE(\z\sws\addons\arsenal\assets\textures\var1)

// TODO: multiple selection options
// class XtdGearModels
// {
//     class CustomBase
//     {
//         label = "Custom";
//         icon = "\sws_main\assets\icon_sws.paa";
//         changeingame = 0;
//         values[] = {};

//         class Tiger
//         {
//             label = "Tiger";
//             image = "\sws_main\assets\icon_sws.paa";
//         };
//     };
//     class CfgWeapons
//     {
//         class SWS_Armor
//         {
//             options[] = {
//                 "custom"};

//             class custom : CustomBase
//             {
//                 values[] = {"Tiger"};
//             };
//         };
//     };

//     class Conventional
//     {
//         class Custom : CustomBase
//         {
//         };
//     };
// };

// /**
//  *  Include all variants of this armor in a single item.
//  */
// class XtdGearInfos
// {
//     class CfgWeapons
//     {
//         class SWS_Tiger
//         {
//             Model = "SWS_Armor";
//             Custom = "Base";
//             Variant = "Demolitions";
//         };
//     };
// };

class CfgPatches
{
    class SWS_Arsenal
    {
        author = "Maid";
        requiredAddons[] = {
            "SWS_Main"};
        requiredVersion = 0.1;
        weapons[] = {
            "SWS_Vest_Tiger", "SWS_Helmet_Tiger", "SWS_Vest_Egg",
            "SWS_Helmet_Egg", "SWS_Vest_Tiger"};
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
