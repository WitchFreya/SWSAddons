#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgAmmo.inc"
#include "CfgWeapons.inc"
#include "CfgMagazineWells.inc"
#include "CfgWeaponCursors.inc"

#include "SWS_Scopes_65mm.inc"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "A3_Weapons_F",
      "A3_Weapons_F_Enoch",
      "EMP_Greystone_PMC",
      "ace_arsenal",
      "ace_grenades",
      "OPTRE_ACE_Compat",
      "OPTRE_FunctionsLibrary_supercombustion",
      "OPTRE_Weapons_Ammo_Signal_Smoke",
      "OPTRE_Weapons_Ammo",
      "OPTRE_Weapons_AR",
      "OPTRE_Weapons_Sticky",
      "SWS_Main",
      "19_UNSC_Weapons", // ammo
      "Dmns_Weapons_F_MachineGuns" };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
