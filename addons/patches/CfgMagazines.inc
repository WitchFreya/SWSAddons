class CfgMagazines {
    class 2Rnd_12Gauge_Pellets;
    // Extend OPTRE's pellets from actual pellets.
    class OPTRE_6Rnd_8Gauge_Pellets: 2Rnd_12Gauge_Pellets {
		scope = 2;
		scopeArsenal = 2;
		count = 6;
		ammo = "OPTRE_8Gauge_Pellets";
		displayname = "6Rnd 8 Gauge Pellets";
		displayNameShort = "8 Gauge Pellets";
		descriptionShort = "6 Rounds<br>8 Gauge test<br>Pellets";
		initSpeed = 500;
		mass = 10;
		model = "\OPTRE_Weapons\Shotgun\Shell_mag_S";
		picture = "\a3\weapons_F\data\ui\m_12gauge_ca";
	};
};
