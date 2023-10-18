There are two ways to do inheritance for Arma. One is easier but ends up leaving empty classes at the root. That said, it tends to be more consistent in my experience and harder to fuck up. The complicated way sometimes will just break for seemingly no reason (which is to say, a reason exists but I'm not yet learned enough to figure it out). In general, it's practical to just use the Easy format.

# Inheritance (Easy)

Let's say you want to create a new drone based on the AR-2 Dart `B_UAV_01_F`. Let's say you want to create a new drone based on the AR-2 Darter `B_UAV_01_F`. This class exists in `configFile >> "CfgVehicles"`.

```cpp
class CfgVehicles {
    class B_UAV_01_F;
    class TAG_UAV_01_F : B_UAV_01_F {
        dlc = "TAG";
        displayName = "My Drone";
    };
};
```

Easy enough. However, now you want to change **just** a `myTurretProperty` on the MainTurret, i.e. `configFile >> "CfgVehicles" >> "TAG_UAV_01_F" >> "Turrets" >> "MainTurret" >> "myTurretProperty"`. You don't want to overwrite the rest of the properties on your way down to that path, right? Right.

```cpp
class Turrets;
class MainTurret;

class CfgVehicles {
    class B_UAV_01_F;

    class TAG_UAV_01_F : B_UAV_01_F {
        displayName = "My Drone";
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                myTurretProperty = "Whatever.";
            };
        };
    };
};
```

Note that the properties that were not in the root of `CfgVehicles` are pulled out to the root level itself. This will mean `configFile >> "Turrets"` will be an empty class as if you'd done `class Turrets {};`. *However*, class definitions are scoped. This means that if `Turrets` is extended in a child scope but the parent class has already defined `class Turrets` inside of itself, it will instead extend *that* rather than the root `configFile >> "Turrets"`.

Now, onto the harder way.

# Inheritance (Complicated)

This part is the same as the easy inheritance but bears repeating.

Let's say you want to create a new drone based on the AR-2 Darter `B_UAV_01_F`. This class exists in `configFile >> "CfgVehicles"`.

```cpp
class CfgVehicles {
    class B_UAV_01_F;
    class TAG_UAV_01_F : B_UAV_01_F {
        dlc = "TAG";
        displayName = "My Drone";
    };
};
```

Easy enough. However, now you want to change **just** a `myTurretProperty` on the MainTurret, i.e. `configFile >> "CfgVehicles" >> "TAG_UAV_01_F" >> "Turrets" >> "MainTurret" >> "myTurretProperty"`. You don't want to overwrite the rest of the properties on your way down to that path, right? Right.

So, to do so, things get more complicated. You need to replicate the inheritance chain in the base class, otherwise the properties will not be available to extend from in your class. 

```cpp
class CfgVehicles {
    class B_UAV_01_F;
    class TAG_UAV_01_F_base : B_UAV_01_F {
        class Turrets : Turrets {
            class MainTurret;
        };

        dlc = "TAG";
    };

    class TAG_UAV_01_F : TAG_UAV_01_F_base {
        displayName = "My Drone";
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                myTurretProperty = "Whatever.";
            };
        };
    };
};
```

As you can see, you need to define the inheritance chain only up a single level. The remaining properties will be inherited properly going higher than that. This is why you'll often see two classes for a lot of items in base Arma, one with `scope = 0;` that include the word `base` in its class name and another with `scope = 3;` that inherits from the former.

This covers the inheritance of new objects, but what if I want to modify existing objects? It has a similar pattern: **you must replicate the inheritance chain of the base object exactly to modify it,** then it will overload that interface.

```cpp
class CfgVehicles {
    class Helicopter_Base_F;
    class UAV_01_base_F : Helicopter_Base_F {
         class Turrets : Turrets {
            class MainTurret;
        };
    };
    class B_UAV_01_F : UAV_01_base_F {
        displayName = "AR-2 Darter with a new name.";
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                newProperty = "Edited.";
            };
        };
    };
};

```

If you check the config viewer in game, you'll find that this matches the inheritance chain of `B_UAV_01_F`.
