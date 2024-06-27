#include "script_component.hpp"
#include "CfgFactionClasses.hpp"

class CargoTurret_01;
class CargoTurret_02;
class CargoTurret_03;
class CodRiverTurret;
class CopilotTurret;
class MainTurret;
class LMG_Turret;
class LoadmasterTurret;
class TopTurret;
class Turrets;

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    author = QUOTE(AUTHOR);
    authors[] = {AUTHORS};
    skipWhenMissingDependencies = TRUE;
    units[] = {
      "O_URArmy_Squad_Lead_01"
      , "O_URArmy_Team_Lead_01"
      , "O_URArmy_Rifleperson_1_01"
      , "O_URArmy_Rifleperson_2_01"
      , "O_URArmy_Automatic_Rifle_01"
      , "O_URArmy_Medic_01"
      , "O_URArmy_Marksman_01"
      , "O_URArmy_Crew_01"
      , "O_URArmy_Sniper_01"
      , "O_URArmy_Spotter_01"
      , "O_URArmy_Marine_1_01"
      , "O_URArmy_Marine_2_01"
      , "O_URArmy_Marine_Team_Lead_01"
      , "O_URArmy_Marine_Medic_01"
      , "O_URArmy_Warrior_01"
      , "O_URArmy_HMG_Dagger_01"
      , "O_URArmy_HMG_Jeep_01"
      , "O_URArmy_Covered_Truck_01"
    };
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "EMP_Greystone_PMC"
      , "A3_Characters_F"
      , "ace_nouniformrestrictions"
      , "lambs_danger"
      , "aceax_ingame"
      , "A3_Sounds_F"
      , "A3_Sounds_F_Exp"
      , "jsrs_soundmod_complete_edition"
      , "ace_gforces"
      , "ace_interaction"
      , "ace_movement"
      , "ace_medical_feedback"
      , "acre_sys_components"
      , "A3_Data_F"
      , "A3_Data_F_Curator"
      , "A3_Air_F_Heli"
      , "lambs_range"
      , "ace_thermals"
      , "lambs_formations"
      , "zen_attributes"
      , "ace_refuel"
      , "CUP_Core"
      , "cba_xeh"
      , "acre_sys_rack"
      , "A3_Armor_F_EPB_APC_Tracked_03"
      , "ace_realisticnames"
      , "acre_sys_intercom"
      , "ace_vehicle_damage"
      , "ace_vehicles"
      , "A3_Armor_F_Beta"
      , "A3_Armor_F_Beta_APC_Tracked_01"
      , "A3_Armor_F_Beta_APC_Tracked_02"
      , "A3_Armor_F_Gamma_MBT_01"
      , "A3_Armor_F_Gamma_MBT_02"
      , "Jbad_ConstructionCrane"
      , "A3_Armor_F_EPB_MBT_03"
      , "A3_Armor_F_Tank_LT_01"
      , "A3_Armor_F_Tank_MBT_04"
      , "A3_Soft_F_Enoch_UGV_02"
      , "ace_cookoff"
      , "ace_logistics_uavbattery"
      , "OPTRE_Vehicles_Elephant"
      , "OPTRE_Vehicles_M808B2"
      , "OPTRE_Vehicles_M494"
      , "A3_Data_F_ParticleEffects"
      , "babe_int_EHs"
      , "emr_main"
      , "ace_tagging"
      , "ace_cargo"
      , "A3_Soft_F_Exp_LSV_01"
      , "A3_Soft_F"
      , "A3_Soft_F_Gamma_Hatchback_01"
      , "A3_Soft_F_Exp_Offroad_02"
      , "A3_Soft_F_Beta_Truck_02"
      , "A3_Soft_F_Gamma_Truck_02"
      , "A3_Soft_F_Enoch_Truck_02"
      , "A3_Soft_F_Beta_Truck_01"
      , "A3_Soft_F_Gamma_Truck_01"
      , "A3_Soft_F_Gamma_Van_01"
      , "A3_Soft_F_EPC_Truck_03"
      , "Jbad_Cat_Dumper"
      , "Jbad_Forklift"
      , "A3_Soft_F_Orange_Van_02"
      , "ace_repair"
    };
  };
};
