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
