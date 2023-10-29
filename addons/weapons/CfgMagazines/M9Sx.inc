class SWS_Magazine_Grenade_M9Sx : OPTRE_M9_Frag
{
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(M9Sx (HE-DP));
    mass = 22;
    typicalSpeed = 10;
    ammo = "SWS_B_Grenade_M9Sx";
    displayNameShort = "M9Sx (HE-DP)";
    descriptionShort = "Type: AT Grenade<br />Rounds: 1<br />Used in: Hand";
};

class SWS_Magazine_Grenade_M9Sx_1Rnd_Shell : M319_HEDP_Grenade_Shell
{
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QNAME(1Rnd M9Sx (HE-DP) Shell);
    displayNameShort = "M9Sx (HE-DP)";
    descriptionShort = "Type: AT Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
    mass = 24;
    ammo = "SWS_B_Grenade_M9Sx_40mm_Shell";
};
