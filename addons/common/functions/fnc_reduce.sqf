/*
 * Author: Maid
 * Start a debrief.
 *
 * Arguments:
 * 0: An array of elements <TArr[]>.
 * 1: A callback which will receive the params [previous value: TRes, current value: TArr, index: NUMBER] <CODE>
 * 2: The initial value. Optional, defaults to the first value of the array <TRes>.
 *
 * Return Value:
 * The reduced value <TRes>.
 *
 * Public: Yes
 */

params ["_arr", "_cb", ["_init", _this select 0 select 0]];
private _result = _init;
for "_i" from 0 to (count _arr - 1) do {
    private _cur = _arr select _i;
    _result = [_result, _cur, _i] call _cb;
};
_result;
