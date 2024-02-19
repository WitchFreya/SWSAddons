// CBA keybinds: https://github.com/CBATeam/CBA_A3/wiki/Keybinding
[
  ["TFAR", "Zeus"],
  QGVAR(curatorCamEarsToggle),
  ["Toggle Zeus camera hearing", "Toggle whether you hear from your person or from Zeus cam."],
  // On Press
  {},
  // On Release
  {
    if (isNull getAssignedCuratorLogic player) exitWith {};
    private _newValue = !(currentNamespace getVariable [PATCH_QGVAR(curatorCamEars), true]);
    [
      PATCH_QGVAR(curatorCamEars),
      _newValue,
      true,
      "client"
    ] call CBA_settings_fnc_set;

    hintSilent format ["Zeus TFAR: %1", ["Hear from Unit", "Hear from Camera"] select _newValue];
  } // No default binding
] call CBA_fnc_addKeybind;
