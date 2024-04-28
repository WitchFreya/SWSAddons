#define CATEGORY QNAME(General)

[
  QGVAR(saveLastLoadout),
  "CHECKBOX",
  ["Save Last Loadout", "When exiting the arsenal, save the items you have as a loadout. Warning: Disabling this will prevent you from easy resupplies."],
  [CATEGORY, "ACE Arsenal"],
  true,
  0,
  {
    params ["_newValue"];
    if (_newValue) exitWith {};
    systemChat "Warning: You have disabled saving your last loadout from the ACE Arsenal. This will make Zeus resupplying your loadout more difficult.";
  }
] call CBA_fnc_addSetting;

[
  QGVAR(lastLoadoutName),
  "EDITBOX",
  ["Last Loadout Name", "When saving a loadout with Save Last Loadout, it will be saved using this name."],
  [CATEGORY, "ACE Arsenal"],
  "[SWS] Last Arsenal Loadout",
  0
] call CBA_fnc_addSetting;

