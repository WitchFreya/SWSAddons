#define CATEGORY QNAME(General)
#define SUBCATEGORY "ACRE"

[
  QGVAR(restoreRadiosTimeout),
  "SLIDER",
  [
    "Timeout for Restoring Radios",
    "How long should we wait after an attempt to restore radios before giving up? Set to -1 to never timeout."
  ],
  [CATEGORY, SUBCATEGORY],
  [-1, 60, 10, 0]
] call CBA_fnc_addSetting;

[
  QGVAR(restoreOnRespawn),
  "CHECKBOX",
  [
    "Restore Radios on Respawn",
    "Check this box to enable restoring radios on respawn, otherwise they'll reset to their default values."
  ],
  [CATEGORY, SUBCATEGORY],
  true
] call CBA_fnc_addSetting;

[
  QGVAR(restoreOnLoadoutSet),
  "CHECKBOX",
  [
    "Restore Radios on Loadout Load",
    "Check this box to enable restoring radios when you load a loadout if both loadouts have any number of similar radios."
  ],
  [CATEGORY, SUBCATEGORY],
  true
] call CBA_fnc_addSetting;
