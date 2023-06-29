#define QUOTE(var) #var
#define BASE_PATH \z\sws\addons\arsenal
#define ASSETS BASE_PATH\assets
#define TEXTURE(file) QUOTE(ASSETS\textures\file)
#define MATERIAL(file) QUOTE(ASSETS\materials\file)

#define VEST_CLASS(name) QUOTE(SWS_Vest_##name)
#define VEST_CLASSES(name)                      \
    VEST_CLASS(name),                           \
        VEST_CLASS(name##_Demolitions),         \
        VEST_CLASS(name##_Sniper),              \
        VEST_CLASS(name##_Light),               \
        VEST_CLASS(name##_Scout),               \
        VEST_CLASS(name##_Rifleman),            \
        VEST_CLASS(name##_Marksman),            \
        VEST_CLASS(name##_Ghillie),             \
        VEST_CLASS(name##_Demolitions_Ghillie), \
        VEST_CLASS(name##_Sniper_Ghillie),      \
        VEST_CLASS(name##_Light_Ghillie),       \
        VEST_CLASS(name##_Scout_Ghillie),       \
        VEST_CLASS(name##_Rifleman_Ghillie),    \
        VEST_CLASS(name##_Marksman_Ghillie)

#define HELMET_CLASS(name)    \
    QUOTE(SWS_Helmet_##name), \
        QUOTE(SWS_Helmet_##name##_dp)

#define HELMET_CLASSES(name)          \
    HELMET_CLASS(name),               \
        HELMET_CLASS(name##_Collar),  \
        HELMET_CLASS(name##_Ghillie), \
        HELMET_CLASS(name##_Collar_Ghillie)

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
            CLASSES(Demon),
            CLASSES(Butler),
            CLASSES(Rabbit),
            CLASSES(Maid)};
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
#include "demon.hpp"
#include "butler.hpp"
#include "rabbit.hpp"
};
