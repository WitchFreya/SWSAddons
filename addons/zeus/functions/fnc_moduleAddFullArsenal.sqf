#include "script_component.inc.sqf"
/*
 * Author: Maid
 * Add a full SWS Arsenal to an object
 *
 * Arguments:
 * 0: The module logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_logic"];

if !(local _logic) exitWith {};

private _object = attachedTo _logic;
TRACE_3("moduleAddFullArsenal",_logic,_object,typeOf _object);

switch (true) do {
  case (isNull _object): {
    ["Place on an object"] call ace_zeus_fnc_showMessage;
  };
  case (isPlayer _object): {
    ["Cannot create arsenal on a player"] call ace_zeus_fnc_showMessage;
  };
  case !(alive _object): {
    ["Cannot create arsenal on a destroyed object"] call ace_zeus_fnc_showMessage;
  };
  default {
    [_object, true] call ace_arsenal_fnc_removeBox;
    [_object] call EFUNC(arsenal,addFullArsenal);
  };
};

deleteVehicle _logic;
