#include "..\dependencies\common.hpp"
#define VEST_DISPLAY_NAME(name) displayName = QUOTE([SWS] name's Vest)

#define VEST_SELECTIONS_BASE "camo",  \
                             "camo2", \
                             "camo3", \
                             "camo4", \
                             "camo5"

#define VEST_SELECTIONS_MARINE "A_KneesMarLeft",  \
                               "A_KneesMarRight", \
                               "AS_LargeLeft",    \
                               "AS_LargeRight",   \
                               "AS_MediumLeft",   \
                               "AS_MediumRight"

#define VEST_SELECTIONS_STANDARD VEST_SELECTIONS_BASE,   \
                                 VEST_SELECTIONS_MARINE, \
                                 "A_TacPad",             \
                                 "AS_LargeLeft",         \
                                 "AS_LargeRight",        \
                                 "AS_MediumLeft",        \
                                 "AS_MediumRight",       \
                                 "AS_ODSTCQBLeft",       \
                                 "AS_ODSTCQBRight",      \
                                 "AS_ODSTSniperLeft",    \
                                 "AS_ODSTSniperRight",   \
                                 "AS_SmallLeft",         \
                                 "AS_SmallRight",        \
                                 "AP_AR",                \
                                 "AP_BR",                \
                                 "AP_Canteen",           \
                                 "AP_GL",                \
                                 "AP_Knife",             \
                                 "AP_MGThigh",           \
                                 "AP_AR",                \
                                 "AP_Pack",              \
                                 "AP_Pistol",            \
                                 "AP_Rounds",            \
                                 "AP_SG",                \
                                 "AP_SMG",               \
                                 "AP_Sniper",            \
                                 "AP_Thigh",             \
                                 "AP_Frag",              \
                                 "AP_Smoke",             \
                                 "APO_AR",               \
                                 "APO_BR",               \
                                 "APO_Knife",            \
                                 "APO_SMG",              \
                                 "APO_Sniper",           \
                                 "CustomKit_Scorch"

#define VEST_SELECTIONS_DEMOLITIONS VEST_SELECTIONS_BASE,   \
                                    VEST_SELECTIONS_MARINE, \
                                    "A_TacPad",             \
                                    "AS_ODSTLeft",          \
                                    "AS_ODSTCQBRight",      \
                                    "AS_ODSTSniperLeft",    \
                                    "AS_ODSTSniperRight",   \
                                    "AS_SmallLeft",         \
                                    "AS_SmallRight",        \
                                    "AP_AR",                \
                                    "AP_BR",                \
                                    "AP_Canteen",           \
                                    "AP_Knife",             \
                                    "AP_MGThigh",           \
                                    "AP_Pack",              \
                                    "AP_Pistol",            \
                                    "AP_Rounds",            \
                                    "AP_SG",                \
                                    "AP_SMG",               \
                                    "AP_Sniper",            \
                                    "AP_Thigh",             \
                                    "AP_Frag",              \
                                    "AP_Smoke",             \
                                    "APO_AR",               \
                                    "APO_BR",               \
                                    "APO_SMG",              \
                                    "APO_Sniper",           \
                                    "APO_Knife"

#define VEST_SELECTIONS_SNIPER VEST_SELECTIONS_BASE,   \
                               VEST_SELECTIONS_MARINE, \
                               "A_TacPad",             \
                               "AS_ODSTLeft",          \
                               "AS_ODSTRight",         \
                               "AS_ODSTCQBLeft",       \
                               "AS_ODSTCQBRight",      \
                               "AS_ODSTSniperRight",   \
                               "AS_SmallLeft",         \
                               "AS_SmallRight",        \
                               "AP_AR",                \
                               "AP_BR",                \
                               "AP_Canteen",           \
                               "AP_GL",                \
                               "AP_Knife",             \
                               "AP_MGThigh",           \
                               "AP_Pack",              \
                               "AP_Rounds",            \
                               "AP_SG",                \
                               "AP_SMG",               \
                               "AP_Sniper",            \
                               "AP_Thigh",             \
                               "AP_Frag",              \
                               "AP_Smoke",             \
                               "APO_AR",               \
                               "APO_BR",               \
                               "APO_SMG",              \
                               "CustomKit_Scorch"

