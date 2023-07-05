#define CLASSES_AMMO \
    QAMMO(762x51_Ball)

class CfgAmmo {
    #define MODEL_A3_TRACER_YELLOW \A3\Weapons_f\Data\bullettracer\tracer_yellow

    class OPTRE_B_762x51_Ball;

    class AMMO(762x51_Ball): OPTRE_B_762x51_Ball {
        dlc = "sws";
        hit = 34;
        typicalSpeed = 950;
        caliber = 6.0;
        model = QUOTE(MODEL_A3_TRACER_YELLOW);
    };
};
