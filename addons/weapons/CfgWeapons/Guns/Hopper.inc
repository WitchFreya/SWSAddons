#define NAME_HOPPER NAME(M24RL-Sx 'Hopper' Launcher)

class WEAPON(Hopper): launch_MRAWS_green_F {
    ITEM_META(1);
    displayName = QUOTE(NAME_HOPPER(Base));
    baseWeapon = QWEAPON(DOUBLES(Hopper,Loaded));
    picture = QPATHTOF(data\icons\hopper_ca.paa);
    pictureWire = QPATHTOF(data\icons\hopper_wire_ca.paa);
    model = QPATHTOF(data\hopper\hopper.p3d);
    handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"};
    magazines[] = { QMAGAZINE(Hopper) };
    magazineReloadTime = 0.1;
    reloadMagazineSound[] = {"",1,1};

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = WEAPON_HOPPER_MASS;
    };
};

class WEAPON(DOUBLES(Hopper,Loaded)): WEAPON(Hopper) {
    SCOPE(2);
    displayName = QUOTE(NAME_HOPPER);
    magazines[] = {"CBA_FakeLauncherMagazine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = WEAPON_HOPPER_LOADED_MASS;
    };
};

class WEAPON(DOUBLES(Hopper,Used)): WEAPON(Hopper) {
    displayName = QUOTE(NAME_HOPPER (Used));
    magazines[] = {"CBA_FakeLauncherMagazine"};
    model = QPATHTOF(data\hopper\hopper_used.p3d);
};

#undef NAME_HOPPER
