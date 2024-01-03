#include "script_component.hpp"

/*
 * Author: Maid
 * Show role record completed in a fancy way.
 *
 * Arguments:
 * 0: new history <HASHMAP> - Presently unused, but comes from the event.
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [
  ["_newHistory", createHashMap, [createHashMap]]
];

//--- Use the new history just in case the client hasn't acknowledged the variable change from the server.
player setVariable ["erp_history", _newHistory];

private _name /* string */ = name player;
private _role /* string */ = player call erp_roles_fnc_unitRole;
private _roleName /* string */ = _role call erp_roles_fnc_displayName;
private _opsPlayed /* number */ = [player, _role] call erp_history_fnc_opCount;

private _rootFormat = "<t align='left' shadow='2' size='0.7' font='EtelkaMonospacePro'>%1</t>";
private _titleFormat = "<t>%1</t>";
private _valueFormat = "<t font='LCD14' color='#097969' size='1.0' align='right'>%1</t><br/>";
private _smallTitleFormat = "<t size='0.6'>%1</t>";
private _numberFormat = "<t font='LCD14' color='#50C878' size='1.5' align='right'>%1</t>";
[
  [
    ["SWS Operative", _titleFormat, 4],
    [toUpper _name, _valueFormat, 7],
    ["Role", _titleFormat, 4],
    [toUpper _roleName, _valueFormat, 7],
    ["Operations as Role", _smallTitleFormat, 4],
    [format ["%1", _opsPlayed], _numberFormat, 35]
  ],
  0, safeZoneY + safeZoneH / 2,
  _rootFormat
] spawn BIS_fnc_typeText;
