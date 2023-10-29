#define CLASSES_WEAPONS \
    "SWS_Weapon_M24RL_D"

#define NAME_M24RLD NAME(M24RL-Sx 'Howdy')

class WeaponSlotsInfo;

class CBA_DisposableLaunchers {
    SWS_Weapon_M24RL_D[] = { "SWS_Weapon_M24RL_D_Loaded", "SWS_Weapon_M24RL_D_Used" };
};

class CfgWeapons
{
    class launch_MRAWS_green_F;

    class SWS_Weapon_M24RL_D : launch_MRAWS_green_F {
        ITEM_META(1);
        CLEARANCE(RESTRICTED/DECWHITE);
        displayName = QUOTE(NAME_M24RLD);
        baseWeapon = "SWS_Weapon_M24RL_D_Loaded";
        picture = QPATHTOF(data\icons\m24rl_d_ca.paa);
        pictureWire = QPATHTOF(data\icons\m24rl_d_wire_ca.paa);
        model = QPATHTOF(data\m24rl_d\m24rl_d.p3d);
        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"};
        magazines[] = {"SWS_Magazine_M24RL_D"};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};
        description = "A single-use dumbfire rocket launcher that will make short work of most targets.";
        descriptionShort = "Disposable dumbfire. 'Howdy' is the last thing they'll hear.";

        // backblast
        ACE_overpressure_angle = 55;
        ACE_overpressure_range = 10;

        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = MASS_WEAPON;
        };
    };

    class SWS_Weapon_M24RL_D_Loaded : SWS_Weapon_M24RL_D
    {
        SCOPE(2);
        displayName = QUOTE(NAME_M24RLD (Disposable));
        magazines[] = {"CBA_FakeLauncherMagazine"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = MASS_WEAPON + MASS_MAG;
        };
    };

    class SWS_Weapon_M24RL_D_Used : SWS_Weapon_M24RL_D
    {
        displayName = QUOTE(NAME_M24RLD (Used));
        baseWeapon = "SWS_Weapon_M24RL_D_Used";
        magazines[] = {"CBA_FakeLauncherMagazine"};
    };
};

#undef NAME_M24RLD
