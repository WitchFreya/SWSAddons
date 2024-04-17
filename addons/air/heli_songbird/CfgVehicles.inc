#define CLASSES_VEHICLES  \
  "SWS_V_Heli_Shrike"\
  , "SWS_V_Heli_Magpie"

class CfgVehicles {
  class MELB_MH6M;
  class MELB_AH6M;
  class SWS_V_Heli_Shrike  : MELB_AH6M {
		displayName = QNAME(Sx-6A Shrike);
		ITEM_META(2);
		faction = "SWS_UNSC";
		side = SIDE_BLUFOR;
    crew = "OPTRE_UNSC_Navy_Solider_Olive_Unarmed";
		typicalCargo[] = { "OPTRE_UNSC_Navy_Solider_Olive_Unarmed" };

    class TransportMagazines {
			MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_MSBS,8);
			MACRO_ADDMAGAZINE(OPTRE_SignalSmokeY,1);
			MACRO_ADDMAGAZINE(OPTRE_SignalSmokeB,1);
			MACRO_ADDMAGAZINE(SmokeShell,6);
		};

		class TransportWeapons {
			MACRO_ADDWEAPON(SWS_Weapon_AR0M37_GL,2);
		};

		class TransportItems {
			MACRO_ADDITEM(ACE_BloodIV,2);
			MACRO_ADDITEM(ACE_ElasticBandage,10);
			MACRO_ADDITEM(ACE_QuikClot,5);
			MACRO_ADDITEM(Toolkit,1);
			MACRO_ADDITEM(OPTRE_M7_Sight,2);
		};

		class Components : Components {
			class TransportPylonsComponent : TransportPylonsComponent {
				uiPicture = "melb\data\ui\melb_eden_ca.paa";

				class Pylons {
					class R_Pylon {
						hardpoints[] = {"RightMount_MELB"
              , "DAR"};
						attachment = "Pylon_S260L_MELB";
						maxWeight = 200;
						uiPosition[] = {0.125,0.4};
					};

					class R_Rockets_12x {
						hardpoints[] = {"12x_Rockets_SWSLB"};
						attachment = "";
						priority = 3;
						maxWeight = 300;
						uiPosition[] = {0.04,0.1};
					};

					class R_Rockets_4x : R_Rockets_12x {
						hardpoints[] = {"4x_Rockets_SWSLB"};
						attachment = "Pylon_Talon_4x_MELB";
						priority = 2;
						maxWeight = 200;
						uiPosition[] = {0.04,0.15};
					};

					class R_Rockets_3x : R_Rockets_12x {
						hardpoints[] = {"3x_Rockets_SWSLB"};
						attachment = "Pylon_Talon_3x_MELB";
						priority = 1;
						maxWeight = 200;
						uiPosition[] = {0.04,0.2};
					};

					class R_HellfireRack_R_Slot : R_Pylon {
						turret[] = {"CopilotTurret"};
						hardpoints[] = {"SWS_Hellfires"};
						attachment = "";
						maxWeight = 85;
						uiPosition[] = {0.04,0.45};
					};

					class R_HellfireRack_L_Slot : R_HellfireRack_R_Slot {
						uiPosition[] = {0.225,0.45};
            hardpoints[] = {"SWS_Hellfires"};
					};

					class R_Minigun : R_Pylon {
						hardpoints[] = {"Right_MinigunMount_MELB"};
						attachment = "Pylon_R_3000Rnd_M134_MELB";
						priority = 5;
						maxWeight = 100;
						uiPosition[] = {0.225,0.325};
					};

					class L_Minigun : R_Minigun {
						hardpoints[] = {"Left_MinigunMount_MELB"};
						attachment = "Pylon_L_3000Rnd_M134_MELB";
						uiPosition[] = {0.415,0.325};
					};

					class L_HellfireRack_R_Slot : R_HellfireRack_R_Slot {
						uiPosition[] = {0.405,0.45};
            hardpoints[] = {"SWS_Hellfires"};
						mirroredMissilePos = 6;
					};

