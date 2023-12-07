#define CLASSES_VEHICLES                \
    "SWS_V_MBT_M700_Viper"              \
    , "SWS_V_MBT_M700_Viper_Captured"       \
    , "SWS_V_Heli_Raptor"               \
    , "SWS_V_Heli_Shrike_Base"          \
    , "SWS_V_Heli_Magpie_Base"          \
    , "SWS_V_APC_M35_Cougar"

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

// melb defs
class VehicleSystemsTemplateLeftPilot;
class VehicleSystemsTemplateRightPilot;
// end of melb defs


class CfgVehicles
{
    //== Tanks
    class I_MBT_03_cannon_F;
    class I_APC_Wheeled_03_cannon_F;

    #include "CfgVehicles\Viper.inc"
    #include "CfgVehicles\Cougar.inc"
    //== Helicopters
    class Heli_Attack_02_dynamicLoadout_base_F;
    #include "CfgVehicles\Raptor.inc"
    class MELB_AH6M;
    #include "CfgVehicles\Shrike.inc"
    class MELB_MH6M;
    #include "CfgVehicles\Magpie.inc"
};
