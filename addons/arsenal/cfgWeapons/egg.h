class SWS_Helmet_Egg : OPTRE_UNSC_CH252D_Helmet_Jedi
{
    dlc = "sws";
    author = "Tiger";
    displayName = "[SWS] Egg's Helmet";
    hiddenSelectionsTextures[] = {
        TEXTURE(helmet_egg.paa),
        "optre_unsc_units\army\data\odst_helmet_visor_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\soft_packs_co.paa"};
    class ItemInfo : ItemInfo
    {
        hiddenSelectionsTextures[] = {
            TEXTURE(helmet_egg.paa),
            "optre_unsc_units\army\data\odst_helmet_visor_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"};
    };
};

class SWS_Vest_Egg : OPTRE_UNSC_M52D_Armor_Jedi
{
    dlc = "sws";
    author = "Tiger";
    displayName = "[SWS] Egg's Armor";
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
        "optre_unsc_units\army\data\armor_odst_co.paa",
        "optre_unsc_units\army\data\legs_odst_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        TEXTURE(armor_egg.paa)};

    class ItemInfo : ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
            "optre_unsc_units\army\data\armor_odst_co.paa",
            "optre_unsc_units\army\data\legs_odst_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            TEXTURE(armor_egg.paa)};
    };
};
