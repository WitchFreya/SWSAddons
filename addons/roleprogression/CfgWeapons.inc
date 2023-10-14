#define CLASSES_WEAPONS \
    "SWS_Dogtag_Rifleman", \
    "SWS_Dogtag_CLS", \
    "SWS_Dogtag_Medic", \
    "SWS_Dogtag_Autorifleman", \
    "SWS_Dogtag_Marksman", \
    "SWS_Dogtag_Sniper", \
    "SWS_Dogtag_Grenadier", \
    "SWS_Dogtag_Engineer", \
    "SWS_Dogtag_DroneOperator", \
    "SWS_Dogtag_Antiarmor", \
    "SWS_Dogtag_TeamLead", \
    "SWS_Dogtag_PlatoonLead", \
    "SWS_Dogtag_ArmorCrew", \
    "SWS_Dogtag_Pilot", \
    "SWS_Dogtag_Copilot"

class CfgWeapons
{
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class SWS_Dogtag_Rifleman : ACE_ItemCore
    {
        ITEM_META(2);
        descriptionShort = "A rifleman's dogtag.";
        displayName = QNAME(Dogtag (Rifleman));
        model = "\z\ace\addons\dogtags\data\ace_dogtag.p3d";
        picture = "\z\ace\addons\dogtags\data\dogtagSingle.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0; //too small to for 1 ?
        };
        GVAR(role) = "Rifleman";
    };

    class SWS_Dogtag_CLS : SWS_Dogtag_Rifleman
    {
        displayName = QNAME(Dogtag (CLS));
        GVAR(role) = "CLS";
        descriptionShort = "A CLS's dogtag.";
    };

    class SWS_Dogtag_Medic : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Medic";
        displayName = QNAME(Dogtag (Medic));
        descriptionShort = "A medic's dogtag.";
    };

    class SWS_Dogtag_Autorifleman : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Automatic Rifleman";
        displayName = QNAME(Dogtag (Autorifleman));
        descriptionShort = "A machine gunner's dogtag.";
    };

    class SWS_Dogtag_Marksman : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Marksman";
        displayName = QNAME(Dogtag (Marksman));
        descriptionShort = "A marksman's dogtag.";
    };

    class SWS_Dogtag_Sniper : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Sniper";
        displayName = QNAME(Dogtag (Sniper));
        descriptionShort = "A sniper's dogtag.";
    };

    class SWS_Dogtag_Grenadier : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Grenadier";
        displayName = QNAME(Dogtag (Grenadier));
        descriptionShort = "A grenadier's dogtag.";
    };

    class SWS_Dogtag_Engineer : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Engineer";
        displayName = QNAME(Dogtag (Engineer));
        descriptionShort = "An engineer's dogtag.";
    };

    class SWS_Dogtag_DroneOperator : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Drone Operator";
        displayName = QNAME(Dogtag (Drone Operator));
        descriptionShort = "A drone operator's dogtag.";
    };

    class SWS_Dogtag_Antiarmor : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Antiarmor Specialist";
        displayName = QNAME(Dogtag (Antiarmor));
        descriptionShort = "An antiarmor specialist's dogtag.";
    };

    class SWS_Dogtag_TeamLead : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Team Lead";
        displayName = QNAME(Dogtag (Team Lead));
        descriptionShort = "A team lead's dogtag.";
    };

    class SWS_Dogtag_PlatoonLead : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Platoon Lead";
        displayName = QNAME(Dogtag (Platoon Lead));
        descriptionShort = "A platoon lead's dogtag.";
    };

    class SWS_Dogtag_ArmorCrew : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Armor Crewmember";
        displayName = QNAME(Dogtag (Armor Crew));
        descriptionShort = "An armor crewmember's dogtag.";
    };

    class SWS_Dogtag_Pilot : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Pilot";
        displayName = QNAME(Dogtag (Pilot));
        descriptionShort = "A pilot's dogtag.";
    };

    class SWS_Dogtag_Copilot : SWS_Dogtag_Rifleman
    {
        GVAR(role) = "Copilot";
        displayName = QNAME(Dogtag (Copilot));
        descriptionShort = "A copilot's dogtag.";
    };


};
