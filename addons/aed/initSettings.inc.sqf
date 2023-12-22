#define CATEGORY QNAME(Medical)
#define SUBCATEGORY "Defibrillator"

[
  QGVAR(trainingLevelRequired),
  "LIST",
  ["Training Required", "Minimum training level required to defib a patient."],
  [CATEGORY, SUBCATEGORY],
  [[0, 1, 2], ["No Training", "Medic", "Doctor"], 1],
  true
] call CBA_fnc_addSetting;

[
  QGVAR(treatmentTime),
  "SLIDER",
  ["Treatment Time", "Time, in seconds, required to defib a patient."],
  [CATEGORY, SUBCATEGORY],
  [0.1, 60, 15, 1],
  true
] call CBA_fnc_addSetting;

[
  QGVAR(chanceMin),
  "SLIDER",
  ["Success Chance (Min)", "Minimum percentage chance for AED to work."],
  [CATEGORY, SUBCATEGORY],
  [0, 100, 60, 0],
  true
] call CBA_fnc_addSetting;

[
  QGVAR(chanceMax),
  "SLIDER",
  ["Success Chance (Max)", "Maximum percentage chance for AED to work."],
  [CATEGORY, SUBCATEGORY],
  [0, 100, 95, 0],
  true
] call CBA_fnc_addSetting;
