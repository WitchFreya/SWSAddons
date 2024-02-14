#include "\a3\ui_f\hpp\definedikcodes.inc"

[
  ["SWS Addons", "ODST HUD"],
  QGVAR(toggleHud),
  ["Toggle ODST HUD", "Enable/disable the ODST HUD overlay."],
  {},
  {
    [] call FUNC(toggleHud);
  },
  [DIK_APPS, [false, false, false]]
] call CBA_fnc_addKeybind;
