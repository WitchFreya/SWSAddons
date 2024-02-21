// CBA keybinds: https://github.com/CBATeam/CBA_A3/wiki/Keybinding
[
  ["Crows Zeus Additions", "Zeus"],
  QGVAR(rcIcon),
  ["Toggle RC icon", "Show/hide Crow's Zeus Additions remote-control icon; this toggle will only last during the mission."],
  // On Press
  {},
  // On Release
  {
    if (isNull getAssignedCuratorLogic player) exitWith {};
    private _newValue = !(currentNamespace getVariable [PATCH_QGVAR(cba_setting_rc_helper), true]);
    [
      PATCH_QGVAR(cba_setting_rc_helper),
      _newValue,
      true,
      "client"
    ] call CBA_settings_fnc_set;

    hintSilent format ["Zeus RC Icon: %1", ["Hidden", "Shown"] select _newValue];
  } // No default binding
] call CBA_fnc_addKeybind;
