class CfgMagazineWells {
    class UGL_40x36 {
        DOUBLES(PREFIX,Magazines)[] = {
            QGSMAGAZINE(M3Sx,1Rnd),
            QGSMAGAZINE(M3Sx,3Rnd),
            QGSMAGAZINE(M9Sx,1Rnd),
            QGSMAGAZINE(9Bang,1Rnd),
            QGSMAGAZINE(9Bang,3Rnd)
        };
    };

    class 3UGL_40x36 {
        DOUBLES(PREFIX,Magazines)[] = {
            QGSMAGAZINE(M3Sx,1Rnd),
            QGSMAGAZINE(M3Sx,3Rnd),
            QGSMAGAZINE(M9Sx,1Rnd),
            QGSMAGAZINE(9Bang,1Rnd),
            QGSMAGAZINE(9Bang,3Rnd)
        };
    };

    class OPTRE_Magwell_M45 {
        GVAR(Magazines)[] = {
            QMAGAZINE(6Rnd_Shotgun_Incendiary),
            QMAGAZINE(12_Rnd_Shotgun_Incendiary)
        };
    };

    class UBS_12GA {
        GVAR(Magazines)[] = {
            QMAGAZINE(6Rnd_Shotgun_Incendiary)
        };
    };

    class OPTRE_Magwell_BR55 {
        GVAR(Magzines)[] = {
            // 19th
            "36Rnd_95x40_br_55",
            "36Rnd_95x40_ap_br_55",
            "36Rnd_95x40_jhp_br_55",
            // OPTRE's tracers
            "OPTRE_36Rnd_95x40_Mag_Tracer"
        };
    };
};
