#define NAME_M24RLD NAME(M24RL-D-Sx Launcher)

class WEAPON(M24RL_D): launch_MRAWS_green_F {
    ITEM_META(1);
    displayName = QUOTE(NAME_M24RLD (Loaded));
    baseWeapon = QWEAPON(DOUBLES(M24RL_D,Loaded));
    picture = QPATHTOF(data\icons\m24rl_d_ca.paa);
    pictureWire = QPATHTOF(data\icons\m24rl_d_wire_ca.paa);
    model = QPATHTOF(data\m24rl_d\m24rl_d.p3d);
    handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"};
    magazines[] = { QMAGAZINE(M24RL_D) };
    magazineReloadTime = 0.1;
    reloadMagazineSound[] = {"",1,1};

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = WEAPON_M24RLD_MASS;
    };
};

class WEAPON(DOUBLES(M24RL_D,Loaded)): WEAPON(M24RL_D) {
    SCOPE(2);
    displayName = QUOTE(NAME_M24RLD);
    magazines[] = {"CBA_FakeLauncherMagazine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = WEAPON_M24RLD_LOADED_MASS;
    };
};

class WEAPON(DOUBLES(M24RL_D,Used)): WEAPON(M24RL_D) {
    displayName = QUOTE(NAME_M24RLD (Used));
    magazines[] = {"CBA_FakeLauncherMagazine"};
};

#undef NAME_M24RLD
