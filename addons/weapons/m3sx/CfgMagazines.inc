#define CLASSES_MAGAZINES                   \
  "SWS_Magazine_Grenade_M3Sx"               \
  , "SWS_Magazine_Grenade_M3Sx_1Rnd_Shell"  \
  , "SWS_Magazine_Grenade_M3Sx_3Rnd_Shell"

#define M9_MASS 9

class CfgMagazines {
  class OPTRE_M9_Frag;
  class M319_HEDP_Grenade_Shell;

  class SWS_Magazine_Grenade_M3Sx : OPTRE_M9_Frag {
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(M3Sx (Frag));
    mass = M9_MASS;
    ammo = "SWS_B_Grenade_M3Sx";
    displayNameShort = "M3Sx (Frag)";
    descriptionShort = "High-yield fragmentation grenade.";
  };

  class SWS_Magazine_Grenade_M3Sx_1Rnd_Shell : M319_HEDP_Grenade_Shell {
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(1Rnd M3Sx (Frag));
    displayNameShort = "M3Sx (Frag)";
    descriptionShort = "Type: Frag Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
    mass = M9_MASS + 1;
    ammo = "SWS_B_Grenade_M3Sx_40mm_Shell";
  };

  class SWS_Magazine_Grenade_M3Sx_3Rnd_Shell : SWS_Magazine_Grenade_M3Sx_1Rnd_Shell {
    displayName = QNAME(3Rnd M3Sx (Frag));
    descriptionShort = "Type: Frag Grenade<br />Rounds: 3<br />Used in: EGLM, 1GL";
    mass = M9_MASS * 3 + 1;
    count = 3;
  };
};

#undef M9_MASS
