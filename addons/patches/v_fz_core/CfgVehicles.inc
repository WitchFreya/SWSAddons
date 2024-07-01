
#define CBA_PATCH                                                         \
  class EventHandlers : EventHandlers {                                   \
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {}; \
  }

class CfgVehicles {
  class B_APC_Wheeled_01_cannon_F;
  class OPTRE_M12_FAV_APC;
  class OPTRE_M494;
  class OPTRE_Pelican_armed;
  class OPTRE_Pelican_unarmed;
  class OPTRE_UNSC_falcon;
  class OPTRE_UNSC_falcon_armed;
  class OPTRE_UNSC_falcon_armed_s;
  class OPTRE_UNSC_falcon_s;

  class VES_M12_APC_Base : OPTRE_M12_FAV_APC { CBA_PATCH; };
  class VES_IFV76_A : B_APC_Wheeled_01_cannon_F { CBA_PATCH; };
  class VES_M494_ORYX : OPTRE_M494 { CBA_PATCH; };
  class VES_UH144 : OPTRE_UNSC_falcon { CBA_PATCH; };
  class VES_UH144_A : OPTRE_UNSC_falcon_armed { CBA_PATCH; };
  class VES_UH144S : OPTRE_UNSC_falcon_s { CBA_PATCH; };
  class VES_UH144S_A : OPTRE_UNSC_falcon_armed_s { CBA_PATCH; };
  class VES_D77HTCI_A : OPTRE_Pelican_armed { CBA_PATCH; };
  class VES_D77HTCIS_A : VES_D77HTCI_A { CBA_PATCH; };
  class VES_D77HTCI : OPTRE_Pelican_unarmed { CBA_PATCH; };
  class VES_D77HTCIS : VES_D77HTCI { CBA_PATCH; };
};
