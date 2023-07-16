class WEAPON(SM247): Dmns_M247_GPMG {
    WEAPON_META(SM247,2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = NAME(SM247);
    model = "\OPTRE_Weapons\MG\M247.p3d";
    hiddenSelections[] = {
        "mainbody1",
        "mainbody2",
        "magazine",
        "stock",
        "details",
        "barrel_sights"
    };
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\MG\data\M247_mainbody1_CO.paa",
        "\OPTRE_Weapons\MG\data\M247_mainbody2_CO.paa",
        "\OPTRE_Weapons\MG\data\M247_magazine_CO.paa",
        "\OPTRE_Weapons\MG\data\M247_stock_CO.paa",
        "\OPTRE_Weapons\MG\data\M247_details_CO.paa",
        "\OPTRE_Weapons\MG\data\M247_barrel_sights_CO.paa"
    };
    magazineWell[] = {
        "OPTRE_Magwell_MA5B",
        "OPTRE_Magwell_MA5A"
    };
    magazines[] = {
        QMAGAZINE(100Rnd_762x51_Mag),
        QMAGAZINE(100Rnd_762x51_Mag_Tracer),
        QMAGAZINE(200Rnd_762x51_Mag),
        QMAGAZINE(200Rnd_762x51_Mag_Tracer),
        QMAGAZINE(400Rnd_762x51_Mag),
        QMAGAZINE(400Rnd_762x51_Mag_Tracer)
    };

    class Single: Single {
        dispersion = 0.00064;
        reloadTime = 0.082;
    };

    class FullAuto: FullAuto {
        dispersion = 0.00065;
        reloadTime = 0.082;
    };
};
