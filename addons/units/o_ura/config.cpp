#include "script_component.hpp"

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    author = QUOTE(AUTHOR);
    authors[] = {AUTHORS};
    skipWhenMissingDependencies = TRUE;
    units[] = {CLASSES_VEHICLES};
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "EMP_Greystone_PMC" // TODO: Remove reliance on Fire Support+.
      , "ace_nouniformrestrictions"
      , "OPTRE_Core"
      , "OPTRE_Vehicles"
    };
    VERSION_CONFIG;
  };
};
