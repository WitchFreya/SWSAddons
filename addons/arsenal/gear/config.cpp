#define QUOTE(var) #var
#define BASE_PATH \z\sws\addons\arsenal
#define ASSETS BASE_PATH\assets
#define TEXTURE(file) QUOTE(ASSETS\textures\file)
#define MATERIAL(file) QUOTE(ASSETS\materials\file)

#define VEST_CLASS(name) SWS_Vest_##name
#define VEST_CLASSES(name)                     \
    QUOTE(VEST_CLASS(name)),                   \
        QUOTE(VEST_CLASS(name)##_Demolitions), \
        QUOTE(VEST_CLASS(name)##_Sniper),      \
        QUOTE(VEST_CLASS(name)##_Light),       \
        QUOTE(VEST_CLASS(name)##_Scout),       \
        QUOTE(VEST_CLASS(name)##_Rifleman),    \
        QUOTE(VEST_CLASS(name)##_Marksman)

#define HELMET_CLASS(name) SWS_Helmet_##name
#define HELMET_CLASSES(name) QUOTE(HELMET_CLASS(name)), \
                             QUOTE(HELMET_CLASS(name)##_dp)

#define CLASSES(name)     \
    HELMET_CLASSES(name), \
        VEST_CLASSES(name)

class CfgPatches
{
    class SWS_Arsenal_Gear
    {
        addonRootClass = "SWS_Arsenal";
        author = "Maid";
        requiredAddons[] = {
            "SWS_Arsenal"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {
            CLASSES(Base),
            CLASSES(Tiger),
            CLASSES(Egg),
            CLASSES(Polaris)};
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
