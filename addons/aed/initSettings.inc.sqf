#define SUBCATEGORY "Defibrillator"
#define CATEGORY QNAME(Medical)

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