					class L_HellfireRack_L_Slot : R_HellfireRack_R_Slot {
						uiPosition[] = {0.6,0.45};
            hardpoints[] = {"SWS_Hellfires"};
						mirroredMissilePos = 5;
					};

					class L_Rockets_3x : R_Rockets_3x {
						hardpoints[] = {"3x_Rockets_SWSLB"};
						uiPosition[] = {0.6,0.2};
						priority = 1;
						mirroredMissilePos = 4;
					};

					class L_Rockets_4x : R_Rockets_4x {
						hardpoints[] = {"4x_Rockets_SWSLB"};
						uiPosition[] = {0.6,0.15};
						priority = 2;
						mirroredMissilePos = 3;
					};

					class L_Rockets_12x : R_Rockets_12x {
						hardpoints[] = {"12x_Rockets_SWSLB"};
						uiPosition[] = {0.6,0.1};
						priority = 3;
						mirroredMissilePos = 2;
					};

					class L_Pylon : R_Pylon {
						hardpoints[] = {"LeftMount_MELB"
              , "DAR"};
            attachment = "Pylon_S260L_MELB";
						uiPosition[] = {0.4925,0.4};
						mirroredMissilePos = 1;
					};
				};

				class Presets {
					class HEAP {
						displayName = "38x RAKE-HE + M134";
						attachment[] = {
              "Pylon_S261L_MELB"
              , "Pylon_Rake_12x_MELB"
              , "Pylon_Rake_4x_MELB"
              , "Pylon_Rake_3x_MELB"
              , ""
              , ""
              , "Pylon_R_3000Rnd_M134_MELB"
              , "Pylon_L_3000Rnd_M134_MELB"
              , ""
              , ""
              , "Pylon_Rake_3x_MELB"
              , "Pylon_Rake_4x_MELB"
              , "Pylon_Rake_12x_MELB"
              , "Pylon_S261L_MELB"
            };
					};

          class Default {
            displayName = "14x TALON-HEDP + M134";
            attachment[] = {
              "Pylon_S260L_MELB"
              , ""
              , "Pylon_Talon_4x_MELB"
              , "Pylon_Talon_3x_MELB"
              , ""
              , ""
              , "Pylon_R_3000Rnd_M134_MELB"
              , "Pylon_L_3000Rnd_M134_MELB"
              , ""
              , ""
              , "Pylon_Talon_3x_MELB"
              , "Pylon_Talon_4x_MELB"
              , ""
              , "Pylon_S260L_MELB"
            };
          };

					class Hellfires {
						displayName = "SxAGM-114K + M134";
						attachment[] = {
              "Pylon_HellfireLauncher_MELB"
              , ""
              , ""
              , ""
              , "SWS_AGM114K_Bare"
              , "SWS_AGM114K_Bare"
              , "Pylon_R_3000Rnd_M134_MELB"
              , "Pylon_L_3000Rnd_M134_MELB"
              , "SWS_AGM114K_Bare"
              , "SWS_AGM114K_Bare"
              , ""
              , ""
              , ""
              , "Pylon_HellfireLauncher_MELB"
            };
					};

					class DoubleGuns {
						displayName = "GAU + M134";
						attachment[] = {
              "Pylon_R_1300Rnd_GAU19_MELB"
              , ""
              , ""
              , ""
              , ""
              , ""
              , "Pylon_R_3000Rnd_M134_MELB"
              , "Pylon_L_3000Rnd_M134_MELB"
              , ""
              , ""
              , ""
              , ""
              , ""
              , "Pylon_L_1300Rnd_GAU19_MELB"
            };
					};

