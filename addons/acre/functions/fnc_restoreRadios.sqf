#include "script_component.inc.sqf"

TRACE_1(QFUNC(restoreRadios),_this);
TRACE_1("acre_player",acre_player);

/*
 * Author: Maid
 * Restore the radios of acre_player.
 *
 * Arguments:
 * 0: Namespace, defaults to acre_player, where the stored radio state will be retrieved <NAMESPACE>
 *
 * Return Value:
 * 0..N: The modified radio ids <STRING[]>
 *
 * Example:
 * [] call sws_acre_fnc_restoreRadios;
 *
 * Public: No
 */

params [
  ["_namespace", acre_player]
];

if !(local _namespace) exitWith {
  [QFUNC(restoreRadios),_this] call CBA_fnc_targetEvent;
};

if !([] call ACRE_FUNC(isInitialized)) exitWith {
  [
    {[] call ACRE_FUNC(isInitialized)},
    {_this call FUNC(restoreRadios)},
    _this,
    GVAR(restoreRadiosTimeout),
    {WARNING_1("Timed out waiting for all the radios on unit %1 to initialize",acre_player);}
  ] call CBA_fnc_waitUntilAndExecute;
};

private _savedPTTRadios = _namespace getVariable [QGVAR(savedRadiosPTT), []];
private _savedOtherRadios = _namespace getVariable [QGVAR(savedRadiosOther), []];
[QGVAR(beforeRadiosRestored), [_namespace, _savedPTTRadios, _savedOtherRadios]] call CBA_fnc_localEvent;

if (_savedPTTRadios isEqualTo []) exitWith {
  TRACE_1("No radio state to restore",acre_player);
};

private _allUnitRadios = [] call ACRE_FUNC(getCurrentRadioList);

private _fnc_findTargets = {
  params ["_sources", "_potentialTargets"];

  _sources apply {
    _x params ["_base", "_data"];
    private _target = _potentialTargets select {
      if (_base == ([_x] call ACRE_FUNC(getBaseRadio))) exitWith {_x};
      false;
    };
    if !(IS_STRING(_target)) then {
      continueWith nil;
    };
    [FUNC(deserializeRadio), [_target, _data]] call CBA_fnc_execNextFrame;
    _target;
  } select {!isNil {_x}};
};

private _pttRadioTargets = [_savedPTTRadios, _allUnitRadios] call _fnc_findTargets;
[_pttRadioTargets] call ACRE_FUNC(setMultiPushToTalkAssignment);

if (_savedOtherRadios isEqualTo []) exitWith {
  TRACE_2("No more radios to restore",acre_player,_pttRadioTargets);
  _pttRadioTargets;
};

private _unclaimedUnitRadios = _allUnitRadios - _pttRadioTargets;
private _otherRadioTargets = [_savedOtherRadios, _unclaimedUnitRadios] call _fnc_findTargets;

[QGVAR(radiosRestored), [_namespace, _pttRadioTargets, _otherRadioTargets]] call CBA_fnc_localEvent;
_pttRadioTargets + _otherRadioTargets;
