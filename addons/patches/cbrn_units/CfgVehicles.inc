#define CBA_PATCH                                                         \
  class EventHandlers : EventHandlers {                                   \
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {}; \
  }

class CfgVehicles {
  class B_Soldier_unarmed_F;
  class O_Soldier_unarmed_F;
  class I_Soldier_unarmed_F;
  class B_CBRN_Unarmed : B_Soldier_unarmed_F { CBA_PATCH; };
  class O_CBRN_Unarmed : O_Soldier_unarmed_F { CBA_PATCH; };
  class I_CBRN_Unarmed : I_Soldier_unarmed_F { CBA_PATCH; };
};
