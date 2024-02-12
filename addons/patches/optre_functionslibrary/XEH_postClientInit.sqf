#include "script_component.hpp"

if (EGVAR(odst_hud,useImprovedHUD)) exitWith {
  TRACE_1("Using improved HUD",EGVAR(odst_hud,useImprovedHUD));
};

[] call OPTRE_fnc_init;
