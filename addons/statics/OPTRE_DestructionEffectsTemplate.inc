class GVAR(OPTRE_DestructionEffectsTemplate) {
  class Fire1 {
    intensity = 0.15;
    interval = 1;
    lifeTime = 3;
    position = "destructionEffect1";
    simulation = "particles";
    type = "ObjectDestructionFire1Small";
  };
  class Fire2 {
    intensity = 0.15;
    interval = 1;
    lifeTime = 3;
    position = "destructionEffect2";
    simulation = "particles";
    type = "ObjectDestructionFire2Small";
  };
  class FireSparks1 {
    intensity = 1;
    interval = 1;
    lifeTime = 2.8;
    position = "destructionEffect2";
    simulation = "particles";
    type = "FireSparks";
  };
  class Light1 {
    enabled = "distToWater";
    intensity = 0.001;
    interval = 1;
    lifeTime = 3;
    position = "destructionEffect1";
    simulation = "light";
    type = "ObjectDestructionLight";
  };
  class Refract1 {
    intensity = 0.15;
    interval = 1;
    lifeTime = 3;
    position = "destructionEffect1";
    simulation = "particles";
    type = "ObjectDestructionRefractSmall";
  };
  class Smoke1 {
    intensity = 0.15;
    interval = 1;
    lifeTime = 3.5;
    position = "destructionEffect1";
    simulation = "particles";
    type = "ObjectDestructionSmokeSmall";
  };
  class Smoke1_2 {
    intensity = 0.15;
    interval = 1;
    lifeTime = 3.5;
    position = "destructionEffect2";
    simulation = "particles";
    type = "ObjectDestructionSmoke1_2Small";
  };
  class Smoke2 {
    intensity = 1;
    interval = 1;
    lifeTime = 3.2;
    position = "destructionEffect2";
    simulation = "particles";
    type = "ObjectDestructionSmoke2";
  };
  class Sound {
    intensity = 1;
    interval = 1;
    lifeTime = 1;
    position = "destructionEffect1";
    simulation = "sound";
    type = "Fire";
  };
  class Sparks1 {
    intensity = 0;
    interval = 1;
    lifeTime = 0;
    position = "destructionEffect1";
    simulation = "particles";
    type = "ObjectDestructionSparks";
  };
};
