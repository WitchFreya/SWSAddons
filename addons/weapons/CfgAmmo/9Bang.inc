class GRENADE(9Bang): ACE_G_CTS9
{
    explosionTime=1.5;
    ace_flashbang_Interval=0.050000001;
};

class GRENADE(DOUBLES(9Bang,NoFuse)): GRENADE(9bang)
{
    ace_flashbang_Interval=0.050000001;
    timeToLive=15;
    fuseDistance=0;
    explosionTime=0.5;
};

class SHELL(9Bang): G_40mm_HE {
    hit = 0;
    indirectHit = 0;
    indirectHitRange = 0;
    visibleFire = 1;
    audibleFire = 30;
    visibleFireTime = 3;
    dangerRadiusHit = -1;
    suppressionRadiusHit = 20;
    deflecting = 5;
    timeToLive = 10;
    airFriction = -0.001;
    fuseDistance = 999;
    ace_frag_enabled = 0;
    explosionTime = 1.5;
    typicalSpeed = 50;
    effectsSmoke = "ACE_M84FlashbangEffect";
    ace_grenades_flashbang = 1;
    ace_grenades_flashbangBangs = 9;
    ace_grenades_flashbangInterval = 0.5;
    ace_grenades_flashbangIntervalMaxDeviation = 0.1;
    model = "\z\ace\addons\grenades\models\ACE_CTS_9bang_thrown.p3d";
};
