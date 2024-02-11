#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Event-based remote execution passthrough for allowDamage
 *
 * Arguments:
 * 0: entity <OBJECT> - The object to target
 * 1: allowDamage <BOOLEAN> - Whether or not to allow damage on the entity
 *
 * Return Value:
 * <BOOLEAN> - Whether or not the unit is now damageable.
 *
 * Example:
 * [player, false] call sws_logic_fnc_allowDamage;
 *
 * Public: No
 */

TRACE_1("allowDamage",_this);

params [
  ["_entity", objNull, [objNull]],
  ["_allowDamage", true, [true]]
];

if !(local _entity) exitWith {
  throw (format ["allowDamage should only be executed where entity %1 is local.", str _entity]);
};
_entity allowDamage _allowDamage;
_allowDamage;