#define VEST_SELECTIONS_LIGHT VEST_SELECTIONS_BASE, VEST_SELECTIONS_MARINE, \
                              "AS_ODSTLeft",                                \
                              "AS_ODSTRight",                               \
                              "AS_ODSTCQBLeft",                             \
                              "AS_ODSTCQBRight",                            \
                              "AS_ODSTSniperLeft",                          \
                              "AS_ODSTSniperRight",                         \
                              "AS_SmallLeft",                               \
                              "AS_SmallRight",                              \
                              "AP_AR",                                      \
                              "AP_BR",                                      \
                              "AP_Canteen",                                 \
                              "AP_GL",                                      \
                              "AP_Knife",                                   \
                              "AP_MGThigh",                                 \
                              "AP_Pack",                                    \
                              "AP_Rounds",                                  \
                              "AP_SG",                                      \
                              "AP_SMG",                                     \
                              "AP_Sniper",                                  \
                              "AP_Frag",                                    \
                              "AP_Smoke",                                   \
                              "APO_AR",                                     \
                              "APO_BR",                                     \
                              "APO_Knife",                                  \
                              "APO_SMG",                                    \
                              "APO_Sniper",                                 \
                              "CustomKit_Scorch"

#define VEST_SELECTIONS_SCOUT VEST_SELECTIONS_BASE, VEST_SELECTIONS_MARINE, \
                              "A_TacPad",                                   \
                              "AS_ODSTCQBLeft",                             \
                              "AS_ODSTCQBRight",                            \
                              "AS_ODSTSniperLeft",                          \
                              "AS_ODSTSniperRight",                         \
                              "AS_SmallLeft",                               \
                              "AS_SmallRight",                              \
                              "AP_AR",                                      \
                              "AP_BR",                                      \
                              "AP_Canteen",                                 \
                              "AP_GL",                                      \
                              "AP_Knife",                                   \
                              "AP_MGThigh",                                 \
                              "AP_Pack",                                    \
                              "AP_Pistol",                                  \
                              "AP_Rounds",                                  \
                              "AP_SG",                                      \
                              "AP_SMG",                                     \
                              "AP_Sniper",                                  \
                              "AP_Thigh",                                   \
                              "AP_Frag",                                    \
                              "APO_AR",                                     \
                              "APO_BR",                                     \
                              "APO_Sniper",                                 \
                              "CustomKit_Scorch"

#define VEST_SELECTIONS_RIFLEMAN VEST_SELECTIONS_BASE, VEST_SELECTIONS_MARINE, \
                                 "A_TacPad",                                   \
                                 "AS_ODSTCQBLeft",                             \
                                 "AS_ODSTCQBRight",                            \
                                 "AS_ODSTSniperLeft",                          \
                                 "AS_ODSTSniperRight",                         \
                                 "AS_SmallLeft",                               \
                                 "AS_SmallRight",                              \
                                 "AP_AR",                                      \
                                 "AP_BR",                                      \
                                 "AP_Canteen",                                 \
                                 "AP_GL",                                      \
                                 "AP_Knife",                                   \
                                 "AP_MGThigh",                                 \
                                 "AP_Pack",                                    \
                                 "AP_Pistol",                                  \
                                 "AP_Rounds",                                  \
                                 "AP_SG",                                      \
                                 "AP_SMG",                                     \
                                 "AP_Sniper",                                  \
                                 "AP_Thigh",                                   \
                                 "APO_BR",                                     \
                                 "APO_Knife",                                  \
                                 "APO_SMG",                                    \
                                 "APO_Sniper",                                 \
                                 "CustomKit_Scorch"

