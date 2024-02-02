#include "script_component.hpp"

#include "SensorTargetTemplates.inc"

class Components;
class SensorTemplateIR;
class SensorTemplateLaser;
class SensorTemplateDataLink;

#include "CfgMagazineWells.inc"
#include "CfgVehicles.hpp"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "A3_Armor_F_EPB"
      , "A3_Armor_F_Beta"
      , "A3_Armor_F_Gamma"
      , "A3_Soft_F"
      , "A3_Weapons_F_Tank"
      , "ace_medical"
      , "OPTRE_UNSC_Units_Army"
      , "B_UNSCAF"
      , "sws_units"
      , "sws_common"
      , "sws_main"
      , "sws_weapons"
    };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
