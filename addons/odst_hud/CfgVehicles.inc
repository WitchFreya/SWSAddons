

class CfgVehicles {
  class Man;
  class CAManBase : Man {
    class Components {
      class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft {
        class Components : Components {
          class SWS_ODST_Radar {
            componentType = "CustomDisplayComponent";
            resource = "SWS_RscCustomInfoODSTRadar";
          };
        };
      };
      class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight {
        class Components : Components {
          class SWS_ODST_Radar {
            componentType = "CustomDisplayComponent";
            resource = "SWS_RscCustomInfoODSTRadar";
          };
        };
      };
    };
  };
};
