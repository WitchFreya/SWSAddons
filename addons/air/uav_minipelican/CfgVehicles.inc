#define CLASSES_VEHICLES \
    "SWS_V_UAV_MiniPelican"

class AssembleInfo;
class TextureSources;

class CfgVehicles
{
    class UAV_06_Base_F;

    class B_UAV_06_F : UAV_06_Base_F
    {
        class TextureSources : TextureSources
        {
            class SWS_UNSC
            {
                META;
                displayName = "SWS";
                textures[] = {QPATHTOF(data\uav_minipelican\sws_co.paa)};
            };
        };
    };

    class SWS_V_UAV_MiniPelican_Base : B_UAV_06_F
    {
        ITEM_META(0);
        displayName = QNAME(Mini-Pelican (Base));
        faction = "SWS_UNSC";
        textureList[] = {"SWS_UNSC", 1};
        hiddenSelectionsTextures[] = {QPATHTOF(data\uav_minipelican\sws_co.paa)};

        fuelCapacity = 100;
        transportMaxWeapons = 2;
        transportMaxMagazines = 20;
        transportMaxBackpacks = 2;
        transportAmmo = 0;
        transportRepair = 0;
        transportFuel = 0;
        maximumLoad =  1000;
        supplyRadius = -1;
        armor = 2.5;

        class TransportItems {};
        class AssembleInfo : AssembleInfo { dissasembleTo[] = {}; };
    };

    // D77-TC-M Mini-Pelican
    class SWS_V_UAV_MiniPelican : SWS_V_UAV_MiniPelican_Base
    {
        SCOPE(2);
        displayName = QNAME(Mini-Pelican);
    };
};
