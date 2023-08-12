class WEAPON(SBR55) : OPTRE_BR55 {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(SBR-55);
    descriptionShort = "An elegant weapon for a more civilized SDM.";
    magazineWell[] = {"OPTRE_Magwell_BR55"};
    baseWeapon = QWEAPON(SBR55);
    model = "\OPTRE_Weapons\BR\BR";
    cursor = QWEAPON(Smartlink);

    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 45;
        class PointerSlot : PointerSlot {
            compatibleItems[] = {
                ATT_POINTER_ACE,
                ATT_POINTER_OPTRE_RAIL
            };
        };
    };

    class Single : Single {
        dispersion = 0.0005;
        minRange = 0;
        minRangeProbab = 0.8;
        midRange = 500;
        midRangeProbab = 0.9;
        maxRange = 1000;
        maxRangeProbab = 0.6;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 20;
    };

    class Burst : Burst {
        soundBurst = 0;
        burst = 3;
        reloadTime = 0.06;
        recoil = "recoil_auto_mx";
        recoilProne = "recoil_auto_prone_mx";
        dispersion = 0.0005;
        minRange = 1;
        minRangeProbab = 0.8;
        midRange = 500;
        midRangeProbab = 0.9;
        maxRange = 1000;
        maxRangeProbab = 0.6;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 10;
    };
};
