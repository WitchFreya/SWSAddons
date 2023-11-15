class SWS_V_Bag_Messenger : B_Messenger_IDAP_F
{
    ITEM_META(2);
    displayName = QNAME(Messenger Bag);
    maximumLoad = 250;
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\sws_co.paa)};
};

class SWS_V_Bag_Messenger_Tiger : SWS_V_Bag_Messenger
{
    displayName = QNAME(Messenger Bag (Tiger));
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\tiger_co.paa)};
};

class SWS_V_Bag_Messenger_Tiger_Hammerspace : SWS_V_Bag_Messenger_Tiger
{
    displayName = QNAME(Heavy Messenger Bag (Tiger));
    maximumLoad = 350;
    mass = 40;
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\hammerspace_co.paa)};
};

class SWS_V_Bag_Messenger_Tiger_Radio : 19thANPRC419
{
    ITEM_META(2);
    displayName = QNAME(Radio Messenger Bag (Tiger));
    model = "\A3\Supplies_F_Orange\Bags\B_Messenger_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\radio_co.paa)};
    picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_IDAP_CA.paa";
};
