class Single;
class FullAuto;
class WeaponSlotsInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class SWS_Scopes_PDW;
class SWS_Pointers_NoBMR;

#include "script_component.hpp"
#include "CfgWeapons.inc"
#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"

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
