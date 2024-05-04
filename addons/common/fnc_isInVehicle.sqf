/*
 * Author: Maid
 * Simple named function to check if a unit is in a vehicle.
 *
 * Arguments:
 * 0: The unit. Defaults to player <OBJECT>
 *
 * Return Value:
 * True if in vehicle, false otherwise.
 *
 * Public: Yes
 */

params [
  ["_unit", player, [objNull]]
];

!(vehicle _unit isEqualTo _unit);
