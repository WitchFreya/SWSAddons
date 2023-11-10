#define CLASSES_WEAPONS       \
    "SWS_Cannon_120mm_Viper", \
    "SWS_HMG_127_Viper"

class CfgWeapons
{
    //== Tank Cannons
    class cannon_120mm_long;
    class HMG_127_APC;

    #include "CfgWeapons\ViperCannon.inc"
    #include "CfgWeapons\ViperHMG.inc"
};