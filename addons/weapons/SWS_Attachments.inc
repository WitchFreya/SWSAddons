class SWS_Pointers_Standard {
  // a3/ace base items
  acc_pointer_IR = TRUE;
  ACE_acc_pointer_red = TRUE;
  ACE_acc_pointer_green_IR = TRUE;
  ACE_acc_pointer_green = TRUE;
  ACE_DBAL_A3_Red = TRUE;
  ACE_DBAL_A3_Green = TRUE;
  ACE_SPIR = TRUE;
  // m12 3-mode.
  OPTRE_M12_Laser = TRUE;
  OPTRE_M12_Flashlight = TRUE;
  OPTRE_M12_Vis_Red_Laser = TRUE;
  // "BMR" target laser 3-mode. 
  OPTRE_BMR_Laser = TRUE;
  OPTRE_BMR_Vis_Red_Laser = TRUE;
  OPTRE_BMR_MEQ_Flashlight = TRUE;
};

class SWS_Pointers_NoBMR : SWS_Pointers_Standard {
  OPTRE_BMR_Laser = FALSE;
  OPTRE_BMR_Vis_Red_Laser = FALSE;
  OPTRE_BMR_MEQ_Flashlight = FALSE;
};

class SWS_Pointers_Muzzle {
  // BMR Muzzle-mounted thing. Very ugly, we don't normally like this.
  OPTRE_BMR_Flashlight = TRUE;
  OPTRE_BMR_Flashlight_Laser = TRUE;
  OPTRE_BMR_Flashlight_Vis_Red_Laser = TRUE;
};
