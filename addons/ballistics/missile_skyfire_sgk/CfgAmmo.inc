class CfgAmmo {
  class R_80mm_HE;
  class SWS_Skyfire_SGK : R_80mm_HE {
    displayName = QNAME(Hydra-70 DAGR HE);
    displayNameShort = "Skyfire SGK";
    description = "Skyfire-70 with Scarlet Laser-Guidance Kit";
    descriptionShort  = "Skyfire-70 with Scarlet Laser-Guidance Kit";

    maxSpeed = 500;
    class ACE_MissileGuidance {
      enabled = TRUE;

      minDeflection = 0.0005;
      maxDeflection = 0.0025;
      incDeflection = 0.0005;

      canVanillaLock = 0;

      defaultSeekerType = "SALH";
      seekerTypes[] = { "SALH" };

      defaultSeekerLockMode = "LOAL";
      seekerLockModes[] = { "LOAL", "LOBL" };

      seekerAngle = 90;
      seekerAccuracy = 1;

      seekerMinRange = 1;
      seekerMaxRange = 2500;

      defaultAttackProfile = "hellfire";
      attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
    };
  };
};
