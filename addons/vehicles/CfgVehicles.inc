#define CLASSES_VEHICLES "SWS_V_MBT_M700_Viper"

class Turrets;
class MainTurret;
class CommanderOptics;
class TextureSources;

class SensorTemplatePassiveRadar;
class SensorTemplateDataLink;

class VehicleSystemsTemplateLeftCommander;
class VehicleSystemsTemplateRightCommander;
class Components;

class SWS_SensorTargetTemplate {
    minRange = 8000;
    maxRange = 8000;
    objectDistanceLimitCoef = -1;
    viewDistanceLimitCoef = -1;
};

class CfgVehicles
{
    //== Tanks
    class I_MBT_03_cannon_F;

    #include "CfgVehicles\Viper.inc"
};
