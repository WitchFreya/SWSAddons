#define WEAPON_CLASSES  \
    QWEAPON(AR0M37),    \
    QWEAPON(AR0M37_GL), \
    QWEAPON(AR0M37_SHT)

class CfgWeapons {
    #include "dependencies\arma.hpp"
    #include "dependencies\opcan.hpp"
    class WEAPON(AR0M37): LM_OPCAN_AR0M37 {
        WEAPON_META(AR0M37,2);
        displayName = NAME(AR-0M37 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_ca.paa);

        class XtdGearInfo {
            model = QWEAPON(AR0M37);
            underbarrel = "None";
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
};
