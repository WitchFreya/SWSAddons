class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#define CBA_PATCH                                                               \
    class EventHandlers : EventHandlers {                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles
{
    class OPTRE_UNSC_Marine_Pilot;
    class OPTRE_UNSC_Marine_Soldier_AA_Specialist;
    class OPTRE_UNSC_Marine_Soldier_AT_Specialist;
    class OPTRE_UNSC_Marine_Soldier_Autorifleman;
    class OPTRE_UNSC_Marine_Soldier_Breacher;
    class OPTRE_UNSC_Marine_Soldier_Corpsman;
    class OPTRE_UNSC_Marine_Soldier_Crewman;
    class OPTRE_UNSC_Marine_Soldier_Engineer;
    class OPTRE_UNSC_Marine_Soldier_Grenadier;
    class OPTRE_UNSC_Marine_Soldier_Officer;
    class OPTRE_UNSC_Marine_Soldier_Radioman;
    class OPTRE_UNSC_Marine_Soldier_Rifleman_AR;
    class OPTRE_UNSC_Marine_Soldier_Rifleman_AT;
    class OPTRE_UNSC_Marine_Soldier_SquadLead;
    class OPTRE_UNSC_Marine_Soldier_TeamLead;
    class OPTRE_UNSC_Marine_Soldier_Unarmed;
    class OPTRE_UNSC_ODST_Soldier;
    class PlaneWreck;
    class StaticMGWeapon;

    class OPTRE_UNSC_Marine_Soldier_Rifleman_AR_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Rifleman_AR { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Autorifleman_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Autorifleman { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Rifleman_AT_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Rifleman_AT { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Corpsman_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Corpsman { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Grenadier_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Grenadier { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Radioman_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Radioman { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Breacher_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Breacher { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Engineer_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Engineer { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_SquadLead_OCimport_01 : OPTRE_UNSC_Marine_Soldier_SquadLead { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_TeamLead_OCimport_01 : OPTRE_UNSC_Marine_Soldier_TeamLead { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_AA_Specialist_OCimport_01 : OPTRE_UNSC_Marine_Soldier_AA_Specialist { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_AT_Specialist_OCimport_01 : OPTRE_UNSC_Marine_Soldier_AT_Specialist { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Crewman_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Crewman { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Unarmed_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Unarmed { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Soldier_Officer_OCimport_01 : OPTRE_UNSC_Marine_Soldier_Officer { CBA_PATCH; };
    class OPTRE_UNSC_Marine_Pilot_OCimport_01 : OPTRE_UNSC_Marine_Pilot { CBA_PATCH; };
    class DMNS_Shortsword_01_wreck_F : PlaneWreck { CBA_PATCH; };
    class DMNS_SOEIV : StaticMGWeapon { CBA_PATCH; };

    // address the missing classes in 19th.
    class B_19thUNSC_Squad_Leader_Urban_01 : OPTRE_UNSC_ODST_Soldier {};
    class B_19thUNSC_Team_Leader_Urban_01 : OPTRE_UNSC_ODST_Soldier {};
    class B_19thUNSC_Rifleman_Urban_01 : OPTRE_UNSC_ODST_Soldier {};
    class B_19thUNSC_Rifleman_Urban_01 : OPTRE_UNSC_ODST_Soldier {};
    class B_19thUNSC_Rifleman_AT_Urban_01 : OPTRE_UNSC_ODST_Soldier {};
    class B_19thUNSC_Corpsman_Urban_01 : OPTRE_UNSC_ODST_Soldier {};
    class B_19thUNSC_Autorifleman_Urban_01 : OPTRE_UNSC_ODST_Soldier {};
};
