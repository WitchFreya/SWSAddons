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
    units[] = {
      "O_URArmy_Squad_Lead_01"
      , "O_URArmy_Team_Lead_01"
      , "O_URArmy_Rifleperson_1_01"
      , "O_URArmy_Rifleperson_2_01"
      , "O_URArmy_Automatic_Rifle_01"
      , "O_URArmy_Medic_01"
      , "O_URArmy_Marksman_01"
      , "O_URArmy_Crew_01"
      , "O_URArmy_Sniper_01"
      , "O_URArmy_Spotter_01"
      , "O_URArmy_Marine_1_01"
      , "O_URArmy_Marine_2_01"
      , "O_URArmy_Marine_Team_Lead_01"
      , "O_URArmy_Marine_Medic_01"
      , "O_URArmy_Warrior_01"
      , "O_URArmy_HMG_Dagger_01"
      , "O_URArmy_HMG_Jeep_01"
      , "O_URArmy_Covered_Truck_01"
    };
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "EMP_Greystone_PMC" // TODO: Remove reliance on Fire Support+.
      , "ace_nouniformrestrictions"
      , "OPTRE_Core"
      , "OPTRE_Vehicles"
    };
  };
};
