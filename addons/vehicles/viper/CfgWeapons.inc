#define CLASSES_WEAPONS     \
  "SWS_Cannon_120mm_Viper"  \
  , "SWS_HMG_127_Viper"

// https://community.bistudio.com/wiki/Arma_3:_Targeting_config_reference#ballisticsComputer
#define BC_ZEROING_AUTO 1
#define BC_ZEROING 2
#define BC_TARGET_LEAD 4
#define BC_FCS 16

class CfgWeapons
{
  class Cannon_120mm_Long;
  class HMG_127_APC;

  class SWS_Cannon_120mm_Viper : Cannon_120mm_Long
  {
    displayName = QNAME(XM552);
    description = "Experimental 120mm smoothbore cannon designed for the M700 with advanced ballistics targeting.";
    ballisticsComputer = QUOTE(BC_ZEROING_AUTO + BC_ZEROING + BC_FCS);
    magazineWell[] = {"SWS_MBT_Cannon_120mm"};
  };

  class SWS_HMG_127_Viper : HMG_127_APC
  {
    canLock = 2;
    ballisticsComputer = QUOTE(BC_ZEROING + BC_TARGET_LEAD + BC_FCS);
  };
};

#undef BC_ZEROING_AUTO
#undef BC_ZEROING
#undef BC_TARGET_LEAD
#undef BC_FCS
