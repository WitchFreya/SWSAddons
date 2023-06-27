#define HELMET_DISPLAY_NAME(name) QUOTE([SWS] name's Helmet)
#define HELMET_DPDISPLAY_NAME(name) QUOTE([SWS] name's Helmet (Depolarized))

class SWS_Helmet_Base : OPTRE_UNSC_CH252D_Helmet_Base
{
    dlc = "sws";
    scope = 0;
    scopeCurator = 0;
    scopearsenal = 0;

    descriptionShort = "Armor Level: ODST";
    hiddenSelectionsMaterials[] = {
        MATERIAL(odsthud.rvmat)};

    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
            {
                "camo",
                "camo2",
                "H_Ghillie"};
    };
};

/**
 * OPTRE swaps out helmet with a different class when you turn off the HUD.
 */
class SWS_Helmet_Base_dp : OPTRE_UNSC_CH252D_Helmet_dp
{
    dlc = "sws";
    scope = 0;
    scopeCurator = 0;
    scopearsenal = 0;

    descriptionShort = "Armor Level: ODST";
    hiddenSelectionsMaterials[] = {
        MATERIAL(odsthud.rvmat)};

    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
            {
                "camo",
                "camo2",
                "H_Ghillie"};
    };
};

#define HELMET(name, texHelmet, texVisor, texGhillie, texPacks) \
    class SWS_Helmet_##name : SWS_Helmet_Base                   \
    {                                                           \
        scope = 2;                                              \
        scopeCurator = 2;                                       \
        scopeArsenal = 2;                                       \
        displayName = HELMET_DISPLAY_NAME(name);                \
        hiddenSelectionsTextures[] = {                          \
            texHelmet,                                          \
            texVisor,                                           \
            texGhillie,                                         \
            texPacks};                                          \
    };                                                          \
    class SWS_Helmet_##name##_dp : SWS_Helmet_Base_dp           \
    {                                                           \
        scope = 2;                                              \
        scopeCurator = 2;                                       \
        scopeArsenal = 2;                                       \
        displayName = HELMET_DPDISPLAY_NAME(name);              \
        hiddenSelectionsTextures[] = {                          \
            texHelmet,                                          \
            TEXTURE(visr_clr.paa),                              \
            texGhillie,                                         \
            texPacks};                                          \
    }
