class CfgMagazines {
  class 20Rnd_762x51_Mag;


// br55
  class OPTRE_36Rnd_95x40_Mag : 20Rnd_762x51_Mag { 
    mass = 15;
  };

// Shotguns
	class OPTRE_6Rnd_8Gauge_Pellets: 20Rnd_762x51_Mag {
    mass = 7;
  };
  class OPTRE_6Rnd_8Gauge_Slugs : OPTRE_6Rnd_8Gauge_Pellets {
    mass = 7;
  };
  class OPTRE_12Rnd_8Gauge_Slugs : OPTRE_6Rnd_8Gauge_Slugs {
    mass = 15;
  };
  class OPTRE_12Rnd_8Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets {
    mass = 15;
  };
};

