#include "script_component.inc.sqf"

private _fnc_hideHud = {
  GVAR(showHud) = false;
  [QGVAR(showHud), [false]] call CBA_fnc_localEvent;
};

if (GVAR(showHud)) exitWith {
  call _fnc_hideHud;
};

if (isNull _helmetCfg && { isNull _gogglesCfg }) exitWith {
  if !(GVAR(showHud)) exitWith {};
  call _fnc_hideHud;
};

/** [unit: object] -> config style: string */
private _fnc_unitVisorHudData = {
  params [
    ["_unit", objNull, [objNull]]
  ];

  private _helmetStyle = (configFile >> "CfgWeapons" >> headgear _unit >> "optreHudStyle") call BIS_fnc_getCfgData;

  if !(isNil {_helmetStyle}) exitWith {_helmetStyle};

  (configFile >> "CfgGlasses" >> goggles _unit >> "optreHudStyle") call BIS_fnc_getCfgData;
};

private _hudStyle /* string | nil */ = [player] call _fnc_unitVisorHudData;

if (isNil {_hudStyle}) exitWith {
  TRACE_2("No HUD style found",headgear player,goggles player);
};

switch (_hudStyle) do {
  case "ODST_1": {
    GVAR(showHud) = true;
    [QGVAR(showHud), [true]] call CBA_fnc_localEvent;
  };
  case "EYE";
  case "Glasses": {
    ["Only ODST HUD currently available; switch back to the OPTRE HUD for the others."] call CBA_fnc_notify;
  };
  default {
    throw (format ["Unknown HUD style: %1"])
  };
};
