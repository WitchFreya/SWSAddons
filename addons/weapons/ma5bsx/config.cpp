#include "script_component.hpp"

class Single;
class FullAuto;
class WeaponSlotsInfo;
class PointerSlot;
class CowsSlot;
class SWS_Scopes_762mm;
class OPTRE_M301UGL;

#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"sws_weapons", "OPTRE_Weapons"};
    VERSION_CONFIG;
  };
};
