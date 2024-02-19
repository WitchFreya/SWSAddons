#include "script_component.inc.sqf"

/*
 * Author: Maid & Ashes
 * PreStart scan for PHAN Ground Vehicles used for orbital drops.
 *  Add phan_unsc_groundVehicle = 1 to a config to include it.
 *
 * Arguments:
 * 0..N: _classNames <string[]> - Vehicles to include
 *
 * Return Value:
 * [Config Names: string[], Config Combobox Params: ZEN_COMBOBOX]
 *  See https://zen-mod.github.io/ZEN/#/frameworks/dynamic_dialog?id=combo-box-combo for combobox array params
 *
 * Public: No
 */

private _classNames = _this;
private _configs = _classNames apply { configFile >> "CfgVehicles" >> _x };
//--- https://zen-mod.github.io/ZEN/#/frameworks/dynamic_dialog?id=combo-box-combo
private _zen_combobox_configs = _configs apply {
  private _cfg = _x;
  private _side = [_cfg, "side", 4 /* sideUnknown */] call BIS_fnc_returnConfigEntry;
  private _color /* [R,G,B,A] */ = [
    [255, 0, 0, 255],
    [0, 0, 255, 255],
    [0, 255, 0, 255],
    [255, 0, 255, 255],
    [0, 0, 0, 255]
  ] select (_side min 4);
  private _displayname = [_cfg, "displayName", configName _cfg] call BIS_fnc_returnConfigEntry;
  private _picture = (_cfg >> "editorPreview") call BIS_fnc_getCfgData;
  [_displayName, ""/* tooltip */, _picture, _color];
};

[_classNames, _zen_combobox_configs];
