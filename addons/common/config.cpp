#include "script_component.hpp"

#include "ACE_Arsenal_Stats.inc"
#include "Cfg3DEN.inc"
#include "CfgEditorCategories.inc"
#include "CfgEventHandlers.inc"
#include "CfgFactionClasses.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"a3_3den"};
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