#define VEST_SELECTIONS_MARKSMAN VEST_SELECTIONS_BASE, VEST_SELECTIONS_MARINE, \
                                 "A_TacPad",                                   \
                                 "AS_ODSTCQBLeft",                             \
                                 "AS_ODSTCQBRight",                            \
                                 "AS_ODSTSniperLeft",                          \
                                 "AS_ODSTSniperRight",                         \
                                 "AS_SmallLeft",                               \
                                 "AS_SmallRight",                              \
                                 "AP_AR",                                      \
                                 "AP_BR",                                      \
                                 "AP_Canteen",                                 \
                                 "AP_GL",                                      \
                                 "AP_Knife",                                   \
                                 "AP_MGThigh",                                 \
                                 "AP_Pack",                                    \
                                 "AP_Pistol",                                  \
                                 "AP_Rounds",                                  \
                                 "AP_SG",                                      \
                                 "AP_SMG",                                     \
                                 "AP_Sniper",                                  \
                                 "APO_AR",                                     \
                                 "APO_SMG",                                    \
                                 "APO_Sniper",                                 \
                                 "CustomKit_Scorch"

class SWS_Vest_Base : OPTRE_UNSC_M52D_Armor
{
    ITEM_META(0);

    /** Armor Level is meaningless anyway... */
    descriptionShort = "Armor Level: ODST";

    hiddenSelectionsMaterials[] = {
        MATERIAL(Vest.rvmat),
        MATERIAL(Armor.rvmat),
        MATERIAL(Legs.rvmat),
        MATERIAL(ODST.rvmat)};
};

#define VEST_BASE(name, texVest, vexArmor, texLegs, texGhillie, texAddons) \
    class SWS_Vest_##name : SWS_Vest_Base                                  \
    {                                                                      \
        SCOPE(2);                                                          \
        VEST_DISPLAY_NAME(name);                                           \
        hiddenSelectionsTextures[] = {                                     \
            texVest,                                                       \
            texArmor,                                                      \
            texLegs,                                                       \
            texGhillie,                                                    \
            texAddons};                                                    \
        class ItemInfo : ItemInfo                                          \
        {                                                                  \
            hiddenSelections[] = {VEST_SELECTIONS_STANDARD, "A_Ghillie"};               \
        };                                                                 \
    };                                                                     \
    class SWS_Vest_##name##_Ghillie : SWS_Vest_##name                      \
    {                                                                      \
        class ItemInfo : ItemInfo                                          \
        {                                                                  \
            hiddenSelections[] = {VEST_SELECTIONS_STANDARD};  \
        };                                                                 \
    }

#define VEST_VARIANT(name, variant, selections)                   \
    class SWS_Vest_##name##_##variant : SWS_Vest_##name           \
    {                                                             \
        class ItemInfo : ItemInfo                                 \
        {                                                         \
            hiddenSelections[] = {WITH(selections, "A_Ghillie")}; \
        };                                                        \
    };                                                            \
    class SWS_Vest_##name##_##variant##_Ghillie : SWS_Vest_##name \
    {                                                             \
        class ItemInfo : ItemInfo                                 \
        {                                                         \
            hiddenSelections[] = {selections};                    \
        };                                                        \
    }

#define VEST(name, texVest, texArmor, texLegs, texGhillie, texAddons)   \
    VEST_BASE(name, texVest, texArmor, texLegs, texGhillie, texAddons); \
    VEST_VARIANT(name,Demolitions, VEST_SELECTIONS_DEMOLITIONS);       \
    VEST_VARIANT(name,Sniper, VEST_SELECTIONS_SNIPER);                 \
    VEST_VARIANT(name,Light, VEST_SELECTIONS_LIGHT);                   \
    VEST_VARIANT(name,Scout, VEST_SELECTIONS_SCOUT);                   \
    VEST_VARIANT(name,Rifleman, VEST_SELECTIONS_RIFLEMAN);             \
    VEST_VARIANT(name,Marksman, VEST_SELECTIONS_MARKSMAN)
