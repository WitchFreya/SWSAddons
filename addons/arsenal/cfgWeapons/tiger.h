class SWS_Helmet_Tiger : OPTRE_UNSC_CH252D_Helmet
{
    dlc = "sws";
    author = "Tiger";
    displayName = "[SWS] Tiger's Helmet";
    hiddenSelectionsTextures[] = {
        TEXTURE(helmet_tiger.paa),
        TEXTURE(VISR_Pink.paa)};

    class ItemInfo : ItemInfo
    {
        hiddenSelectionsTextures[] = {
            TEXTURE(helmet_tiger.paa),
            TEXTURE(VISR_Pink.paa)};
    };
};

class SWS_Vest_Tiger : SWS_Base_Armor
{
    dlc = "sws";
    author = "Tiger";
    displayName = "[SWS] Tiger's Armor";
    hiddenSelectionsTextures[] = {
        "11th_stb_gear\_textures\misc\Armor\V\vest_odst_co.paa",
        "11th_stb_gear\_textures\misc\Armor\A\armor_odst_co.paa",
        "11th_stb_gear\_textures\11th\Hades_L\Hades_1-1_Legs.paa",
        "optre_unsc_units\army\data\ghillie_desert_co.paa",
        TEXTURE(armor_tiger.paa)};

    class ItemInfo : ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "11th_stb_gear\_textures\misc\Armor\V\vest_odst_co.paa",
            "11th_stb_gear\_textures\misc\Armor\A\armor_odst_co.paa",
            "11th_stb_gear\_textures\11th\Hades_L\Hades_1-1_Legs.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            TEXTURE(armor_tiger.paa)};
    };
};
