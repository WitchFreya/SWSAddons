class CfgAmmo {
  class M_AT;
  class M_PG_AT;

  class ACE_Hydra70_DAGR : M_PG_AT {
    maxSpeed = 600;
  };

  class SWS_Hydra70_DAGR_HE : M_AT {
    displayName = QNAME(Hydra-70 DAGR HE);
    displayNameShort = "DAGR HE";
    description = "Hydra-70 DAGR with High-Explosive Warhead";
    descriptionShort  = "Hydra-70 DAGR with High-Explosive Warhead";

    maxSpeed = 600;
    class ACE_MissileGuidance {
      enabled = TRUE;

      minDeflection = 0.0005;
      maxDeflection = 0.0025;
      incDeflection = 0.0005;

      canVanillaLock = 0;

      defaultSeekerType = "SALH";
      seekerTypes[] = { "SALH" };

      defaultSeekerLockMode = "LOAL";
      seekerLockModes[] = { "LOAL" };

      seekerAngle = 90;
      seekerAccuracy = 1;

      seekerMinRange = 1;
      seekerMaxRange = 2500;

      defaultAttackProfile = "LIN";
      attackProfiles[] = { "LIN", "DIR", "MID", "HI" };
    };
  };
};
