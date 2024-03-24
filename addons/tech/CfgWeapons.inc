#define CLASSES_WEAPONS \
    "SWS_Term_Scarlet" \
    , "SWS_Weapon_LaserDesignator"

class CfgWeapons {
  class B_UavTerminal;
  class LaserDesignator_Mounted;

  class SWS_Term_Scarlet : B_UavTerminal {
    ITEM_META(2);
    CLEARANCE(SECRET/DECWHI);
    displayName = QNAME(SCARLET);
    descriptionShort = "System Calibration and Arsenal Retasking Light Engineering Terminal.";
    model = "\a3\Props_F_Enoch\Military\Equipment\Laptop_03_F.p3d";
    picture = QPATHTOF(data\terminal_scarlet_ca.paa);
    hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa"};
  };

  /** Used for the SMQ-94 designator.*/
  class SWS_Weapon_LaserDesignator : LaserDesignator_Mounted {
    ITEM_META(2);
    CLEARANCE(SECRET/DECWHI);
    displayName = QNAME(Laser Designator);
    cursor = "EmptyCursor";
    cursorAim = "EmptyCursor";
    nameSound = "laserdesignator";
    minRange = 1;
    minRangeProbab = 0.01;
    midRange = 2;
    midRangeProbab = 0.01;
    maxRange = 3;
    maxRangeProbab = 0.01;
  };
};
