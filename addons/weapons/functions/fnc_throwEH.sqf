#include "script_component.hpp"
/*
 * Author: Maid
 * Fired EH, for handling RHS submunition ThrowMuzzles.
 *
 * Arguments:
 * None. Parameters inherited from EFUNC(common,firedEH)
 *
 * Return Value:
 * None
 *
 * Example:
 * [clientFiredBIS-XEH] call ace_chemlights_fnc_throwEH;
 *
 * Public: No
 */

params ["_unit", "_weapon", "", "", "_ammo", "", "_projectile"];

TRACE_4("throwEH",_unit,_weapon,_ammo,_projectile);

if ((_weapon != "Throw") || {getText (configFile >> "CfgAmmo" >> _ammo >> "rhs_submunition") == ""}) exitWith {};

[_unit, _projectile] call DFUNC(rhs_rgNoImpact);
