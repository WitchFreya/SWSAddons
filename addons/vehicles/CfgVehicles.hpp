#define CLASSES_VEHICLES                \
    "SWS_V_MBT_M700_Viper",             \
    "SWS_V_MBT_M700_Viper_Flat",        \
    "SWS_V_MBT_M700_Viper_Flecktarn",   \
    "SWS_V_MBT_M700_Viper_Cobra"


class CommanderOptics;
class EventHandlers;
class MainTurret;
class SensorTemplatePassiveRadar;
class TextureSources;
class Turrets;
class VehicleSystemsTemplateLeftCommander;
class VehicleSystemsTemplateRightCommander;

class CfgVehicles
{
    //== Tanks
    class I_MBT_03_cannon_F;

    #include "CfgVehicles\Viper.inc"
};
