class CfgWeapons {
    class Default;
    class ItemInfo: Default {
        scope = 1;
    };
    class Weap_melee_knife : Default {
        scope = 1;
    };
    class 41st_Weap_melee_knife : Default {
        scope = 1;
    };
    class HitpointsProtectionInfo : Default {
        scope = 1;
    };

    delete ItemInfo;
    delete 41st_Weap_melee_knife;
    delete Weap_melee_knife;
    delete HitpointsProtectionInfo;
};
