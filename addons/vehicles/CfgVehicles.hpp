#define CLASSES_VEHICLES                \
    "SWS_V_APC_M107_Beaver",            \
    "SWS_V_Heli_Raptor"

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
class ACE_SelfActions;
class ACE_Passengers;

class CfgVehicles
{
    //== Tanks
    class I_MBT_03_cannon_F;

    //== APCs
    class I_APC_Wheeled_03_cannon_F;
    class B_APC_Tracked_01_CRV_F;

    //== Helicopters
    class Heli_Attack_02_dynamicLoadout_base_F;

    #include "CfgVehicles\Beaver.inc"
    #include "CfgVehicles\Raptor.inc"
};
