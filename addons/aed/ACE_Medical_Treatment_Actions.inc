class ACE_Medical_Treatment_Actions
{
  class CPR;
  class Defibrillator : CPR
  {
    displayName = "Use Defibrillator";
    displayNameProgress = "Defibrillating...";
    icon = QPATHTOF(data\defib_action.paa);
    items[] = {"SWS_AED"};
    condition = QFUNC(canUse);
    callbackStart = QFUNC(onStart);
    callbackProgress = QFUNC(canProgress);
    callbackSuccess = QFUNC(onSuccess);
    callbackFailure = QFUNC(onFailure);
    medicRequired = QGVAR(trainingLevelRequired);
    treatmentTime = QGVAR(treatmentTime);
    sounds[] = {QPATHTOF(data\defib.ogg), 5, 1, 15};
  };
};
