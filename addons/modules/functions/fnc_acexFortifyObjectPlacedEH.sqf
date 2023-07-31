#include "script_component.hpp"

private _invulnItems = ["jbad_steps"];
params ["_player", "_side", "_obj"];
TRACE_3("objectPlaced",_player,_side,_obj);
if (!(typeOf _obj in _invulnItems)) exitWith {0};
TRACE_1("Disabling Damage",_obj);
_obj allowDamage false;
