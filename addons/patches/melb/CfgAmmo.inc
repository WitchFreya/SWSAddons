class cfgAmmo {
    class MissileBase;
    class Hydra_Ammo_Base_MELB: MissileBase
	{
        cost = 100;
		hit = 300;
		indirectHit = 50;
		indirectHitRange = 10;
        initTime = 0.02;
		maxSpeed = 720;
		thrustTime = 1.07;
		thrust = 825;
		fuseDistance = 75;
		airFriction = 0.1;
		sideAirFriction = 0.005;
		timeToLive = 20;
    };
};