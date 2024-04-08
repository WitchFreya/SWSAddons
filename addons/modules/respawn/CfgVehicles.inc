#define CLASSES_VEHICLES \
  "SWS_ModuleRespawnPosition"



class CfgVehicles {
  class ModuleRespawnPosition_F;
  //--- 3DEN respawn module.
  class SWS_ModuleRespawnPosition : ModuleRespawnPosition_F {
    category = "SWS_Utility";
    function = QFUNC(moduleRespawnPosition);

    delete Arguments;
    class Attributes : AttributesBase {
      class Units : Units {
        property = QGVAR(Units);
      };

      class Name : Edit {
        property = QGVAR(Name);
        displayName = "Name";
        tooltip = "Respawn name visible in the respawn menu and on a map. Optional; if not set the module will automatically determine a name when it is added.";
      };

      class MarkerType : Combo {
        property = QGVAR(MarkerType);
        displayName = "Type";
        tooltip = "What will be respawned at the position. The Vehicles respawns should be paired with a Respawn Vehicles module synchronized to the vehicles to respawn.";
        defaultValue = "'respawn_inf'";
        class Values {
          class Infantry { name = "Infantry"; value = "respawn_inf"; };
          class Vehicles { name = "Vehicles (All)"; value = "respawn_unknown"; };
          class VehiclesWheeled { name = "Vehicles (Wheeled)"; value = "respawn_motor"; };
          class VehiclesTracked { name = "Vehicles (Tracked)"; value = "respawn_armor"; };
          class VehiclesHelicopters { name = "Vehicles (Helicopters)"; value = "respawn_air"; };
          class VehiclesPlanes { name = "Vehicles (Planes)"; value = "respawn_plane"; };
          class VehiclesNaval { name = "Vehicles (Naval)"; value = "respawn_naval"; };
        };
      };

      class Side : Combo {
        property = QGVAR(Side);
        displayName = "Side";
        tooltip = "Units of which side will be respawned at the position.";
        defaultValue = "'sideUnknown'";
        class Values {
          class Leading { name = "Leading Side"; value = "sideUnknown"; tooltip = "You should pair this module with a trigger if you want to use Leading Side, because it will not update dynamically."; };
          class BLUFOR { name = "BLUFOR"; value = "blufor"; };
          class OPFOR { name = "OPFOR"; value = "opfor"; };
          class Independent { name = "Independent"; value = "independent"; };
          class Civilian { name = "Civilian"; value = "civilian"; };
        };
      };

      class Marker : Combo {
        property = QGVAR(Marker);
        displayName = "Show to";
        tooltip = "Set who will see the respawn marker. This doesn't allow them to use it; just see it on the map.";
        defaultValue = "'everyone'";
        class Values {
          class Everyone { name = "Everyone"; value = "everyone"; };
          class Allies { name = "The side and its allies"; value = "allies"; };
          class Owner { name = "Only the side"; value = "owner"; };
        };
      };

      class ShowNotification : Checkbox {
        property = QGVAR(ShowNotification);
        displayName = "Notification";
        typeName = "BOOL";
        tooltip = "Show notification to players when this respawn is activated. This only does something if the module is linked to a trigger.";
        defaultValue = "true";
      };

      class ModuleDescription : ModuleDescription {};
    };

    class ModuleDescription : ModuleDescription {
      description = "An optimized version of the BIS respawn position module that will spawn units at the height of the module and includes some internal documentation for ease of use.";
      sync[] = { "AnyVehicle", "EmptyDetector" };
    };
  };
};
