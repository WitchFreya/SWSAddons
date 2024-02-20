class ACE_Medical_Treatment_Actions {
  class BasicBandage;
  class SWS_Biofoam : BasicBandage {
    displayName = "Inject Biofoam-Sx";
    displayNameProgress = "Injecting biofoam-Sx...";
    icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
    animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
    treatmentTime = QGVAR(biofoamTreatmentTime);
    condition = QFUNC(canTreat);
    callbackSuccess = QFUNC(biofoam);
    sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
    items[] = {"SWS_Biofoam"};
    litter[] = {{}, {"ACE_MedicalLitter_Biofoam"}};
  };
};
