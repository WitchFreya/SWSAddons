class CfgWeapons
{
  class OPTRE_Rifle_Base;
  class OPTRE_Handgun_Base;

  //--- Enable primary grenade launcher to take 3-round grenades from the magwell.
  class OPTRE_M319 : OPTRE_Rifle_Base
  {
    magazineWell[] += {"3UGL_40x36", "CBA_40mm_3GL"};
  };

  //--- Enable primary grenade launcher to take 3-round grenades from the magwell.
  class OPTRE_M319M : OPTRE_Handgun_Base
  {
    magazineWell[] += {"3UGL_40x36", "CBA_40mm_3GL"};
  };
};
