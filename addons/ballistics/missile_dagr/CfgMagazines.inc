class CfgMagazines {
  class PylonRack_12Rnd_PG_Missiles;

  class PylonRack_12Rnd_ACE_Hydra70_DAGR : PylonRack_12Rnd_PG_Missiles {
    META;
    ammo = "ACE_Hydra70_DAGR";
    displayName = "12x DAGR [ACE]";
    displayNameShort = "DAGR";
    descriptionShort = "Short-range, laser-guided, air-to-surface missile with high-explosive warhead";
    pylonWeapon = "ACE_MissileGuidance_DAGR";
  };

  class PylonRack_12Rnd_SWS_Hydra70_DAGR_HE : PylonRack_12Rnd_ACE_Hydra70_DAGR {
    ammo = "SWS_Hydra70_DAGR_HE";
    displayName = "12x DAGR HE [SWS]";
    displayNameShort = "DAGR HE";
  };
};
