#include "script_component.hpp"

class Components;
class Turrets;
class MainTurret;
class CommanderOptics;
class HitPoints;
class HitComTurret;
class HitComGun;
class TextureSources;
class SWS_SensorTargetTemplate;
class SWS_SensorDisplayTemplate;
class VehicleSystemsTemplateLeftCommander;
class VehicleSystemsTemplateRightCommander;
class SensorTemplatePassiveRadar;
class SensorTemplateDataLink;
class SensorTemplateLaser;

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"
#include "CfgWeapons.inc"
#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { CLASSES_WEAPONS };
    ammo[] = { CLASSES_AMMO };
    magazines[] = { CLASSES_MAGAZINES };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "a3_armor_f_epb"
      , "a3_armor_f_epb_mbt_03"
      , "a3_armor_f_beta"
      , "a3_armor_f_gamma"
      , "a3_weapons_f"
      , "ace_medical_treatment"
      , "optre_unsc_units_army"
      , "OPTRE_Ins_Units"
      , "sws_main"
      , "sws_weapons_ar0m37s"
    };
    VERSION_CONFIG;
  };
};
