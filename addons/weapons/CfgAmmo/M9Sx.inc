class SWS_B_Grenade_M9Sx: OPTRE_G_M9_Frag
{
    META;
    hit = 300;
    timeToLive = 4;
    indirectHit = 300;
    indirectHitRange = 2;
    rhs_submunition = "SWS_B_Grenade_M9Sx_OnImpact";
    rhs_fuseTime[] = {1,1.3,1.8};
    rhs_selfDestructTime[] = {3.2,3.6,4.2};
    ace_frag_enabled = 0;
    ace_frag_skip = 1;
    ace_frag_force = 0;
};

class SWS_B_Grenade_M9Sx_OnImpact : SWS_B_Grenade_M9Sx
{
    META;
    rhs_submunition = "SWS_B_Grenade_M9Sx_OnExp";
    explosionTime = -1;
};

class SWS_B_Grenade_M9Sx_OnExp : SWS_B_Grenade_M9Sx
{
    META;
    simulation = "shotShell";
    explosionTime = 0.001;
};

class SWS_B_Grenade_M9Sx_40mm_Shell : M319_HEDP
{
    META;
    hit = 300;
    indirectHit = 300;
    indirectHitRange = 2;
    ace_frag_enabled = 0;
};
