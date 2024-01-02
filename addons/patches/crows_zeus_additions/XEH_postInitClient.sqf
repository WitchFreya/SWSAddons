#include "script_component.hpp"

if (!hasInterface) exitWith {};

// CBA keybinds: https://github.com/CBATeam/CBA_A3/wiki/Keybinding

// ALT+P - Open Role Menu
[
  ["Crows Zeus Additions", "Zeus"],
  QGVAR(rcIcon),
  ["Toggle RC icon", "Show/hide an icon over the head of units that are being controlled by other Zeuses"],
  // On Press
  {
    crowsza_zeus_text_CBA_Setting_rc_helper = !crowsza_zeus_text_CBA_Setting_rc_helper;
  },
  // On Release
  {}
] call CBA_fnc_addKeybind;


