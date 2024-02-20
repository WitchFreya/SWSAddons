class ACE_Medical_Treatment {
  class Bandaging {
    class BasicBandage;
    class SWS_Biofoam : BasicBandage {
      // Used if advanced medical treatment is turned off
      effectiveness = 10;
      reopeningChance = 0;
      reopeningMaxDelay = 0;
      reopeningMinDelay = 0;

      // No Effect on Abrasions, Contusions, or burns; massive effect on everything else.
      class Abrasion {
        effectiveness = 0;
        reopeningChance = 0;
        reopeningMaxDelay = 0;
        reopeningMinDelay = 0;
      };
      class AbrasionMinor : Abrasion {};
      class AbrasionMedium : Abrasion {};
      class AbrasionMajor : Abrasion {};

      class Contusion : Abrasion {};
      class ContusionMinor : Contusion {};
      class ContusionMedium : Contusion {};
      class ContusionMajor : Contusion {};

      class Avulsion {
        effectiveness = 10;
        reopeningChance = 0;
        reopeningMaxDelay = 0;
        reopeningMinDelay = 0;
      };
      class AvulsionMinor : Avulsion {};
      class AvulsionMedium : Avulsion {};
      class AvulsionLarge : Avulsion {};

      class Cut : Avulsion {};
      class CutMinor : Cut {};
      class CutMedium : Cut {};
      class CutLarge : Cut {};

      class Laceration : Avulsion {};
      class LacerationMinor : Laceration {};
      class LacerationMedium : Laceration {};
      class LacerationMajor : Laceration {};

      class PunctureWound : Avulsion {};
      class PunctureWoundMinor : PunctureWound {};
      class PunctureWoundMedium : PunctureWound {};
      class PunctureWoundMajor : PunctureWound {};

      class VelocityWound : Avulsion {};
      class VelocityWoundMinor : VelocityWound {};
      class VelocityWoundMedium : VelocityWound {};
      class VelocityWoundMajor : VelocityWound {};
    };
  };

  class Medication {
    class SWS_Biofoam {
      painReduce = 0.4;
      timeInSystem = 60 * 10;
      timeTillMaxEffect = 10;
      viscosityChange = 5;
    };
  };
};
