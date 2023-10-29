class SWS_Magazine_Grenade_M3Sx : OPTRE_M9_Frag
{
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(M3Sx (Frag));
    mass = 11;
    ammo = "SWS_B_Grenade_M3Sx";
    displayNameShort = "M3Sx (Frag)";
    descriptionShort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: Hand";
};

class SWS_Magazine_Grenade_M3Sx_1Rnd_Shell : M319_HEDP_Grenade_Shell
{
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(1Rnd M3Sx (Frag) Shell);
    displayNameShort = "M3Sx (Frag)";
    descriptionShort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
    mass = 12;
    ammo = "SWS_Magazine_Grenade_M3Sx_40mm_Shell";
};

class SWS_Magazine_Grenade_M3Sx_3Rnd_Shell : SWS_Magazine_Grenade_M3Sx_1Rnd_Shell
{
    displayName = QNAME(3Rnd M3Sx (Frag) Shell);
    mass = 26;
    count = 3;
};

