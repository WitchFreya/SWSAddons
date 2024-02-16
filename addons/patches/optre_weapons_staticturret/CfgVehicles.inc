class CfgVehicles {
  class StaticMGWeapon;
  class OPTRE_Static_M41 : StaticMGWeapon {
    armor = 200;
    class DestructionEffects {
      class Smoke1 {
        intensity = 0.15;
        interval = 1;
        lifeTime = 3.5;
        position = "destructionEffect1";
        simulation = "particles";
        type = "ObjectDestructionSmokeSmall";
      };
    };
  };
};
