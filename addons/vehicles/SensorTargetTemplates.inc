class SWS_SensorTargetTemplate {
  minRange = 8000;
  maxRange = 8000;
  objectDistanceLimitCoef = -1;
  viewDistanceLimitCoef = -1;
};

class SWS_SensorDisplayTemplate {
  componentType = "SensorsDisplayComponent";
  range[] = { 4000, 2000, 1000, 8000 };
  resource = "RscCustomInfoSensors";
};
