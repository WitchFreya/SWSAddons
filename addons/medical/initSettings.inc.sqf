#define CATEGORY QNAME(Medical)
#define SUBCATEGORY "Common"

[
  QGVAR(biofoamTreatmentTime),
  "SLIDER",
  ["Biofoam Time", "Time, in seconds, required to inject biofoam into a patient."],
  [CATEGORY, SUBCATEGORY],
  [0.1, 60, 6, 1],
  true
] call CBA_fnc_addSetting;
