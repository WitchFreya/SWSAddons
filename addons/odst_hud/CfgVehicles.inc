

class CfgVehicles {
  class Man;
  class CAManBase : Man {
    class Components {
      class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft {
        class Components : Components {
          class CustomDisplayTest {
            componentType = "CustomDisplayComponent";
            resource = "SWS_RscCustomInfoODSTRadar";
          };
        };
      };
      class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight {
        class CustomDisplayTest {
          componentType = "CustomDisplayComponent";
          resource = "SWS_RscCustomInfoODSTRadar";
        };
      };
    };
  };
};
