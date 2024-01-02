#include "script_component.hpp"

if (!hasInterface) exitWith {};

// CBA keybinds: https://github.com/CBATeam/CBA_A3/wiki/Keybinding

// ALT+P - Open Role Menu
[
  ["TFAR", "Zeus"],
  QGVAR(curatorCamEarsToggle),
  ["Toggle Zeus camera hearing", "Toggle whether you hear from your person or from Zeus cam. Note: You'll need to close and reopen the Zeus interface for this to take effect."],
  // On Press
  {
    TFAR_curatorCamEars = !TFAR_curatorCamEars;
  },
  // On Release
  {}
] call CBA_fnc_addKeybind;


