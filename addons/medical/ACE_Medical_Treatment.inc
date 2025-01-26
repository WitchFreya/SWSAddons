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
      class ContusionLarge : Contusion {};

      class Crush : Abrasion {};
      class CrushMinor : Crush {};
      class CrushMedium : Crush {};
      class CrushLarge : Crush {};

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
      class LacerationLarge : Laceration {};

      class PunctureWound : Avulsion {};
      class PunctureWoundMinor : PunctureWound {};
      class PunctureWoundMedium : PunctureWound {};
      class PunctureWoundLarge : PunctureWound {};

      class VelocityWound : Avulsion {};
      class VelocityWoundMinor : VelocityWound {};
      class VelocityWoundMedium : VelocityWound {};
      class VelocityWoundLarge : VelocityWound {};

      class ThermalBurn : Avulsion {};
      class ThermalBurnMinor : ThermalBurn {};
      class ThermalBurnMedium : ThermalBurn {};
      class ThermalBurnLarge : ThermalBurn {};
    };

    class SWS_Medigel : BasicBandage {
      // Used if advanced medical treatment is turned off
      effectiveness = 5;
      reopeningChance = 0;
      reopeningMaxDelay = 0;
      reopeningMinDelay = 0;

      // Scrape
      class Abrasion {
        effectiveness = 5;
        reopeningChance = 0;
        reopeningMaxDelay = 0;
        reopeningMinDelay = 0;
      };
      class AbrasionMinor : Abrasion {};
      class AbrasionMedium : Abrasion {};
      class AbrasionMajor : Abrasion {};

      // Bruise
      class Contusion : Abrasion {};
      class ContusionMinor : Contusion {};
      class ContusionMedium : Contusion {};
      class ContusionLarge : Contusion {};

      class ThermalBurn : Abrasion {};
      class ThermalBurnMinor : ThermalBurn {};
      class ThermalBurnMedium : ThermalBurn {};
      class ThermalBurnLarge : ThermalBurn {};

      class Crush : Abrasion {};
      class CrushMinor : Crush {};
      class CrushMedium : Crush {};
      class CrushLarge : Crush {};

      class Avulsion {
        effectiveness = 0;
        reopeningChance = 0;
        reopeningMaxDelay = 0;
        reopeningMinDelay = 0;
      };
      class AvulsionMinor : Avulsion {
        effectiveness = 5;
      };
      class AvulsionMedium : Avulsion {};
      class AvulsionLarge : Avulsion {};

      class Cut : Avulsion {};
      class CutMinor : Cut {
        effectiveness = 5;
      };
      class CutMedium : Cut {};
      class CutLarge : Cut {};

      class Laceration : Avulsion {};
      class LacerationMinor : Laceration {
        effectiveness = 5;
      };
      class LacerationMedium : Laceration {};
      class LacerationLarge : Laceration {};

      class PunctureWound : Avulsion {};
      class PunctureWoundMinor : PunctureWound {
        effectiveness = 5;
      };
      class PunctureWoundMedium : PunctureWound {};
      class PunctureWoundLarge : PunctureWound {};

      class VelocityWound : Avulsion {};
      class VelocityWoundMinor : VelocityWound {
        effectiveness = 5;
      };
      class VelocityWoundMedium : VelocityWound {};
      class VelocityWoundLarge : VelocityWound {};
    };
  };

  class Medication {
    class SWS_Biofoam {
      painReduce = 0.5;
      timeInSystem = 60 * 10;
      timeTillMaxEffect = 10;
      viscosityChange = 5;
    };

    class SWS_Medigel {
      painReduce = 0.5;
      timeInSystem = 60 * 10;
      timeTillMaxEffect = 10;
    };

    class SWS_NeuroStim {
      painReduce = 0.8;
      timeInSystem = 60 * 2;
      timeTillMaxEffect = 3;
      viscosityChange = 5;
      maxDose = 5;
    };
  };
};
