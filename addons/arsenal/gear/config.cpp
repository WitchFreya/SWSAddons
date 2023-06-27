#define QUOTE(var) #var
#define BASE_PATH \z\sws\addons\arsenal
#define ASSETS BASE_PATH\assets
#define TEXTURE(file) QUOTE(ASSETS\textures\file)
#define MATERIAL(file) QUOTE(ASSETS\materials\file)

#define VEST_CLASS(name) SWS_Vest_##name
#define VEST_CLASSES(name) QUOTE(VEST_CLASS(name)),               \
                           QUOTE(VEST_CLASS(name)##_Demolitions), \
                           QUOTE(VEST_CLASS(name)##_Sniper),      \
                           QUOTE(VEST_CLASS(name)##_Light),       \
                           QUOTE(VEST_CLASS(name)##_Scout),       \
                           QUOTE(VEST_CLASS(name)##_Rifleman),    \
                           QUOTE(VEST_CLASS(name)##_Marksman)

class CfgPatches
{
    class SWS_Arsenal_Gear
    {
        addonRootClass = "SWS_Arsenal";
        author = "Maid";
        requiredAddons = {
            "SWS_Arsenal"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {
            "SWS_Helmet_Base",
            "SWS_Helmet_Tiger",
            "SWS_Helmet_Egg",
            "SWS_Helmet_Polaris",
            VEST_CLASSES(Rifleman),
            VEST_CLASSES(Polaris),
            VEST_CLASSES(Egg),
            VEST_CLASSES(Tiger)};
    };
};

class CfgWeapons
{
    class ItemInfo;
#include "dependencies\optre.h"
#include "base\helmet.h"
#include "base\vest.h"
#include "rifleman.h"
#include "tiger.h"
#include "polaris.h"
#include "egg.h"
};
