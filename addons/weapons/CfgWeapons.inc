#define CLASSES_WEAPON      \
    "SWS_Weapon_AR0M37",        \
    "SWS_Weapon_AR0M37_GL",     \
    "SWS_Weapon_AR0M37_SHT",    \
    "SWS_Weapon_SM247", \
    "SWS_Weapon_MA5BSx", \
    "SWS_Weapon_MA5BSx_GL", \
    "SWS_Optic_SmartLink", \
    "SWS_Weapon_M24RL_D_Loaded", \
    "SWS_Weapon_SBR55", \
    "SWS_Weapon_ARMXS", \
    "SWS_Weapon_ARMXS_GL"

class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class Single;
class Burst;
class FullAuto;

class CfgWeapons {
    //== Rifles
    class LM_OPCAN_AR0M37;
    class LM_OPCAN_AR0M37_GL;
    class LM_OPCAN_AR0M37_SHT;
    class OPTRE_MA5B;
    class OPTRE_MA5BGL;
    class InventoryOpticsItem_Base_F;
    class PointerSlot;
    class OPTRE_BR55;
    class LM_OPCAN_ARMX;
    class LM_OPCAN_ARMX_GL;

    #include "CfgWeapons\Guns\AR0M7.inc"
    #include "CfgWeapons\Guns\MA5BSx.inc"
    #include "CfgWeapons\Guns\SBR55.inc"
    #include "CfgWeapons\Guns\ARMXS.inc"

    //== MG
    class Dmns_M247_GPMG;

    #include "CfgWeapons\Guns\SM247.inc"

    //== Launchers
    class launch_MRAWS_green_F;

    #include "CfgWeapons\Guns\M24RL_D.inc"

    //== Optics
    class OPTRE_MA5_SmartLink;

    #include "CfgWeapons\Optics\SmartLink.inc"

    //== Grenades
    class GrenadeLauncher;
    class Throw : GrenadeLauncher {
        muzzles[] += {
            "SWS_Muzzle_M3Sx",
            "SWS_Muzzle_M9Sx",
            "SWS_Muzzle_9Bang",
            "SWS_Muzzle_9Bang_NoFuse",
            "SWS_Muzzle_C7Sx"
        };
        class ThrowMuzzle;
        class SWS_Muzzle_M3Sx: ThrowMuzzle {
            magazines[] = {"SWS_Magazine_Grenade_M3Sx"};
        };
        class SWS_Muzzle_M9Sx: ThrowMuzzle {
            magazines[] = {"SWS_Magazine_Grenade_M9Sx"};
        };
        class SWS_Muzzle_9Bang: ThrowMuzzle {
            magazines[] = {"SWS_Magazine_Grenade_9Bang"};
        };
        class SWS_Muzzle_9Bang_NoFuse: ThrowMuzzle {
            magazines[] = {"SWS_Magazine_Grenade_9Bang_NoFuse"};
        };
        class SWS_Muzzle_C7Sx: ThrowMuzzle {
            magazines[] = {"SWS_Magazine_C7Sx_Sticky"};
        };
    };
};

class CBA_DisposableLaunchers {
    SWS_Weapon_M24RL_D[] = { "SWS_Weapon_M24RL_D_Loaded", "SWS_Weapon_M24RL_D_Used" };
};
