#include "script_component.inc.sqf"

TRACE_1(QFUNC(setRadioOnOffState),_this);

/*
 * Author: Maid
 * Set the On/Off state of a radio. ACRE does not provide an API for this by default, so I'm rolling my own.
 *
 * Arguments:
 * 0: Radio ID <STRING>
 * 1: On/Off State <NUMBER|BOOLEAN>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["ACRE_PRC148_ID_1", 1] call acre_api_fnc_setOnOffState;
 *
 * Public: Yes
 */

params [
  ["_radioId", "", [""]],
  ["_onOffState", 1, [true, 1]]
];

if !([_radioId] call EFUNC(sys_data,isRadioInitialized)) exitWith {
  ERROR_2("setRadioOnOffState called on uninitialized radio",_radioId,_onOffState);
};
if (IS_NUMBER(_onOffState) && {!(_onOffState in [0, 1])}) exitWith {
  ERROR_2("setRadioOnOffState called with invalid onOffState",_radioId,_onOffState);
};

private _newOnOffState = [0, 1] select _onOffState;

[_radioId, "getOnOffState", _newOnOffState] call EFUNC(sys_data,dataEvent);
