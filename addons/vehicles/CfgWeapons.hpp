#define CLASSES_WEAPONS       \
    "SWS_cannon_120mm_viper", \
    "SWS_HMG_127_viper"

class CfgWeapons
{
    //== Tank Cannons
    class cannon_120mm_long;
    class HMG_127_APC;

    #include "CfgWeapons\ViperCannon.inc"
    #include "CfgWeapons\ViperHMG.inc"
};