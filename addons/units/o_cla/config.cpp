#include "script_component.hpp"

class CargoGunner_1;
class CargoTurret_01;
class CargoTurret_02;
class CargoTurret_03;
class CargoTurret_04;
class CargoTurret_05;
class CargoTurret_06;
class CargoTurret_07;
class CargoTurret_08;
class CargoTurret_09;
class CBA_Extended_EventHandlers_base;
class CommanderTurret;
class CopilotTurret;
class EventHandlers;
class FrontTurret;
class GunnerTurret;
class LeftDoorGun;
class MainTurret;
class RearTurret;
class RightDoorGun;
class TextureSources;
class Turrets;
#include "CfgVehicles.inc"

#include "CfgGroups.inc"
#include "CfgFactionClasses.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    author = "Bernard ""Egg"" Teller";
    authors[] = {"Bernard ""Egg"" Teller", "Maid"};
    skipWhenMissingDependencies = TRUE;
    units[] = {
      CLASSES_VEHICLES
      , "O_CLA_Rifleman_01"
      , "O_CLA_LightRifle_01"
      , "O_CLA_LightRifle_02"
      , "O_CLA_LightRifle_03"
      , "O_CLA_LightRifle_04"
      , "O_CLA_LightRifle_05"
      , "O_CLA_LightMG_01"
      , "O_CLA_LightSniper_01"
      , "O_CLA_LightAT_01"
      , "O_CLA_Teamlead_01"
      , "O_CLA_Medic_01"
      , "O_CLA_Breacher_01"
      , "O_CLA_Rifleperson_01"
      , "O_CLA_Autorifle_01"
      , "O_CLA_Sniper_01"
      , "O_CLA_Rifleperson_02"
      , "O_CLA_Grenadier_01"
      , "O_CLA_Elite_Rifleperson_01"
      , "O_CLA_Elite_Rifleperson_02"
      , "O_CLA_Elite_Teamlead_01"
      , "O_CLA_Elite_Breacher_01"
      , "O_CLA_Elite_AntiArmor_01"
      , "O_CLA_Elite_Medic_01"
      , "O_CLA_Elite_Autorifle_01"
      , "O_CLA_Crew_01"
      , "O_CLA_Crew_02"
      , "O_CLA_Reaper_01"
      , "O_CLA_Reaper_Teamlead_01"
      , "O_CLA_Reaper_Autorifle_01"
      , "O_CLA_Reaper_AntiArmor_01"
      , "O_CLA_Puma_01"
      , "O_CLA_Reaper_Sniper_01"
      , "O_CLA_Reaper_Breacher_01"
      , "O_CLA_Reaper_AntiAir_01"
      , "O_CLA_Reaper_Medic_01"
      , "O_CLA_Disassembeled_MG_01"
      , "O_CLA_Warthog_FAV_01"
      , "O_CLA_Oryx_IFV_01"
      , "O_CLA_Truck_01"
      , "O_CLA_Warthog_APC_01"
      , "O_CLA_SWS_Ferret_01"
      , "O_CLA_Warthog_MG_01"
      , "O_CLA_Recluse_MBT_01"
      , "O_CLA_Falcon_01"
      , "O_OCLA_Falcon_02"
      , "O_CLA_Salamander_GMG_01"
      , "O_CLA_Pelican_01"
      , "O_CLA_HMG_Raised_01"
      , "O_CLA_Mortar_01"
      , "O_CLA_Tarantula_01"
      , "O_CLA_Wyvern_01"
      , "O_CLA_Mortar_Tube_01"
      , "O_CLA_Mortar_Bipod_01"
      , "O_CLA_Rooikat_01"
      , "O_CLA_Rooikat_UP_01"
      , "O_CLA_Sholef_01"
      , "O_CLA_Seara_01"
      , "O_CLA_Minigun_01"
      , "O_CLA_Beetle_MBT_01"
      , "O_CLA_Reaper_Demolitionist_01"
      , "O_CLA_Puma_AT_01"
      , "O_CLA_Wyvern_VT_01"
      , "O_CLA_T14_MBT_01"
      , "O_CLA_T14k_01"
      , "O_CLA_T100X_MBT_01"
      , "O_CLA_Pelican_70mm_01"
      , "O_CLA_MG_Tripod_01"
      , "O_CLA_Assault_Boat_01"
      , "O_CLA_Otokar_01"
      , "O_CLA_Viper_01"
      , "O_CLA_Reaper_Officer_01"
      , "O_CLA_Reaper_Missile_Specialist_01"
    };
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "A3_Air_F_Beta_Heli_Transport_01"
      , "A3_Air_F_Beta"
      , "A3_Air_F_EPC_Plane_CAS_01"
      , "A3_Air_F_EPC_Plane_CAS_02"
      , "A3_Air_F_Exp_Plane_Civil_01"
      , "A3_Air_F_Exp_VTOL_01"
      , "A3_Air_F_Exp_VTOL_02"
      , "A3_Air_F_Exp"
      , "A3_Air_F_Gamma_Plane_Fighter_03"
      , "A3_Air_F_Heli_Light_01"
      , "A3_Air_F_Heli_Light_02"
      , "A3_Air_F_Heli"
      , "A3_Air_F_Jets_Plane_Fighter_01"
      , "A3_Air_F_Jets_Plane_Fighter_02"
      , "A3_Air_F_Jets_Plane_Fighter_04"
      , "A3_Air_F_Jets_UAV_05"
      , "A3_Air_F"
      , "A3_Armor_F_Beta_APC_Tracked_01"
      , "A3_Armor_F_Beta_APC_Tracked_02"
      , "A3_Armor_F_Beta_APC_Wheeled_01"
      , "A3_Armor_F_Beta_APC_Wheeled_02"
      , "A3_Armor_F_Beta"
      , "A3_Armor_F_Decade_MBT_02"
      , "A3_Armor_F_EPB_APC_Tracked_03"
      , "A3_Armor_F_EPB_MBT_03"
      , "A3_Armor_F_EPC_MBT_01"
      , "A3_Armor_F_Gamma_APC_Wheeled_03"
      , "A3_Armor_F_Gamma_MBT_01"
      , "A3_Armor_F_Gamma_MBT_02"
      , "A3_Armor_F_Tank_AFV_Wheeled_01"
      , "A3_Armor_F_Tank_LT_01"
      , "A3_Armor_F_Tank_MBT_04"
      , "A3_Boat_F_Boat_Armed_01"
      , "A3_Boat_F_Exp_Boat_Armed_01"
      , "A3_Boat_F"
      , "A3_Characters_F_Exp"
      , "A3_Characters_F"
      , "A3_Data_F_Curator"
      , "A3_Data_F_ParticleEffects"
      , "A3_Data_F"
      , "A3_Soft_F_Beta_MRAP_03"
      , "A3_Soft_F_Beta_Truck_01"
      , "A3_Soft_F_Beta_Truck_02"
      , "A3_Soft_F_Enoch_Truck_02"
      , "A3_Soft_F_Enoch_UGV_02"
      , "A3_Soft_F_EPC_Truck_03"
      , "A3_Soft_F_Exp_LSV_02"
      , "A3_Soft_F_Exp_Offroad_02"
      , "A3_Soft_F_Gamma_Hatchback_01"
      , "A3_Soft_F_Gamma_Truck_01"
      , "A3_Soft_F_Gamma_Truck_02"
      , "A3_Soft_F_Gamma_Van_01"
      , "A3_Soft_F_Orange_Van_02"
      , "A3_Soft_F"
      , "A3_Sounds_F_Exp"
      , "A3_Sounds_F_Tank"
      , "A3_Sounds_F"
      , "A3_Static_F_AA_01"
      , "A3_Static_F_AT_01"
      , "A3_Static_F_HMG_02"
      , "A3_Static_F_Mortar_01"
      , "A3_Static_F"
      , "19thArmor"
      , "19thODSTArmor"
      , "ace_aircraft"
      , "ace_artillerytables"
      , "ace_cargo"
      , "ace_cookoff"
      , "ace_csw"
      , "ace_dragging"
      , "ace_gforces"
      , "ace_hunterkiller"
      , "ace_interaction"
      , "ace_logistics_uavbattery"
      , "ace_medical_feedback"
      , "ace_mk6mortar"
      , "ace_movement"
      , "ace_realisticnames"
      , "ace_refuel"
      , "ace_repair"
      , "ace_tagging"
      , "ace_thermals"
      , "ace_vehicle_damage"
      , "ace_vehicles"
      , "ace_viewports"
      , "babe_int_EHs"
      , "cba_xeh"
      , "CUP_Core"
      , "CUP_WarfareBuildings"
      , "DMNS_Shortsword_F"
      , "DMNS_Units"
      , "DMNS_Vehicles_Nightingale"
      , "emr_main"
      , "lambs_danger"
      , "lambs_formations"
      , "lambs_range"
      , "LM_OPCAN_KOS_VEH"
      , "LM_OPCAN_URA"
      , "OPTRE_ACE_Compat_Medical"
      , "OPTRE_ACE_Compat"
      , "OPTRE_FC_Vehicles_Banshee"
      , "OPTRE_FC_Vehicles_Locust"
      , "OPTRE_FC_Vehicles_Spectre"
      , "OPTRE_FC_Vehicles_T26"
      , "OPTRE_FC_Vehicles_T32_Ghost"
      , "OPTRE_Ins_Units_IND"
      , "OPTRE_Ins_Units_URF"
      , "OPTRE_Plus_Longsword"
      , "OPTRE_Plus"
      , "OPTRE_UNSC_Units"
      , "OPTRE_Vehicles_Air_Falcon"
      , "OPTRE_Vehicles_Elephant"
      , "OPTRE_Vehicles_Grizzly"
      , "OPTRE_Vehicles_Hornet"
      , "OPTRE_Vehicles_M494"
      , "OPTRE_Vehicles_M808B2"
      , "OPTRE_Vehicles_M808L"
      , "OPTRE_Vehicles_M808S"
      , "OPTRE_Vehicles_Misc"
      , "OPTRE_Vehicles_Pelican"
      , "OPTRE_Vehicles_Pod"
      , "OPTRE_Vehicles_Sabre"
      , "OPTRE_Vehicles_Scorpion"
      , "OPTRE_Vehicles_SOCOM_Pelican"
      , "OPTRE_Vehicles_Sparrowhawk"
      , "OPTRE_Vehicles_Warthog"
      , "OPTRE_Vehicles_Wildebeest"
      , "Splits_Vehicles_Air_Pelican"
      , "sws_vehicles"
      , "zen_attributes"
    };
    VERSION_CONFIG;
  };
};
