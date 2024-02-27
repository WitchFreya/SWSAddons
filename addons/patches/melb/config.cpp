#include "script_component.hpp"


class Components;
class SensorTemplatePassiveRadar;
class SensorTemplateLaser;
class SensorTemplateDataLink;
class TransportPylonsComponent;
class Pylons;
class PilotCamera;
class Turrets;
class LowROF;
class Mode_Burst;
class Burst1;
class Burst2;
class AnimationSources;
#include "CfgVehicles.inc"
#include "CfgWeapons.inc"
#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "MELB"
      , "a3_weapons_f"
      , "b_unscaf"
      , "optre_weapons_ammo_signal_smoke"
      , "optre_weapons_smg"
      , "ace_hellfire"
      , "ace_medical_treatment"
      , "sws_main"
      , "sws_weapons_ar0m37s" 
      };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
