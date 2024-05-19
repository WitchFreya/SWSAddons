#include "script_component.hpp"


#include "CfgWeapons.inc"
#include "CfgMagazines.inc"

class PilotCamera;
class MainTurret;
class CopilotTurret;
class CommanderTurret;
class Components;
class PylonsNoseCannon;
class TextureSources;
class TransportPylonsComponent;
class Turrets;
class CommanderTurret;
class CopilotTurret;
#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      QUOTE(ADDON)
      , "OPTRE_Vehicles"
      , "OPTRE_UNSC_Units"
    };
    VERSION_CONFIG;
  };
};
