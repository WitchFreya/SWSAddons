#define HELMET_DISPLAY_NAME(name) QUOTE([SWS] name's Helmet)

class SWS_Helmet_Base : OPTRE_UNSC_CH252D_Helmet_Base
{
    dlc = "sws";
    scope = 0;
    scopeCurator = 0;
    scopearsenal = 0;

    descriptionShort = "Armor Level: ODST";
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
    }
