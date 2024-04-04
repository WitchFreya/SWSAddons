#define CLASSES_WEAPONS "SWS_Weapon_LaserDesignator"

class CfgWeapons {
  class LaserDesignator_Mounted;

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
