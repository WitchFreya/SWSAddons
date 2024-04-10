#define CLASSES_MAGAZINES \
  "SWS_Magazine_Grenade_M9Sx_1Rnd_Shell"

class CfgMagazines {
  class M319_HEDP_Grenade_Shell;

  class SWS_Magazine_Grenade_M9Sx_1Rnd_Shell : M319_HEDP_Grenade_Shell {
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(1Rnd M9Sx (HEAT));
    displayNameShort = "M9Sx (HEAT)";
    descriptionShort = "Type: Antitank Grenade Shell<br />Rounds: 1<br />Used in: EGLM, 1GL";
    mass = 24;
    ammo = "SWS_B_Grenade_M9Sx_40mm_Shell";
  };
};
