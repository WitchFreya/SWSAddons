class CfgVehicles {
  class Helicopter_Base_H;

  class MELB_Base : Helicopter_Base_H {
    acre_hasInfantryPhone = FALSE;

    class AcreIntercoms : AcreIntercoms {
      class Intercom_1 : Intercom_1 {
        masterPositions[] = {"crew"};
        limitedPositions[] = {{"ffv", "all"}};
        numLimitedPositions = 1;
      };
      class Intercom_2 {
        displayName = "$STR_ACRE_SYS_INTERCOM_PASSENGERINTERCOM";
        shortName = "$STR_ACRE_SYS_INTERCOM_SHORTPASSENGERINTERCOM";
        masterPositions[] = {"crew"};
        allowedPositions[] = {"crew", {"ffv", "all"}};
      };
    };
  };
};
