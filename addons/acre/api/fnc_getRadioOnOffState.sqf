#include "script_component.inc.sqf"

TRACE_1(QFUNC(getRadioOnOffState),_this);

/*
 * Author: Maid
 * Get the On/Off state of a radio. ACRE does not provide an API for this by default, so I'm rolling my own.
 *
 * Arguments:
 * 0: Radio ID <STRING>
 *
 * Return Value:
 * 1 if the radio is on, 0 if off, -1 if error <NUMBER>
 *
 * Example:
 * ["ACRE_PRC148_ID_1"] call acre_api_fnc_getOnOffState;
 *
 * Public: Yes
 */

params [
  ["_radioId", "", [""]]
];

if !([_radioId] call EFUNC(sys_data,isRadioInitialized)) exitWith { -1 };
[_radioId, "getOnOffState"] call EFUNC(sys_data,dataEvent);
