
class SWS_V_Heli_Magpie_Base : MELB_MH6M
    {
    ITEM_META(2);
    displayName = QNAME(Sx-6A Magpie - Base);
    faction = "SWS_UNSC";
    side = 1;
    crew = "B_UNSCAF_Pilot_01";
    typicalCargo[] = { "B_UNSCAF_Pilot_01" };
    hiddenSelections[] = {"camo1","d_sn"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\shrike\melb_ext_co.paa),
        QPATHTOF(data\shrike\decals\blank_ca.paa)
    };
    weapons[] = {"CMFlareLauncher"};
    magazines[] = {"192Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine"};
};