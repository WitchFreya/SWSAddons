class ACE_Medical_Treatment_Actions {
  class BasicBandage;
  class Morphine;
  class SWS_Biofoam : BasicBandage {
    displayName = "Inject Biofoam-Sx";
    displayNameProgress = "Injecting biofoam-Sx...";
    icon = "\z\ace\addons\medical_gui\ui\auto_injector.paa";
    animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
    treatmentTime = QGVAR(biofoamTreatmentTime);
    condition = QFUNC(canBandageAndEffective);
    callbackSuccess = QFUNC(treatMedicationBandageCombo);
    allowedUnderwater = TRUE;
    sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
    items[] = {"SWS_Biofoam"};
    litter[] = {{"ACE_MedicalLitter_Biofoam"}};
  };
  class SWS_Medigel : BasicBandage {
    displayName = "Apply Medigel-Sx";
    displayNameProgress = "Applying medigel-Sx...";
    icon = "\z\ace\addons\medical_gui\ui\bandage.paa";
    treatmentTime = QGVAR(medigelTreatmentTime);
    condition = QFUNC(canBandageAndEffective);
    callbackSuccess = QFUNC(treatMedicationBandageCombo);
    items[] = {"SWS_Medigel"};
    litter[] = {{"ACE_MedicalLitter_suture"}};
  };
  class SWS_NeuroStim : Morphine {
    allowedSelections[] = {"Head", "LeftArm", "RightArm", "LeftLeg", "RightLeg"};
    displayName = "Inject NeuroStim";
    displayNameProgress = "Injecting NeuroStim...";
    treatmentTime = QGVAR(stimTreatmentTime);
    items[] = {"SWS_NeuroStim"};
  };
};
