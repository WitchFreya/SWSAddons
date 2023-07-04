#define WEAPON(var0) TRIPLES(SWS,Weapon,var0)
#define WEAPON_CLASSES          \
    QUOTE(WEAPON(AR0M37)),      \
    QUOTE(WEAPON(AR0M37_GL)),   \
    QUOTE(WEAPON(AR0M37_SHT))
#define DISPLAY_NAME(var0) QUOTE([SWS] var0)
#define WEAPON_META(var0,scope) \
    ITEM_META(scope);           \
    baseweapon = QUOTE(WEAPON(var0))


class CfgWeapons {
    #include "dependencies\arma.hpp"
    #include "dependencies\opcan.hpp"
    class WEAPON(AR0M37): LM_OPCAN_AR0M37 {
        WEAPON_META(AR0M37,2);
        displayName = DISPLAY_NAME(AR-0M37 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_ca.paa);
    };
    class WEAPON(AR0M37_GL): LM_OPCAN_AR0M37_GL {
        WEAPON_META(AR0M37_GL,2);
        displayName = DISPLAY_NAME(AR-0M37 GL 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
    };
    class WEAPON(AR0M37_SHT): LM_OPCAN_AR0M37_SHT {
        WEAPON_META(AR0M37_SHT,2);
        displayName = DISPLAY_NAME(AR-0M37 Breacher 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
    };
};
