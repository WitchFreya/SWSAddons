#include "script_component.hpp"

/*
 * Author: Maid
 * Given x value and N functions, do f_2(f_1(f_0(x))) etc until you have reached f_N(...).
 *
 * Arguments:
 * 0: Initial value <ANY>
 * 1..N: Functions <CODE[]>
 *
 * Return Value:
 * The result of applying f_0 through f_N to the initial value <ANY>
 *
 * Public: Yes
 */

private _init = _this select 0;
private _fns = [_this, 1] call BIS_fnc_subSelect;

private _res = _init;
{
  _res = _res call _x;
} forEach _fns;
_res;
