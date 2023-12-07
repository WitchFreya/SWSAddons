#define CLASSES_MAGAZINES          \
    "SWS_Magazine_4rd_Viper_ATGM", \
    "SWS_Magazine_8rd_Viper_ATGM", \
    "6000Rnd_762x51_Belt_Red_SXLB", \
    "Pylon_L_6000Rnd_M134_SXLB", \
    "Pylon_R_6000Rnd_M134_SXLB"

class CfgMagazines 
{
    //== MGs 
    class 5000Rnd_762x51_Belt;
    #include "CfgMagazines\ShrikeMags.inc" 
    //== ATGMs
    class 4Rnd_120mm_LG_cannon_missiles;
    #include "CfgMagazines\ViperATGM.inc" 
};