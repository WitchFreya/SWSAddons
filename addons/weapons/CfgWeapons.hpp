#define WEAPON_CLASSES      \
    QWEAPON(AR0M37),        \
    QWEAPON(AR0M37_GL),     \
    QWEAPON(AR0M37_SHT),    \
    QWEAPON(SM247)

class CfgWeapons {
    #include "dependencies\arma.hpp"
    #include "dependencies\opcan.hpp"
    #include "dependencies\dmns.hpp"
    class WEAPON(AR0M37): LM_OPCAN_AR0M37 {
        WEAPON_META(AR0M37,2);
        displayName = NAME(AR-0M37 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_ca.paa);

        class XtdGearInfo {
            model = QWEAPON(AR0M37);
            underbarrel = "None";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot;
            class PointerSlot : PointerSlot {
                compatibleItems[] += {"ace_acc_pointer_green"};
            };
        };
    };
    class WEAPON(AR0M37_GL): LM_OPCAN_AR0M37_GL {
        WEAPON_META(AR0M37_GL,2);
        displayName = NAME(AR-0M37 GL 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
        class XtdGearInfo {
            model = QWEAPON(AR0M37);
            underbarrel = "GL";
        };
    };
    class WEAPON(AR0M37_SHT): LM_OPCAN_AR0M37_SHT {
        WEAPON_META(AR0M37_SHT,2);
        displayName = NAME(AR-0M37 Breacher 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
        class XtdGearInfo {
            model = QWEAPON(AR0M37);
            underbarrel = "SHT";
        };
    };

    class WEAPON(SM247): Dmns_M247_GPMG {
        WEAPON_META(SM247,2);
        displayName = NAME(SM247);
        // TODO: the box mag presently doesn't render like this; make it work
        // model = "\OPTRE_Weapons\MG\M247.p3d";
        // hiddenSelections[] = {
        //     "mainbody1",
        //     "mainbody2",
        //     "magazine",
        //     "stock",
        //     "details",
        //     "barrel_sights"
        // };
        // hiddenSelectionsTextures[] = {
        //     "\OPTRE_Weapons\MG\data\M247_mainbody1_CO.paa",
        //     "\OPTRE_Weapons\MG\data\M247_mainbody2_CO.paa",
        //     "\OPTRE_Weapons\MG\data\M247_magazine_CO.paa",
        //     "\OPTRE_Weapons\MG\data\M247_stock_CO.paa",
        //     "\OPTRE_Weapons\MG\data\M247_details_CO.paa",
        //     "\OPTRE_Weapons\MG\data\M247_barrel_sights_CO.paa"
        // };
    };
};
