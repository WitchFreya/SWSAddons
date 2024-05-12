#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.inc.sqf"
ADDON = true;

private _acreRadios = uiNamespace getVariable [QGVAR(radioClassNames), []];
if (_acreRadios isEqualTo []) exitWith {
  TRACE_1("No radios found",_acreRadios);
};

[_acreRadios, "Radios", "a3\modules_f_curator\data\portraitradio_ca.paa"] call ace_arsenal_fnc_addRightPanelButton;
