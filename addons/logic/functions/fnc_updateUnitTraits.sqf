/**
 * Author: Maid
 * Updates the traits of a unit based on the items in their inventory.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call SWS_logic_updateUnitTraits
 *
 * Public: Yes
 */

private _traitMapper = createHashMapFromArray [
	["B_UavTerminal", {
		player setUnitTrait ["UAVHacker", true];
	}],
	["SWS_Term_Scarlet", {
		player setUnitTrait ["UAVHacker", true];
	}],
	["adv_aceCPR_AED", {
		player setUnitTrait ["Medic", True];
		player setVariable ["ace_medical_medicclass", 1, true];
	}],
	["ACE_DefusalKit", { player setUnitTrait ["explosiveSpecialist", true]; }],
	["ToolKit", { player setUnitTrait ["engineer", true]; }]
];

private _keys = keys _traitMapper;

private _loadout = flatten (getUnitLoadout player);

private _relevantGear = _loadout arrayIntersect _keys;

player setUnitTrait ["UAVHacker", false];
player setUnitTrait ["Medic", false];
player setVariable ["ace_medical_medicclass", 0, true];
player setUnitTrait ["explosiveSpecialist", false];
player setUnitTrait ["engineer", false];

{
	call (_traitMapper get _x);
} forEach _relevantGear;
