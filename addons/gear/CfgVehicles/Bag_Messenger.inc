class SWS_V_Bag_Messenger_Base : B_Messenger_IDAP_F
{
  ITEM_META(0);
  displayName = QNAME(Messenger Bag (Base));
  maximumLoad = 250;
  // mass = 20; //--- Inherited
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\sws_co.paa)};
};

class SWS_V_Bag_Messenger_Hammerspace_Base : SWS_V_Bag_Messenger_Base
{
  displayName = QNAME(Heavy Messenger Bag (Base));
  maximumLoad = 400;
  mass = 50;
};

class SWS_V_Bag_Messenger_Radio_Base : SWS_V_Bag_Messenger_Base
{
  displayName = QNAME(Heavy Messenger Bag (Base));
  maximumLoad = 400;
  mass = 50;
  //-- TFAR initialization
  tf_hasLRRadio = TRUE;
  tf_dialogUpdate = QUOTE(call TFAR_fnc_updateLRDialogToChannel);
  tf_range = 25000;
  tf_encryptionCode = "tf_west_radio_code";
  tf_dialog = "rt1523g_radio_dialog";
  tf_subtype = "digital_lr";
  // TODO(#60): Determine how to make this work
  // #include "\z\tfar\addons\static_radios\edenAttributes.hpp"
};

class SWS_V_Bag_Messenger : SWS_V_Bag_Messenger_Base
{
  SCOPE(2);
  displayName = QNAME(Messenger Bag);
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\sws_co.paa)};
};

class SWS_V_Bag_Messenger_Tiger : SWS_V_Bag_Messenger_Base
{
  SCOPE(2);
  displayName = QNAME(Messenger Bag (Tiger));
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\tiger_co.paa)};
};

class SWS_V_Bag_Messenger_Tiger_Hammerspace : SWS_V_Bag_Messenger_Hammerspace_Base
{
  SCOPE(2);
  displayName = QNAME(Heavy Messenger Bag (Tiger));
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\tiger_hammerspace_co.paa)};
};

class SWS_V_Bag_Messenger_Tiger_Radio : SWS_V_Bag_Messenger_Radio_Base
{
  SCOPE(2);
  displayName = QNAME(Radio Messenger Bag (Tiger));
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\tiger_radio_co.paa)};
};

class SWS_V_Bag_Messenger_Snare : SWS_V_Bag_Messenger_Base
{
  SCOPE(2);
  displayName = QNAME(Messenger Bag (Snare));
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\snare_co.paa)};
};

class SWS_V_Bag_Messenger_Snare_Radio : SWS_V_Bag_Messenger_Radio_Base
{
  SCOPE(2);
  displayName = QNAME(Radio Messenger Bag (Snare));
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Messenger\snare_radio_co.paa)};
};
