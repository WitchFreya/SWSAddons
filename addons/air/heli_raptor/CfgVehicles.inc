#define CLASSES_VEHICLES  \
  "SWS_V_Heli_Raptor"

class CfgVehicles {
  class O_Heli_Attack_02_DynamicLoadout_F;

  class SWS_V_Heli_Raptor_Base : O_Heli_Attack_02_DynamicLoadout_F {
    ITEM_META(0);
    displayName = "-";
    faction = "SWS_UNSC";
    side = SIDE_BLUFOR;
    crew = "OPTRE_UNSC_Navy_Solider_Olive_Unarmed";
    typicalCargo[] = { "OPTRE_UNSC_Navy_Solider_Olive_Unarmed" };
    ace_cargo_space = 6;
    ace_cargo_loadMasterTurrets[] = {{-1},{0}};

    hiddenSelectionsTextures[] = {
      QPATHTOF(data\heli_raptor\body1_co.paa)
      , QPATHTOF(data\heli_raptor\body2_co.paa)
    };

    textureList[] = {
      "SWS_Standard"  , 1
      , "SWS_Black"   , 0
      , "SWS_Camo"    , 0
    };

    class PilotCamera : PilotCamera {
      minTurn = -140;
      maxTurn = 140;
      maxMouseXRotSpeed = 1;
      maxMouseYRotSpeed = 1;
    };

    class TextureSources : TextureSources {
      class Black;
      class Opfor;

      class SWS_Standard {
        displayName = QNAME(Standard);
        author = QUOTE(AUTHOR);
        factions[] = {"SWS_UNSC"};
        textures[] = {
          QPATHTOF(data\heli_raptor\body1_co.paa)
          , QPATHTOF(data\heli_raptor\body2_co.paa)
        };
      };

      class SWS_Black : Black {
        displayName = QNAME(Black);
        factions[] = {"SWS_UNSC"};
      };

      class SWS_Camo : Opfor {
        displayName = QNAME(Camo);
        factions[] = {"SWS_UNSC"};
      };
    };

    class Components : Components {
      class TransportPylonsComponent {
        uiPicture = "\A3\Air_F_Beta\Heli_Attack_02\Data\UI\Heli_Attack_02_3DEN_CA.paa";
        class Pylons {
          class PylonLeft1 {
            maxWeight = 1000;
            attachment = "PylonRack_4Rnd_ACE_Hellfire_AGM114K";
            priority = 5;
            hardpoints[] = {
              "O_MISSILE_PYLON"
              , "O_BOMB_PYLON_HELI"
              , "UNI_SCALPEL"
              , "DAGR"
            };
            uiPosition[] = { 0.06, 0.4 };
          };
          class PylonLeft2 : PylonLeft1 {
            attachment = "PylonRack_20Rnd_Rocket_03_HE_F";
            priority = 4;
            uiPosition[] = { 0.08, 0.35 };
          };
          class PylonRight2 : PylonLeft2 {
            mirroredMissilePos = 2;
            uiPosition[] = { 0.57,0.35 };
          };
          class PylonRight1 : PylonLeft1 {
            mirroredMissilePos = 1;
            uiPosition[] = { 0.59, 0.4 };
          };
        };
        class Presets {
          class Default {
            displayName = "$STR_vehicle_default";
            attachment[] = {
              "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
              , "PylonRack_20Rnd_Rocket_03_HE_F"
              , "PylonRack_20Rnd_Rocket_03_HE_F"
              , "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
            };
          };
          class AT {
            displayName = "AT (Laser/Radar)";
            attachment[] = {
              "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
              , "PylonRack_4Rnd_ACE_Hellfire_AGM114L"
              , "PylonRack_4Rnd_ACE_Hellfire_AGM114L"
              , "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
            };
          };
          class MULTI {
            displayName = "AA/AT";
            attachment[] = {
              "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
              , "PylonRack_1Rnd_Missile_AA_03_F"
              , "PylonRack_1Rnd_Missile_AA_03_F"
              , "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
            };
          };
        };
      };
    };
    class TransportMagazines {
      // Includes parachutes from base vic
      MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_MSBS,8);
      MACRO_ADDMAGAZINE(OPTRE_SignalSmokeY,2);
      MACRO_ADDMAGAZINE(OPTRE_SignalSmokeB,2);
      MACRO_ADDMAGAZINE(SmokeShell,6);
    };
    class TransportWeapons {
      MACRO_ADDWEAPON(SWS_Weapon_AR0M37_GL,2);
    };
    class TransportItems {
      MACRO_ADDITEM(ACE_BloodIV,30);
      MACRO_ADDITEM(ACE_ElasticBandage,100);
      MACRO_ADDITEM(ACE_QuikClot,40);
      MACRO_ADDITEM(Toolkit,1);
      MACRO_ADDITEM(OPTRE_M7_Sight,2);
    };
  };

  class SWS_V_Heli_Raptor : SWS_V_Heli_Raptor_Base {
    SCOPE(2);
    displayName = QNAME(Sx-48 Raptor);
  };
};
