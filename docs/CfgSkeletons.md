# CfgSkeletons

[BIStudio Link](https://community.bistudio.com/wiki/Model_Config#cfgSkeletons)

```cpp
class CfgSkeletons
{
	class Car; // Define base class.

	class Vodnik: Car
	{
		skeletonInherit = "Car";			// Inherit all bones from class Car.
		skeletonBones[] =					// Add two new bones. The movement of bone2 is linked to bone1.
		{									// or in other words - bone2 is child of bone1 / bone 1 is parent of bone2
			// "<newbone>", "<parentbone>"	// leave <parentbone> empty if it has no parents
			"bone1", "",
			"bone2", "bone1"
		};
		pivotsModel = "";	// Location of pivot points (local axes) for hierarchical animation. (A2 only)
		isDiscrete = 1;		// 1 stands for discrete skinning values (0 or 100 % for each vertex of every selection)
							// 0 stands for non-discrete (each vertex may have different skinning values for selections - animations have just partial effect on that vertex)
	};
};
```
