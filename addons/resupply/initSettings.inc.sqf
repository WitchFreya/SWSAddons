#define CATEGORY QNAME(General)
#define SUBCATEGORY "Restock"

[
  QGVAR(restockTime),
  "SLIDER",
  ["Restock Time", "Time, in seconds, required to complete the restock action from the SWS Resupply Player Loadouts module."],
  [CATEGORY, SUBCATEGORY],
  [0.1, 60, 8, 1],
  2
] call CBA_fnc_addSetting;
