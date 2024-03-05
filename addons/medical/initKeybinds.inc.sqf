// CBA keybinds: https://github.com/CBATeam/CBA_A3/wiki/Keybinding
[
  ["[SWS] Common"],
  QGVAR(quickUseNeuroStim),
  ["Quick-Use NeuroStim", "Quickly apply NeuroStim to yourself if you have one available."],
  // On Press
  {},
  // On Release
  {
    [player, player, "head", "SWS_NeuroStim"] call ace_medical_treatment_fnc_treatment;
  } // No default binding
] call CBA_fnc_addKeybind;
