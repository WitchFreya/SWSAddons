// https://community.bistudio.com/wiki/Arma_3:_Targeting_config_reference#ballisticsComputer
#define BC_PREDICTIVE 8

class CfgWeapons {
  class M134_Minigun;
  class M260_MELB;

  class M134_MELB : M134_Minigun {
    ballisticsComputer = BC_PREDICTIVE;
    cursor = "EmptyCursor";
    cursorAim = "mg";
    displayName = "Sx1337-H";

    class LowROF : LowROF {
      dispersion = 0.0045;
      recoil = "recoil_empty";
    };
  };

  class SWS_TalonLauncher : M260_MELB {
    displayName = "Sx260 Talon HEDP";
    ballisticsComputer = BC_PREDICTIVE;
    showAimCursorInternal = TRUE;
    cursor = "EmptyCursor";
    cursorAim = "rocket";
    magazines[] = {
      "Pylon_Talon_3x_MELB"
      , "Pylon_Talon_4x_MELB"
    };

    class Burst1 : Burst1 {
      displayName = "Single";
      dispersion = 0.01;
    };

    class Burst2 : Burst2 {
      displayName = "Burst";
      dispersion = 0.01;
    };
  };

  class SWS_RakeLauncher: SWS_TalonLauncher {
    displayName = "Sx260 Rake HE";
    magazines[] = {
      "Pylon_Rake_3x_MELB"
      , "Pylon_Rake_4x_MELB"
      , "Pylon_Rake_12x_MELB"
    };
  };
};
