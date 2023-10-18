#include "script_component.hpp"

/*
 * Author: Maid
 * Add a player's role history to their diary.
 *
 * Arguments:
 * 0: The roles map from CfgRoles cache <HASHMAP>
 * 1: The ordered array of the role classnames <ARRAY>
 * 2: The history of roles player from the server <HASHMAP>
 *
 * Return Value:
 * Diary record created <OBJECT>
 *
 * Public: No
 */

params [["_rolesHistory", createHashMap]];
private _roles = uiNamespace getVariable [QGVAR(rolesCache), createHashMap];
private _order = uiNamespace getVariable [QGVAR(rolesOrder), []];
TRACE_3("AddMyRoleHistory",_roles,_order,_rolesHistory);

player createDiarySubject ["Roles", "Roles", QPATHTOF(data\sws_icon_howl_ca.paa)];
private _title = "My Role History";
private _body = [_order, {
    params ["_prev", "_curr"];
    private _role = _roles get _curr;
    private _name = _role get "name";
    private _opsAsRole = _rolesHistory getOrDefault [_curr, 0];
    private _currText = format ["%1: %2", _name, _opsAsRole];
    if (_prev == "") exitWith {
        _currText;
    };

    format ["%1<br/>%2",_prev,_currText];
}, ""] call EFUNC(common,reduce);
TRACE_1("Body",_body);
player createDiaryRecord ["Roles", [_title, _body]];
