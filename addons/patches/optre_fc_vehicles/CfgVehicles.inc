#define CBA_PATCH                                                               \
  class EventHandlers : EventHandlers {                                         \
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};       \
  }

class CfgVehicles {
  class B_MBT_01_cannon_F;
  class B_Plane_CAS_01_F;
  class Helicopter_Base_F;
  class OPTRE_FC_AA_Wraith;
  class OPTRE_FC_Type26B_Banshee;
  class OPTRE_FC_Type26N_Banshee;
  class OPTRE_FC_Wraith;

  class OPTRE_FC_Type26B_Banshee : B_Plane_CAS_01_F { CBA_PATCH; };
  class OPTRE_FC_Type26N_Banshee : OPTRE_FC_Type26B_Banshee { CBA_PATCH; };
  class OPTRE_FC_Type27_Banshee : OPTRE_FC_Type26N_Banshee { CBA_PATCH; };
  class OPTRE_FC_Wraith : B_MBT_01_cannon_F { CBA_PATCH; };
  class OPTRE_FC_AA_Wraith : OPTRE_FC_Wraith { CBA_PATCH; };
  class OPTRE_FC_AA_Wraith_NOFLAK : OPTRE_FC_AA_Wraith { CBA_PATCH; };
  class OPTRE_FC_AA_Wraith_Needle : OPTRE_FC_Wraith { CBA_PATCH; };
  class OPTRE_FC_Wraith_Tank : OPTRE_FC_Wraith { CBA_PATCH; };
  class OPTRE_FC_Spectre_AI_Base : B_MBT_01_cannon_F { CBA_PATCH; };
  class OPTRE_FC_Spirit_F : Helicopter_Base_F { CBA_PATCH; };
  class OPTRE_FC_Locust : B_MBT_01_cannon_F { CBA_PATCH; };
  class OPTRE_FC_Spectre_Base : B_MBT_01_cannon_F { CBA_PATCH; };
  class OPTRE_FC_SAM_Wraith_Needle : OPTRE_FC_Wraith { CBA_PATCH; };
};
