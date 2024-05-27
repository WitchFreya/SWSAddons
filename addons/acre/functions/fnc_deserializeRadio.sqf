#include "script_component.inc.sqf"

TRACE_1(QFUNC(deserializeRadio),_this);

/*
 * Author: Maid
 * Serialize a unique radio into a generic radio.
 *
 * Arguments:
 * 0: Radio ID <STRING>
 *
 * Return Value:
 * 0: Base Radio <STRING>
 * 1: Serialized Radio <RADIO MAP>
 *
 * Example:
 * ["ACRE_PRC148_ID_1", _serializedRadio] call sws_acre_fnc_serializeRadio;
 *
 * Public: No
 */

params [
  ["_radioId", "", [""]],
  "_serializedRadioState"
];

if (_radioId isEqualTo "") exitWith {
  ERROR("Cannot serialize nonexistent radio");
};

private _valuesToRestore = keys _serializedRadioState arrayIntersect GVAR(radioProps);

{
  private _propName = _x;
  private _value = _y;
  if !(_propName in GVAR(radioProps)) then {
    ERROR_3("Attempted to deserialize radio with unrecognized property",_radioId,_propName,_value);
    continue;
  };
  private _fncName = format [ACRE_QFUNC(setRadio%1),_propName];
  private _fnc_setValue = currentNamespace getVariable _fncName;
  if (isNil {_fnc_setValue}) then {
    ERROR_2("Attempted to deserialize radio with no property setter",_radioId,_propName);
    continue;
  };
  [_radioId, _value] call _fnc_setValue;
} forEach _serializedRadioState;


