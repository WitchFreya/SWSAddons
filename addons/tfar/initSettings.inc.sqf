[
  QGVAR(restoreRadios),
  "LIST",
  ["Restore radio settings with loadout", "When you load a loadout within the arsenal, what radio settings should be preserved from your previous loadout?"],
  [
    // TFAR clientside settings. Normally it would be preferable to let CBA do the localize later, but TFAR does it before so we have to as well
    localize "STR_tfar_settings_clientSide",
    "[SWS] TFAR Additions"
  ],
  [
    // Values
    ["none", "sr_only", "lr_only", "both"],
    // Display Names
    [
      ["None", "Disable this feature."],
      ["SR Only", "Just restore short-range radios."],
      ["LR Only", "Just restore long-range radios."],
      ["SR & LR", "Restore both short-range and long-range radios."]
    ],
    // Default Index
    3
  ]
] call CBA_fnc_addSetting;
