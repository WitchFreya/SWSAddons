class CfgWeapons
{
  class LM_OPCAM_AR0M37;
  class LM_OPCAN_AR0M37_GL;
  class LM_OPCAN_AR0M37_SHT;

  class SWS_Weapon_AR0M37 : LM_OPCAM_AR0M37
  {
    class XtdGearInfo
    {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "None";
      body = "0M37S";
      variant = "Standard";
    };
  };

  class SWS_Weapon_AR0M37_GL : LM_OPCAN_AR0M37_GL
  {
    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "GL";
      body = "0M37S";
      variant = "Standard";
    };
  };

  class SWS_Weapon_AR0M37_SHT : LM_OPCAN_AR0M37_SHT
  {
    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "SHT";
      body = "0M37S";
      variant = "Standard";
    };
  };
};
