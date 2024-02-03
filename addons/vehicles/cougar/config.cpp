#include "script_component.hpp"

class CommanderOptics;
class Components;
class EventHandlers;
class MainTurret;
class SensorTemplateDataLink;
class SensorTemplateIR;
class SensorTemplatePassiveRadar;
class SWS_SensorTargetTemplate;
class SWS_SensorDisplayTemplate;
class TextureSources;
class Turrets;
class VehicleSystemsTemplateLeftCommander;
class VehicleSystemsTemplateRightCommander;

#include "CfgVehicles.inc"

class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "ace_medical_treatment"
      , "optre_unsc_units_army"
      , "sws_main"
      , "sws_weapons_ar0m37s"
    };
    VERSION_CONFIG;
  };
};
