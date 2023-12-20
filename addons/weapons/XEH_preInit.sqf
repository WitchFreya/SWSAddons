#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

OPTRE_STICKYABLE_NADE_TYPES_MAP set [
  "SWS_B_C7Sx_Sticky",
  [
    7, // Time to Detonate
    "OPTRE_C7_Sticky_Obj", // Vehicle for sticky effect
    "SWS_B_C7Sx_Sticky_Explosion", // Ammo for detonation
    1, // distance required for attach
    "" // effect for while attached pre-detonation
  ]
];
