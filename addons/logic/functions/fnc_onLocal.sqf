#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Handle the locality change of a unit. See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Local
 *
 * Arguments:
 * 0: entity <OBJECT> - The object that changed locality
 * 1: local <BOOLEAN> - Whether it's local to the current machine
 *
 * Return Value:
 * True on success.
 *
 * Example:
 * [player, true] call sws_logic_fnc_onLocal;
 *
 * Public: No
 */

TRACE_1("onLocal",_this);

params [
  ["_entity", objNull, [objNull]],
  ["_isLocal", false, [true]]
];

// We only care about where the unit came from.
if (_isLocal) exitWith {
  TRACE_1("Entity is local to new machine, exiting",_entity);
  true;
};

if (isDamageAllowed _entity) exitWith {
  TRACE_2("Unit damage is allowed, exiting",_entity,_isLocal);
  true;
};

[QGVAR(allowDamage), [_entity, false], _entity] call CBA_fnc_targetEvent;
