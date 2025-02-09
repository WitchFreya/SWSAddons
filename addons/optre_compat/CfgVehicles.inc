/** Add CBA Event Handler support to OPTRE objects. */
class CfgVehicles {
  class Items_base_F;
  class OPTRE_M12_FAV;
  class StaticMGWeapon;
  class PlaneWreck;
  class Plane_Base_F;
  class OPTRE_M808B2;
  class Helicopter_Base_H;
  class B_MBT_01_cannon_F;
  class OPTRE_FC_extras_base;
  class OPTRE_FC_Scarab_Hull_AT;
  class OPTRE_FC_Hull_AA;
  class OPTRE_FC_Hull_Cmdr;
  class OPTRE_FC_Hull_Cmdr_AA;

  class Land_OPTRE_barrel_hydrogen : Items_base_F { CBA_PATCH; };
  class Land_OPTRE_fusion_coil : Items_base_F { CBA_PATCH; };
  class OPTRE_M12_CIV : OPTRE_M12_FAV { CBA_PATCH; };
  class OPTRE_HEV : StaticMGWeapon { CBA_PATCH; };
  class OPTRE_Objects_Wreck_Pelican : PlaneWreck { CBA_PATCH; };
  class OPTRE_EscapePod_Base : Plane_Base_F { CBA_PATCH; };
  class OPTRE_RCHog : OPTRE_M12_CIV { CBA_PATCH; };
  class OPTRE_Sabre_Wreck_F : PlaneWreck { CBA_PATCH; };
  class UNSCDrone_Wreck_F : PlaneWreck { CBA_PATCH; };
  class OPTRE_Objects_Wreck_Falcon : PlaneWreck { CBA_PATCH; };
  class OPTRE_M808B2A1 : OPTRE_M808B2 { CBA_PATCH; };
  class OPTRE_Pelican_F : Helicopter_Base_H { CBA_PATCH; };
  class OPTRE_Objects_Wreck_Sparrowhawk : PlaneWreck { CBA_PATCH; };
  class OPTRE_FR_FusionCoil : Items_base_F { CBA_PATCH; };
  class OPTRE_FC_Scarab_Hull_Base : B_MBT_01_cannon_F { CBA_PATCH; };
  class OPTRE_FC_Frnt_Thigh : OPTRE_FC_extras_base { CBA_PATCH; };
  class OPTRE_FC_Scarab_Hull_Base_NoEH : OPTRE_FC_Scarab_Hull_Base { CBA_PATCH; };
  class OPTRE_FC_Scarab_Hull_AT_NoEH : OPTRE_FC_Scarab_Hull_AT { CBA_PATCH; };
  class OPTRE_FC_Hull_AA_NoEH : OPTRE_FC_Hull_AA { CBA_PATCH; };
  class OPTRE_FC_Hull_Cmdr_NoEH : OPTRE_FC_Hull_Cmdr { CBA_PATCH; };
  class OPTRE_FC_Hull_Cmdr_AA_NoEH : OPTRE_FC_Hull_Cmdr_AA { CBA_PATCH; };
};
