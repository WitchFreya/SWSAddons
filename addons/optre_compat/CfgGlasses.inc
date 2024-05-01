class CfgGlasses {
  class G_Balaclava_BLK;
  // Ensure CBRN module stays on below water.
  class OPTRE_CBRN : G_Balaclava_BLK {
    mode = GLASSES_MODE_MULTIPURPOSE;
    ace_medical_vitals_oxygenSupply =  QUOTE(true);
  };
};
