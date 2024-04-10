#define CLASSES_MAGAZINES        \
  "SWS_Magazine_4rd_Viper_ATGM"  \
  , "SWS_Magazine_8rd_Viper_ATGM"

class CfgMagazines {
  class 4Rnd_120mm_LG_Cannon_Missiles;

  class SWS_Magazine_4rd_Viper_ATGM : 4Rnd_120mm_LG_Cannon_Missiles {
    ITEM_META(2);
    count = 4;
    ammo = "SWS_M_120mm_Cannon_ATGM";
    displayName = QNAME(120mm ATGM LG);
    displayNameShort = "ATGM LG";
    descriptionShort = "120mm laser-guided anti-tank missiles";
  };

  class SWS_Magazine_8rd_Viper_ATGM : SWS_Magazine_4rd_Viper_ATGM {
    count = 8;
  };
};
