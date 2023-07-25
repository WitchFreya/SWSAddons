# Inheritance

Inheritance is fucky in Arma.

Let's say you want to create a new drone based on the AR-2 Darter `B_UAV_01_F`. This class exists in `configFile >> CfgVehicles`.

```cpp
class CfgVehicles {
    class B_UAV_01_F;
    class TAG_UAV_01_F : B_UAV_01_F {
        dlc = "TAG";
        displayName = "My Drone";
    };
};
```

Easy enough. However, now you want to change **just** the `OpticsIn` on the MainTurret, i.e. `configFile >> CfgVehicles >> TAG_UAV_01_F >> Turrets >> MainTurret >> OpticsIn`. You don't want to overwrite the rest of the properties on your way down to that path, right? Right.

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
