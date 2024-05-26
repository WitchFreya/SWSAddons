class CfgFunctions {
  class acre_api {
    class Radios {
      class getRadioOnOffState {
        file = QPATHTOF(api\fnc_getRadioOnOffState.sqf);
        CFGFUNCTION_HEADER;
        RECOMPILE;
      };

      class setRadioOnOffState {
        file = QPATHTOF(api\fnc_setRadioOnOffState.sqf);
        CFGFUNCTION_HEADER;
        RECOMPILE;
      };
    };
  };
};
