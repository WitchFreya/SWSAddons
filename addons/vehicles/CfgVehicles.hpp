#define CLASSES_VEHICLES                 \
    "SWS_V_MBT_M700_Viper",              \
    "SWS_V_MBT_M700_Viper_Flat",         \
    "SWS_V_MBT_M700_Viper_Flecktarn",    \
    "SWS_V_MBT_M700_Viper_Cobra",        \
    "SWS_V_APC_M35_Cougar",           \
    "SWS_V_APC_M35_Cougar_Flecktarn", \
    "SWS_V_APC_M35_Cougar_Cobra"


class CommanderOptics;
class EventHandlers;
class SensorTemplatePassiveRadar;
class TextureSources;
class Turrets;
class MainTurret;
class HitPoints;
class HitComTurret;
class HitComGun;
class VehicleSystemsTemplateLeftCommander;
class VehicleSystemsTemplateRightCommander;

class CfgVehicles
{
    //== Tanks
    class I_MBT_03_cannon_F;
    class I_APC_Wheeled_03_cannon_F;

    #include "CfgVehicles\Viper.inc"
    #include "CfgVehicles\Cougar.inc"
};
