class CfgVehicles
{
	class StaticMGWeapon;
	class Turrets;
	class MainTurret;
	class AAA_System_01_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class OPTRE_FC_Tyrant: AAA_System_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
        maxHorizontalRotSpeed = 0.25;
        maxVerticalRotSpeed = 0.25;
        minElev = -10;
			};
		};
	};
	class OPTRE_FC_TyrantAA: AAA_System_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
        maxHorizontalRotSpeed = 0.25;
        maxVerticalRotSpeed = 0.25;
        minElev = -2;
			};
		};
	};
};

