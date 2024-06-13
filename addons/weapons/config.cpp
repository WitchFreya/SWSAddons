#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgMagazineWells.inc"

#include "SWS_Scopes.inc"
#include "SWS_Attachments.inc"
class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "ace_grenades"
      , "OPTRE_ACE_Compat"
      , "OPTRE_FunctionsLibrary"
      , "OPTRE_Weapons"
      , "19_UNSC_Weapons"
      , "Dmns_Weapons_F_MachineGuns"
      , "sws_main"
      , "sws_common"
      , "sws_ballistics"
      , "sws_tech"
    };
    VERSION_CONFIG;
  };
};
