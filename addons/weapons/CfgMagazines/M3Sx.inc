class GMAGAZINE(M3Sx): OPTRE_M9_Frag {
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(M3Sx (Frag));
    mass = 11;
    ammo = "SWS_B_Grenade_M3Sx";
    displayNameShort = "M3Sx (Frag)";
    descriptionShort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: Hand";
};

class GSMAGAZINE(M3Sx,1Rnd): M319_HEDP_Grenade_Shell {
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(1Rnd M3Sx (Frag) Shell);
    displayNameShort = "M3Sx (Frag)";
    descriptionShort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
    mass = 12;
    ammo = QSHELL(M3Sx_40mm);
};

class GSMAGAZINE(M3Sx,3Rnd): GSMAGAZINE(M3Sx,1Rnd) {
    displayName = QNAME(3Rnd M3Sx (Frag) Shell);
    mass = 26;
    count = 3;
};

