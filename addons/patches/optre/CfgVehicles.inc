#define CBA_PATCH                                                         \
  class EventHandlers : EventHandlers {                                   \
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {}; \
  }

class CfgVehicles {
  class Items_base_F;
  class OPTRE_M12_FAV;
  class StaticMGWeapon;
  class PlaneWreck;
  class Plane_Base_F;
  class OPTRE_M12_CIV;
  class OPTRE_M808B2;

  class Land_OPTRE_barrel_hydrogen : Items_base_F { CBA_PATCH; };
  class Land_OPTRE_fusion_coil : Items_base_F { CBA_PATCH; };
  class OPTRE_M12_CIV : OPTRE_M12_FAV { CBA_PATCH; };
  class OPTRE_HEV : StaticMGWeapon { CBA_PATCH; };
  class OPTRE_Objects_Wreck_Pelican : PlaneWreck { CBA_PATCH; };
  class OPTRE_EscapePod_Base : Plane_Base_F { CBA_PATCH; };
  class OPTRE_RCHog : OPTRE_M12_CIV { CBA_PATCH; };
  class OPTRE_Sabre_Wreck_F : PlaneWreck { CBA_PATCH; };
  class unscdrone_wreck_F : PlaneWreck { CBA_PATCH; };
  class OPTRE_Objects_Wreck_Falcon : PlaneWreck { CBA_PATCH; };
  class OPTRE_M808B2A1 : OPTRE_M808B2 { CBA_PATCH; };
};

