class SWS_Magazine_Grenade_9Bang: ACE_CTS9
{
    ITEM_META(2);
    displayName = QNAME(9-Bang (Stun));
    descriptionShort = QNAME(Experimental 9-Bang (Stun));
    displayNameShort = "S9B";
    ammo = "SWS_B_Grenade_9Bang";
};

class SWS_Magazine_Grenade_9Bang_NoFuse : SWS_Magazine_Grenade_9Bang
{
    displayName = QNAME(9-Bang (Stun/No Fuse));
    descriptionShort = QNAME(Experimental 9-Bang (Stun/No Fuse));
    displayNameShort = "S9B-NF";
    ammo = "SWS_B_Grenade_9Bang_NoFuse";
};

class SWS_Magazine_Grenade_9Bang_1Rnd_Shell : M319_HE_Grenade_Shell
{
    ITEM_META(2);
    displayName = QNAME(1Rnd 9Bang (Stun) Shell);
    displayNameShort = "S9B (Stun)";
    descriptionShort = "Type: Stun Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
    initSpeed = 100;
    mass = 6;
    fuseDistance = 3;
    picture = "\z\ace\addons\grenades\UI\ACE_m84_x_ca.paa";
    ammo = "SWS_Magazine_Grenade_9Bang_Shell";
};

class SWS_Magazine_Grenade_9Bang_3Rnd_Shell : SWS_Magazine_Grenade_9Bang_1Rnd_Shell
{
    displayName = QNAME(3Rnd 9Bang (Stun) Shell);
    count = 3;
    mass = 12;
};
