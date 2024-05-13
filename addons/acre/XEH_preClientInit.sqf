#include "script_component.hpp"

GVAR(customRightPanel) = [
  [] call FUNC(radioClassNames),
  "Radios",
  "a3\modules_f_curator\data\portraitradio_ca.paa"
] call ace_arsenal_fnc_addRightPanelButton;
