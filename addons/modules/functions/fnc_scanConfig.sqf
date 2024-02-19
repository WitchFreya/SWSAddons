#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Scan configs to find our stuff that should be in the arsenal.
 *
 * Arguments:
 * 0: Config file to scan <CONFIG>
 *
 * Return Value:
 * 0: Config names <STRING[]> - The items that should be in the arsenal.
 *
 * Public: No
 */

params ["_config"];
private _filter = toString {
  (toLower (getText (_x >> "dlc")) in ['sws','swst','erp'])
  && { getNumber (_x >> "scopeArsenal") > 1; }
  && { getNumber (_x >> QGVAR(arsenalHide)) != 1; };
};

private _relevantConfigs = ["CfgWeapons","CfgGlasses","CfgMagazines","CfgVehicles"];
private _swsItemConfigs = flatten (_relevantConfigs apply { _filter configClasses (_config >> _x); });
private _itemNames = _swsItemConfigs apply { configName _x; };

[_itemNames];
