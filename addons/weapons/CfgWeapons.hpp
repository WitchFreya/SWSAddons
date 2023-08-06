#define CLASSES_WEAPON      \
    QWEAPON(AR0M37),        \
    QWEAPON(AR0M37_GL),     \
    QWEAPON(AR0M37_SHT),    \
    QWEAPON(SM247), \
    QWEAPON(MA5BSx), \
    QWEAPON(DOUBLES(MA5BSx,GL)), \
    QOPTIC(Smartlink), \
    QWEAPON(DOUBLES(M24RL_D,Loaded))

class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class Single;
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

    #include "CfgWeapons\Guns\AR0M7.inc"
    #include "CfgWeapons\Guns\MA5BSx.inc"

    //== MG
    class Dmns_M247_GPMG;

    #include "CfgWeapons\Guns\SM247.inc"

    //== Launchers
    class launch_MRAWS_green_F;

    #include "CfgWeapons\Guns\M24RL_D.inc"

    //== Optics
    class OPTRE_MA5_Smartlink;

    #include "CfgWeapons\Optics\Smartlink.inc"

    //== Grenades
    class GrenadeLauncher;
    class Throw : GrenadeLauncher {
        muzzles[] += {
            QMUZZLE(M3Sx),
            QMUZZLE(M9Sx),
            QMUZZLE(9Bang),
            QMUZZLE(DOUBLES(9Bang,NoFuse)),
            QMUZZLE(C7Sx)
        };
        class ThrowMuzzle;
        class MUZZLE(M3Sx): ThrowMuzzle {
            magazines[] = {QGMAGAZINE(M3Sx)};
        };
        class MUZZLE(M9Sx): ThrowMuzzle {
            magazines[] = {QGMAGAZINE(M9Sx)};
        };
        class MUZZLE(9Bang): ThrowMuzzle {
            magazines[] = {QGMAGAZINE(9Bang)};
        };
        class MUZZLE(DOUBLES(9Bang,NoFuse)): ThrowMuzzle {
            magazines[] = {QGMAGAZINE(DOUBLES(9Bang,NoFuse))};
        };
        class MUZZLE(C7Sx): ThrowMuzzle {
            magazines[] = {QMAGAZINE(DOUBLES(C7Sx,Sticky))};
        };
    };
};

class CBA_DisposableLaunchers {
    WEAPON(M24RL_D)[] = { QWEAPON(DOUBLES(M24RL_D,Loaded)), QWEAPON(DOUBLES(M24RL_D,Used)) };
};
