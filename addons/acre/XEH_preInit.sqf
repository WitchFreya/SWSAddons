#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.inc.sqf"
ADDON = true;

private _items = [
  "ACRE_PRC77",
  "ACRE_PRC117F",
  "ACRE_PRC148",
  "ACRE_PRC152",
  "ACRE_PRC343",
  "ACRE_SEM52SL ",
  "ACRE_SEM70",
  "ACRE_BF888S",
  "ACRE_VHF30108SPIKE",
  "ACRE_VHF30108",
  "ACRE_VHF30108MAST"
];

[_items, "Communication", "a3\modules_f_curator\data\iconradio_ca.paa"] call ace_arsenal_fnc_addRightPanelButton;
