#define CATEGORY QNAME(General)

[
  QGVAR(resupplyAirVehicle),
  "EDITBOX",
  ["Drop Source Vehicle", "What helicopter will be used to drop the resupply? (Class name in CfgVehicles)"],
  [CATEGORY, "Resupply"],
  "Splits_UNSC_D77_TC_Pelican",
  0,
  {
    private _setting = QGVAR(resupplyAirVehicle);
    params ["_newValue"];
    private _default = [_setting, "default"] call cba_settings_fnc_get;
    if (_newValue == _default) exitWith {};
    if (_newValue isKindOf "Air") exitWith {};
    private _title = format ["Invalid Value for %1 > %2 > %3", CATEGORY, "Resupply", _setting];
    private _errorMsg = format [
      "%2 does not extend from CfgVehicles/Air, the resupply module may not function correctly.",
      _newValue,
      _default
    ];
    ERROR_WITH_TITLE(_title,_errorMsg);
  }
] call CBA_fnc_addSetting;

