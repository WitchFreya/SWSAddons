

#define CBA_PATCH                                                         \
  class EventHandlers : EventHandlers {                                   \
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {}; \
  }

class CfgVehicles
{
  class Helicopter_Base_F;
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

  class Helicopter_Base_H : Helicopter_Base_F
  {
    class Reflectors : Reflectors {
      class Right : Right {};
    };
  };
  class Splits_Pelican_base;
  // fixing pylon mirroring and targetability; see https://github.com/WitchFreya/SWSAddons/pull/14
  class Splits_UNSC_D77_TC_Pelican: Splits_Pelican_base
  {
    irTargetSize = 1.6; 
    radarTargetSize = 1.0;
    class Components: Components
    {
      class TransportPylonsComponent
      {
        class Pylons
        {
          // inheritance won't work because of merged interfaces
          class PylonRight1
					{
						attachment = "";
						priority = 4;
						hardpoints[] = {"Splits_T_Missiles"};
						turret[] = {};
						UIposition[] = {0.25,0.1};
					};
					class PylonRight2: PylonRight1
					{
            attachment = "";
						priority = 3;
						UIposition[] = {0.25,0.2};
					};
					class PylonRight3 {
						hardpoints[] = {"Splits_B_Missiles","B_Missile_Pylon"};
						attachment = "ace_maverick_L_PylonRack_3Rnd";
            maxweight = 1000;
            priority = 2;
						turret[] = {};
						UIposition[] = {0.6,0.1};
					};
					class PylonRight4: PylonRight3
					{
            attachment = "ace_maverick_L_PylonRack_3Rnd";
            hardpoints[] = {"Splits_B_Missiles","B_Missile_Pylon"};
            maxweight = 1000;
            priority = 1;
						UIposition[] = {0.6,0.2};
					};
					class PylonsLeft1: PylonRight1
					{
            attachment = "";
						UIposition[] = {0.25,0.5};
						mirroredMissilePos = 1;
					};
					class PylonsLeft2: PylonRight2
					{
            attachment = "";
						UIposition[] = {0.25,0.4};
						mirroredMissilePos = 2;
					};
					class PylonsLeft3: PylonRight3
					{
            attachment = "ace_maverick_L_PylonRack_3Rnd";
            hardpoints[] = {"Splits_B_Missiles","B_Missile_Pylon"};
            maxweight = 1000;
						UIposition[] = {0.6,0.5};
						mirroredMissilePos = 3;
					};
					class PylonsLeft4: PylonRight4
					{
            attachment = "ace_maverick_L_PylonRack_3Rnd";
            hardpoints[] = {"Splits_B_Missiles","B_Missile_Pylon"};
            maxweight = 1000;
						UIposition[] = {0.6,0.4};
						mirroredMissilePos = 4;
					};
        };
      };
    };
  };
};
