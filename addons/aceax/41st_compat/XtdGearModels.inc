class XtdGearModels {
  class 41st_Model {
    author = "41st ODST/MFR";
    dlc = "41st";
  };

  class CfgWeapons {
    class 41st_Away_Vest : 41st_Model {
      label = "41st M52D Vest";
      options[] = {"Role"};

      class Role {
        alwaysSelectable = TRUE;
        values[] = {
          "Light"
          , "Heavy"
          , "Marksman"
          , "Medic"
          , "Rifleman"
          , "Team_Lead"
        };
        class Light {};
        class Heavy {};
        class Marksman {};
        class Medic {};
        class Rifleman {};
        class Team_Lead { label = "TL"; };
      };
    };
  };
};
