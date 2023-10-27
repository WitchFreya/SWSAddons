// D77-TC-M Mini-Pelican
class SWS_V_UAV_Pelican : B_UAV_06_F
{
    ITEM_META(2);
    displayName = QNAME(Mini-Pelican);
    faction = "SWS_UNSC";
    textureList[] = {"SWS_UNSC", 1};
    hiddenSelectionsTextures[] = {QPATHTOF(data\UAV_Pelican\sws_co.paa)};
    fuelCapacity = 100;
    class AssembleInfo
    {
        assembleTo = "";
        base = "";
        displayName = "";
        dissasembleTo[] = {};
        primary = 1;
    };
};
