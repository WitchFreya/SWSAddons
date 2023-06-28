#define QUOTE(var) #var
#define BASE_PATH \z\sws\addons\arsenal
#define ASSETS BASE_PATH\assets
#define TEXTURE(file) QUOTE(ASSETS\textures\file)
#define MATERIAL(file) QUOTE(ASSETS\materials\file)

#define VEST_CLASS(name) QUOTE(SWS_Vest_##name)
#define VEST_CLASSES(name)              \
    VEST_CLASS(name),                   \
        VEST_CLASS(name##_Demolitions), \
        VEST_CLASS(name##_Sniper),      \
        VEST_CLASS(name##_Light),       \
        VEST_CLASS(name##_Scout),       \
        VEST_CLASS(name##_Rifleman),    \
        VEST_CLASS(name##_Marksman)

#define HELMET_CLASS(name)    \
    QUOTE(SWS_Helmet_##name), \
        QUOTE(SWS_Helmet_##name##_dp)

#define HELMET_CLASSES(name) \
    HELMET_CLASS(name),      \
        HELMET_CLASS(name##_Collar)

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
            CLASSES(Rifleman),
            CLASSES(Tiger),
            CLASSES(Egg),
            CLASSES(Polaris),
            HELMET_CLASSES(Maid)};
    };
};

class CfgWeapons
{
#include "dependencies\arma.hpp"
#include "dependencies\optre.hpp"
#include "base\helmet.hpp"
#include "base\vest.hpp"
#include "rifleman.hpp"
#include "tiger.hpp"
#include "polaris.hpp"
#include "egg.hpp"
#include "maid.hpp"
};