          class Empty {
						displayName = "Empty";
						attachment[] = {};
          };
				};
			};
		};

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret {
				maxHorizontalRotSpeed = 2;
				maxMouseXRotSpeed = 2;
				maxVerticalRotSpeed = 1.2;
				maxMouseYRotSpeed = 1.2;
			};
		};
	};

	class SWS_V_Heli_Magpie : MELB_MH6M {
		ITEM_META(2);
		displayName = QNAME(Sx-6M Magpie);
		faction = "SWS_UNSC";
		side = SIDE_BLUFOR;
    crew = "OPTRE_UNSC_Navy_Solider_Olive_Unarmed";
		typicalCargo[] = { "OPTRE_UNSC_Navy_Solider_Olive_Unarmed" };

    class TransportMagazines {
			MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_MSBS,8);
			MACRO_ADDMAGAZINE(OPTRE_SignalSmokeY,1);
			MACRO_ADDMAGAZINE(OPTRE_SignalSmokeB,1);
			MACRO_ADDMAGAZINE(SmokeShell,6);
		};

		class TransportWeapons {
			MACRO_ADDWEAPON(SWS_Weapon_AR0M37_GL,2);
		};

		class TransportItems {
			MACRO_ADDITEM(ACE_BloodIV,2);
			MACRO_ADDITEM(ACE_ElasticBandage,10);
			MACRO_ADDITEM(ACE_QuikClot,5);
			MACRO_ADDITEM(Toolkit,1);
			MACRO_ADDITEM(OPTRE_M7_Sight,2);
		};

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret {
				maxHorizontalRotSpeed = 2;
				maxMouseXRotSpeed = 2;
				maxVerticalRotSpeed = 1.2;
				maxMouseYRotSpeed = 1.2;
			};

      class CargoTurret_03 : CargoTurret {
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos L1";
				memoryPointsGetInGunnerDir = "pos L1 dir";
				gunnerName = "Passenger (Left Bench 1)";
				proxyIndex = 3;
				maxElev = 45;
				minElev = -60;
				maxTurn = 95;
				minTurn = -15;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				playerPosition = 4;
				soundAttenuationTurret = "";
				disableSoundAttenuation = 1;
				gunnerGetInAction = "GetInHeli_Light_01bench";
			};

      class CargoTurret_04 : CargoTurret_03 {
				gunnerCompartments = "compartment3";
				memoryPointsGetInGunner = "pos R1";
				memoryPointsGetInGunnerDir = "pos R1 dir";
				gunnerName = "Passenger (Right Bench 1)";
				proxyIndex = 4;
				maxTurn = 15;
				minTurn = -95;
			};

      class CargoTurret_05 : CargoTurret_04 {
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos L2";
				memoryPointsGetInGunnerDir = "pos L2 dir";
				gunnerName = "Passenger (Left Bench 2)";
				proxyIndex = 5;
				maxElev = 45;
				minElev = -45;
				maxTurn = 95;
				minTurn = -95;
				class DynamicViewLimits {
					CargoTurret_03[] = {-30,95};
					CargoTurret_07[] = {-95,50};
				};
			};

      class CargoTurret_06 : CargoTurret_05 {
				gunnerCompartments = "compartment3";
				memoryPointsGetInGunner = "pos R2";
				memoryPointsGetInGunnerDir = "pos R2 dir";
				gunnerName = "Passenger (Right Bench 2)";
				proxyIndex = 6;
				class DynamicViewLimits {
					CargoTurret_04[] = {-95,30};
					CargoTurret_08[] = {-50,95};
				};
			};

      class CargoTurret_07 : CargoTurret_06 {
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos L3";
				memoryPointsGetInGunnerDir = "pos L3 dir";
				gunnerName = "Passenger (Left Bench 3)";
				proxyIndex = 7;
				class DynamicViewLimits {
					CargoTurret_05[] = {-50,95};
				};
			};

			class CargoTurret_08 : CargoTurret_07 {
				gunnerCompartments = "compartment3";
				memoryPointsGetInGunner = "pos R3";
				memoryPointsGetInGunnerDir = "pos R3 dir";
				gunnerName = "Passenger (Right Bench 3)";
				proxyIndex = 8;
				class DynamicViewLimits {
					CargoTurret_06[] = {-95,50};
				};
			};
		};
	};
};
