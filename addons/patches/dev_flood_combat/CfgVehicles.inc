class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#define CBA_PATCH                                                           \
  class EventHandlers : EventHandlers {                                     \
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
  }

class CfgVehicles
{
  class O_Soldier_F;
  class DEV_Flood_Combat_O : O_Soldier_F { CBA_PATCH; };

  class OPTRE_FC_Elite_Minor;
  class DEV_Flood_Sangheili_O : OPTRE_FC_Elite_Minor { CBA_PATCH; };

  class OPTRE_FC_Spartan;
  class Dev_Flood_Spartan_O : OPTRE_FC_Spartan { CBA_PATCH; };
};
