class CfgVehicles {
  class LandVehicle;
  class StaticMGWeapon;
  class HMG_01_base_F;
  class GMG_01_base_F;
  class StaticWeapon: LandVehicle {
    armor=200;
    armorStructural=2;
    explosionShielding=1;
    minTotalDamageThreshold=3;
  };
  class HMG_01_high_base_F: HMG_01_base_F {
    armor=200;
  };
  class GMG_01_high_base_F: GMG_01_base_F {
    armor=200;
  };
	class HMG_02_base_F: StaticMGWeapon {
    armor=200;
  };
};
