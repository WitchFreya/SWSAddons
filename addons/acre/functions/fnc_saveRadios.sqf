#include "script_component.inc.sqf"

TRACE_1(QFUNC(saveRadios),_this);

/*
 * Author: Maid
 * Save the state of radios of acre_player.
 *
 * Arguments:
 * 0: Namespace, defaults to acre_player, where the radios will be stored <NAMESPACE>
 *
 * Return Value:
 * The serialized radios.
 *
 * Example:
 * [] call sws_acre_fnc_saveRadios;
 *
 * Public: No
 */

params [
  ["_namespace", acre_player]
];

if !(local _namespace) exitWith {
  [QFUNC(saveRadios),_this] call CBA_fnc_targetEvent;
};

[QGVAR(beforeRadiosSaved), [_namespace]] call CBA_fnc_localEvent;

private _allRadios /* string[] */ = [] call ACRE_FUNC(getCurrentRadioList);

if (_allRadios isEqualTo []) exitWith {
  TRACE_1("Unit had no radios to save",acre_player);
};

private _pttRadios /* string[] */ = [] call ACRE_FUNC(getMultiPushToTalkAssignment);
private _otherRadios = _allRadios - _pttRadios;

private _serializedPTTRadios = _pttRadios apply {
  [_x] call FUNC(serializeRadio);
};

private _serializedOtherRadios = _otherRadios apply {
  [_x] call FUNC(serializeRadio);
};

_namespace setVariable [QGVAR(savedRadiosPTT), _serializedPTTRadios];
_namespace setVariable [QGVAR(savedRadiosOther), _serializedOtherRadios];
[QGVAR(radiosSaved), [_namespace, _serializedPTTRadios, _serializedOtherRadios]] call CBA_fnc_localEvent;
[_serializedPTTRadios, _serializedOtherRadios];


