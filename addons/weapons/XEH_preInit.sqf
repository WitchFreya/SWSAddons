#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

OPTRE_STICKYABLE_NADE_TYPES_MAP set [
    QAMMO(DOUBLES(C7Sx,Sticky)),
    [
        7, // Time to Detonate
        "OPTRE_c7_sticky_obj", // Vehicle for sticky effect
        QAMMO(TRIPLES(C7Sx,Sticky,Explosion)), // Ammo for detonation
        1, // distance required for attach
        "" // effect for while attached pre-detonation
    ]
];
