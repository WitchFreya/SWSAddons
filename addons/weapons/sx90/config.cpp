#include "script_component.hpp"

#include "CfgMagazines.inc"

class Single;
class FullAuto;
class WeaponSlotsInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class SWS_Pointers_NoBMR;

#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "sws_ballistics_tracers"
    };
    VERSION_CONFIG;
  };
};
