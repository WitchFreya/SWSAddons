# ACE

Miscellaneous documentation for ACE stuff that isn't documented by them.

## Interactions

The arguments passed to the statement and condition are `[_target: object, _player: object, _actionData: ARRAY]` which are the object the action is on, the caller, and the data passed to createAction respectively.

## Goggles

- `ace_resistance: scalar` can be applied only to glasses and determine whether or not they get cracked.
  - Explosions deal damage based on [`ace_goggles_fnc_getExplosionIndex`](https://github.com/acemod/ACE3/blob/9d168756df555cdc71db40343bc9d4c9bfd196b2/addons/goggles/functions/fnc_getExplosionIndex.sqf) on a scale of 0-3.
  - If the explosion deals enough damage, it cracks the goggles based on whether the resistance is higher than the explosion index; see [`ace_goggles_fnc_handleExplosion`](https://github.com/acemod/ACE3/blob/9d168756df555cdc71db40343bc9d4c9bfd196b2/addons/goggles/functions/fnc_handleExplosion.sqf#L28).
- `ace_protection: boolean` can be applied to helmets or glasses; if enabled it will keep certain visual effects from happening (like underwater blurry vision).
