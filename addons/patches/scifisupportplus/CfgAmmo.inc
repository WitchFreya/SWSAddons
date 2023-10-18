#define CLASSES_AMMO \
    "mortar_155mm_AMOS"

class CfgAmmo
{
    class Default;

    class OPAEX_A_GBU1105_LGB;
    class OPAEX_Glass_Round;

    // pollution
    class mortar_155mm_AMOS : Default {};

    // errors caused by pollution
    class PHAN_OPAEX_A_GBU1105_LGB : OPAEX_A_GBU1105_LGB {};
    class PHAN_OPAEX_Glass_Round : OPAEX_Glass_Round {};
};
