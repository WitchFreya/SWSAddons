#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.inc.sqf"
ADDON = true;

[
  QGVAR(restoreSwRadio), "CHECKBOX",
  ["Restore SR Settings with Loadout", "When you restore loadout within an arsenal, restore the SR radio settings as well."],
  [QNAME(Common), COMPONENT_NAME],
  true,
  0
] call CBA_fnc_addSetting;
