# Pylon System

The Pylon System for aircraft switches up some of the order in how things are defined.

- Think of the Hardpoints definitions inside of a pylon as a a key that links `"CfgVehicles" >> MyVehicle >> "TransportPylonsComponent" >>  "Pylons" >> MyPylon >> "hardpoints"` to `"CfgMagazines" >> * >> "hardpoints"`. It can be any number of entries in CfgMagazines. In a way, it's like it created a magazine well for base weapons except instead of looking for an entry in something like "CfgHardpoints" (hypothetical), it just skips that step and goes straight to the Magazines instead.

From there, `"CfgMagazines" >> MyMagazine >> "pylonWeapon"` defines the properties of the weapon that will be mounted to the hardpoint.

When defining pylons, Arma is really dumb in that the pylon config is an ordered array despite appearing like an object. This means that you cannot just extend things like you'd want to because it'll send you to turbohell. Redefine everything. Sorry.
