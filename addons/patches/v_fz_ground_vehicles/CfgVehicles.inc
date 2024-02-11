class CfgVehicles
{
  class OPTRE_M808B_UNSC;
  class OPTRE_M808BM_UNSC;
  class OPTRE_M875_SPH;

  class VES_M808B_MBT : OPTRE_M808B_UNSC
  {
    #include "FZ_A_ScorpionCamos.inc"
  };

  class VES_M808BM_MBT : OPTRE_M808BM_UNSC {
    #include "FZ_B_ScorpionCamos.inc"
  };

  class VES_M875_SPH: OPTRE_M875_SPH {
    #include "FZ_E_ScorpionCamos.inc"
  };
};
