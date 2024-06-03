class CfgVehicles {
  class Helicopter_Base_H;

  class MELB_Base : Helicopter_Base_H {
    acre_hasInfantryPhone = FALSE;

    class AcreIntercoms : AcreIntercoms {
      class Intercom_1 : Intercom_1 {
        masterPositions[] = {"crew"};
      };
    };
  };

  // Bench variant
  class MELB_MH6M : MELB_Base {
    class AcreIntercoms : AcreIntercoms {
      class Intercom_1 : Intercom_1 {
        limitedPositions[] = {{"ffv", "all"}};
        numLimitedPositions = 6;
      };

      class Intercom_2 {
        displayName = "$STR_ACRE_SYS_INTERCOM_PASSENGERINTERCOM";
        shortName = "$STR_ACRE_SYS_INTERCOM_SHORTPASSENGERINTERCOM";
        masterPositions[] = {"crew"};
        allowedPositions[] = {"crew", {"ffv", "all"}};
      };
    };
  };

  // Light variant
  class MELB_H6M : MELB_Base {
    class AcreIntercoms : AcreIntercoms {
      class Intercom_1 : Intercom_1 {
        limitedPositions[] = {{"ffv", "all"}, {"cargo", "all"}};
        numLimitedPositions = 3;
      };

      class Intercom_2 {
        displayName = "$STR_ACRE_SYS_INTERCOM_PASSENGERINTERCOM";
        shortName = "$STR_ACRE_SYS_INTERCOM_SHORTPASSENGERINTERCOM";
        masterPositions[] = {"crew"};
        allowedPositions[] = {"crew", {"ffv", "all"}, {"cargo", "all"}};
      };
    };
  };
};
