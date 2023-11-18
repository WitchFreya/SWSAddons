class SWS_Magazine_Viper_ATGM_Base : 4Rnd_120mm_LG_cannon_missiles
{
    ITEM_META(0);
    count = 0;
    ammo = "SWS_M_120mm_cannon_ATGM";
    displayName = QNAME(120mm ATGM LG);
    displayNameShort = "ATGM LG";
};

class SWS_Magazine_4rd_Viper_ATGM : SWS_Magazine_Viper_ATGM_Base
{
    ITEM_META(2);
    count = 4;
};

class SWS_Magazine_8rd_Viper_ATGM : SWS_Magazine_Viper_ATGM_Base
{
    ITEM_META(2);
    count = 8;
};