#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Disable damage on some objects that would be super fragile after placing.
 *
 * Arguments:
 * 0: Player <OBJECT> - The person who placed the object
 * 1: Side <SIDE>  - The side of the person who placed the object
 * 2: Object <OBJECT> - The object instance that wasp laced.
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, blufor, cursorObject] call sws_fortify_fnc_onAcexFortifyObjectPlaced;
 *
 * Public: No
 */

params ["_player", "_side", "_obj"];

private _invulnItems = ["jbad_steps"];
TRACE_3("objectPlaced",_player,_side,_obj);
if (!(typeOf _obj in _invulnItems)) exitWith {0};
TRACE_1("Disabling Damage",_obj);
_obj allowDamage false;
