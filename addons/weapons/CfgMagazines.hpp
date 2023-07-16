#define CLASSES_MAGAZINES \
    QMAGAZINE(100Rnd_762x51_Mag), \
    QMAGAZINE(100Rnd_762x51_Mag_Tracer), \
    QMAGAZINE(200Rnd_762x51_Mag), \
    QMAGAZINE(200Rnd_762x51_Mag_Tracer), \
    QMAGAZINE(400Rnd_762x51_Mag), \
    QMAGAZINE(400Rnd_762x51_Mag_Tracer), \
    QGMAGAZINE(M9Sx), \
    QGSMAGAZINE(M9Sx,1Rnd), \
    QGMAGAZINE(M3Sx), \
    QGSMAGAZINE(M3Sx,1Rnd), \
    QGSMAGAZINE(M3Sx,3Rnd), \
    QGMAGAZINE(9Bang), \
    QGMAGAZINE(DOUBLES(9Bang,NoFuse)), \
    QGSMAGAZINE(9Bang,1Rnd), \
    QGSMAGAZINE(9Bang,3Rnd)

class CfgMagazines {

    //= 762x51 START
    class 150Rnd_762x51_Box;

    #include "CfgMagazines\762x51.inc"

    //= Grenades
    class ACE_CTS9;
    class OPTRE_M9_Frag;

    class GMAGAZINE(M3Sx): OPTRE_M9_Frag {
        CLEARANCE(RESTRICTED/DECWHI);
        ITEM_META(2);
        displayName = QNAME(M3Sx (Frag));
        mass = 11;
        ammo = QGRENADE(M3Sx);
        displayNameShort = "M3Sx (Frag)";
        descriptionShort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: Hand";
    };

    class GMAGAZINE(M9Sx): OPTRE_M9_Frag {
        CLEARANCE(RESTRICTED/DECWHI);
        ITEM_META(2);
		displayName = QNAME(M9Sx (HE-DP));
		mass = 22;
		typicalSpeed = 10;
		ammo = QGRENADE(M9Sx);
		displayNameShort = "M9Sx (HE-DP)";
		descriptionShort = "Type: AT Grenade<br />Rounds: 1<br />Used in: Hand";
	};

    class GMAGAZINE(9Bang): ACE_CTS9 {
        ITEM_META(2);
        displayName = QNAME(9-Bang (Stun));
        descriptionShort = QNAME(Experimental 9-Bang (Stun));
        displayNameShort = "S9B";
        ammo = QGRENADE(9Bang);
    };

    class GMAGAZINE(DOUBLES(9Bang,NoFuse)): ACE_CTS9 {
        ITEM_META(2);
        displayName = QNAME(9-Bang (Stun/No Fuse));
        descriptionShort = QNAME(Experimental 9-Bang (Stun/No Fuse));
        displayNameShort = "S9B-NF";
        ammo = QGRENADE(DOUBLES(9Bang,NoFuse));
    };

    //== Shells
    class M319_HE_Grenade_Shell;
    class M319_HEDP_Grenade_Shell;

    class GSMAGAZINE(M3Sx,1Rnd): M319_HEDP_Grenade_Shell {
        CLEARANCE(RESTRICTED/DECWHI);
        ITEM_META(2);
        displayName = QNAME(1Rnd M3Sx (Frag) Shell);
        displayNameShort = "M3Sx (Frag)";
		descriptionShort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
        mass = 12;
		ammo = QSHELL(M3Sx_40mm);
    };

    class GSMAGAZINE(M3Sx,3Rnd): M319_HEDP_Grenade_Shell {
        CLEARANCE(RESTRICTED/DECWHI);
        ITEM_META(2);
        displayName = QNAME(3Rnd M3Sx (Frag) Shell);
        displayNameShort = "M3Sx (Frag)";
		descriptionShort = "Type: Concussion Grenade<br />Rounds: 3<br />Used in: EGLM, 3GL";
        mass = 26;
        count = 3;
		ammo = QSHELL(M3Sx_40mm);
    };

    class GSMAGAZINE(M9Sx,1Rnd): M319_HEDP_Grenade_Shell {
        CLEARANCE(RESTRICTED/DECWHI);
        ITEM_META(2);
        displayName = QNAME(1Rnd M9Sx (HE-DP) Shell);
        displayNameShort = "M9Sx (HE-DP)";
		descriptionShort = "Type: AT Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
        mass = 24;
		ammo = QSHELL(M9Sx_40mm);
    };

    class GSMAGAZINE(9Bang,1Rnd): M319_HE_Grenade_Shell {
        ITEM_META(2);
        displayName = QNAME(1Rnd 9Bang (Stun) Shell);
        displayNameShort = "S9B (Stun)";
		descriptionShort = "Type: Stun Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
        initSpeed = 100;
        mass = 6;
        fuseDistance = 3;
        picture = "\z\ace\addons\grenades\UI\ACE_m84_x_ca.paa";
        ammo = QSHELL(9Bang);
    };

    class GSMAGAZINE(9Bang,3Rnd): M319_HE_Grenade_Shell {
        ITEM_META(2);
        displayName = QNAME(3Rnd 9Bang (Stun) Shell);
        displayNameShort = "S9B (Stun)";
		descriptionShort = "Type: Stun Grenade<br />Rounds: 1<br />Used in: EGLM, 3GL";
        count = 3;
        initSpeed = 100;
        mass = 6;
        fuseDistance = 3;
        picture = "\z\ace\addons\grenades\UI\ACE_m84_x_ca.paa";
        ammo = QSHELL(9Bang);
    };
};
