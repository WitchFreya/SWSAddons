#include "script_component.hpp"

/*
 * Author: Maid
 * Calculate the winning side from a subset of passed sides.
 *
 * Arguments:
 * 0..N: sides <ARRAY> - The sides to evaluate score for—if it is empty, [blufor, opfor, independent, civilian] will be used.
 *
 * Return Value:
 * <OBJECT> the side with the highest score or sideEmpty if there is a tie for the lead.
 *
 * Example:
 * [blufor, opfor, independent, civilian] call sws_modules_fnc_winningSide;
 *
 * Public: No
 */

private _sides = if (!IS_ARRAY(_this) || {count _this == 0}) then {
  [blufor, opfor, independent, civilian];
} else {_this;};

private _highestScore = _sides apply { scoreSide _x; } call BIS_fnc_greatestNum;
private _sidesWithScore = _sides select { scoreSide _x isEqualTo _highestScore; };
if (count _sidesWithScore != 1) exitWith {sideEmpty;};
_sidesWithScore select 0;
