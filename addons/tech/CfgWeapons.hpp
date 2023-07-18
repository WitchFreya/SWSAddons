#define CLASSES_WEAPONS \
    QTERMINAL(Scarlet)

class CfgWeapons {
    class B_UavTerminal;

    class TERMINAL(Scarlet): B_UavTerminal {
        ITEM_META(2);
        CLEARANCE(SECRET/DECWHI);
        _generalMacro = QTERMINAL(Uav);
        displayName = "SCARLET";
        descriptionShort = "System Calibration and Arsenal Retasking Light Engineering Terminal.";
        model = "\a3\Props_F_Enoch\Military\Equipment\Laptop_03_F.p3d";
        picture = QPATHTOF(data\terminal_scarlet_ca.paa);
        hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa"};

        ACE_explosives_triggerType = "Command";
        ACE_explosives_range = 1000;
        ace_explosives_detonator = 1;
    };
};
