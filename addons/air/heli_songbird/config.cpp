#include "script_component.hpp"


class Components;
class TransportPylonsComponent;
class Turrets;
class CopilotTurret;
class CargoTurret;
class LowROF;
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
      , "OPTRE_UNSC_Units_Navy"
      , "optre_weapons"
      , "optre_weapons"
      , "ace_hellfire"
      , "ace_medical_treatment"
      , "sws_main"
      , "sws_weapons_ar0m37s"
    };
    VERSION_CONFIG;
  };
};
