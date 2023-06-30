#include "script_component.hpp"

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
    class ADDON
    {
        name = QUOTE(COMPONENT);
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
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_UNSC_Units",
            "LM_OPCAN_UNSC",
            "SWS_Arsenal"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
