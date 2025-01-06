#include "script_component.inc.sqf"

TRACE_1(QFUNC(serializeRadio),_this);

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
 * ["ACRE_PRC148_ID_1"] call sws_acre_fnc_serializeRadio;
 *
 * Public: No
 */

params [
  ["_radioId", "", [""]]
];

if (_radioId isEqualTo "") exitWith {
  ERROR("Cannot serialize nonexistent radio");
};

private _props = GVAR(radioProps) apply {
  private _propName = _x;
  // determine which function in ACRE is used as the getter for this prop
  private _fnc_getValue = call {
    private _fncName_get = format [ACRE_QFUNC(getRadio%1), _propName];
    private _maybe_fnc = currentNamespace getVariable _fncName_get;
    if !(isNil {_maybe_fnc}) exitWith {
      _maybe_fnc;
    };
    // the getter function may be called 'is' instead for boolean values
    private _fncName_is = format [ACRE_QFUNC(isRadio%1), _propName];
    currentNamespace getVariable _fncName_is;
  };

  if (isNil {_fnc_getValue}) then {
    ERROR_2("Attempted to serialize radio %1 property with no getter for property %2",_radioId,_propName);
    continue;
  };
  private _value = [_radioId] call _fnc_getValue;
  [_x, _value];
} select {!isNil {_x}};

private _base = [_radioId] call ACRE_FUNC(getBaseRadio);

[_base, createHashMapFromArray _props];
