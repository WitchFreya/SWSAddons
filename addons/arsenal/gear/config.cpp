#include "dependencies\common.hpp"
#include "dependencies\arma.hpp"
#include "dependencies\optre.hpp"
#include "dependencies\opcan.hpp"

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
            "OPTRE_UNSC_Units",
            "LM_OPCAN_UNSC",
            "SWS_Arsenal"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {
            CLASSES(Butler),
            CLASSES(Demon),
            CLASSES(Egg),
            CLASSES(Maid),
            CLASSES(Polaris),
            CLASSES(Rabbit),
            CLASSES(Rifleman),
            CLASSES(Tiger)};
    };
};

class CfgWeapons
{
#include "base\helmet.hpp"
#include "base\vest.hpp"
#include "rifleman.hpp"
#include "operatives\butler.hpp"
#include "operatives\demon.hpp"
#include "operatives\egg.hpp"
#include "operatives\maid.hpp"
#include "operatives\polaris.hpp"
#include "operatives\rabbit.hpp"
#include "operatives\tiger.hpp"
};

class CfgGlasses
{
#include "pink_shemagh.hpp"
};

class XtdGearModels
{
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
