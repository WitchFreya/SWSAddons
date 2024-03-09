#define CLASSES_VEHICLES                    \
  "SWS_V_Bag_Messenger"                     \
  , "SWS_V_Bag_Messenger_Maid_Radio"        \
  , "SWS_V_Bag_Messenger_Maid"              \
  , "SWS_V_Bag_Messenger_Snare_Radio"       \
  , "SWS_V_Bag_Messenger_Snare"             \
  , "SWS_V_Bag_Messenger_Tiger_Hammerspace" \
  , "SWS_V_Bag_Messenger_Tiger_Medical"     \
  , "SWS_V_Bag_Messenger_Tiger_Radio"       \
  , "SWS_V_Bag_Messenger_Tiger"

#define INFO_VARIANT(varName) class XtdGearInfo : XtdGearInfo { variant = QUOTE(varName); }

class CfgVehicles {
  class B_Messenger_IDAP_F;

  class SWS_V_Bag_Messenger_Base : B_Messenger_IDAP_F {
    ITEM_META(0);
    displayName = "-";
    maximumLoad = 250;
    // mass = 20; //--- Inherited
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\sws_co.paa)};

    class XtdGearInfo {
      model = "SWS_Bag_Messenger";
      variant = "SWS";
      purpose = "Standard";
    };
  };

  class SWS_V_Bag_Messenger_Hammerspace_Base : SWS_V_Bag_Messenger_Base {
    displayName = "-";
    maximumLoad = 400;
    mass = 50;

    class XtdGearInfo : XtdGearInfo {
      purpose = "Heavy";
    };
  };

  class SWS_V_Bag_Messenger_Radio_Base : SWS_V_Bag_Messenger_Base {
    displayName = "-";
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

    class XtdGearInfo : XtdGearInfo {
      purpose = "LR";
    };
  };

  class SWS_V_Bag_Messenger_Medical_Base : SWS_V_Bag_Messenger_Hammerspace_Base {
    displayName = "-";
    mass = 10;

    class XtdGearInfo : XtdGearInfo {
      purpose = "Medical";
    };
  };

  class SWS_V_Bag_Messenger : SWS_V_Bag_Messenger_Base {
    SCOPE(2);
    displayName = QNAME(Messenger Bag);
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\sws_co.paa)};
  };

  /** Tiger's Variants */
  class SWS_V_Bag_Messenger_Tiger : SWS_V_Bag_Messenger_Base {
    SCOPE(2);
    displayName = QNAME(Messenger Bag (Tiger));
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\tiger_co.paa)};
    INFO_VARIANT(Tiger);
  };

  class SWS_V_Bag_Messenger_Tiger_Hammerspace : SWS_V_Bag_Messenger_Hammerspace_Base {
    SCOPE(2);
    displayName = QNAME(Heavy Messenger Bag (Tiger));
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\tiger_hammerspace_co.paa)};
    INFO_VARIANT(Tiger);
  };

  class SWS_V_Bag_Messenger_Tiger_Radio : SWS_V_Bag_Messenger_Radio_Base {
    SCOPE(2);
    displayName = QNAME(Radio Messenger Bag (Tiger));
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\tiger_radio_co.paa)};
    INFO_VARIANT(Tiger);
  };

  class SWS_V_Bag_Messenger_Tiger_Medical : SWS_V_Bag_Messenger_Medical_Base {
    SCOPE(2);
    displayName = QNAME(Medical Messenger Bag (Tiger));
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\tiger_medical_co.paa)};
    INFO_VARIANT(Tiger);
  };

  /** Snare's Variants */
  class SWS_V_Bag_Messenger_Snare : SWS_V_Bag_Messenger_Base {
    SCOPE(2);
    displayName = QNAME(Messenger Bag (Snare));
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\snare_co.paa)};
    INFO_VARIANT(Snare);
  };

  class SWS_V_Bag_Messenger_Snare_Radio : SWS_V_Bag_Messenger_Radio_Base {
    SCOPE(2);
    displayName = QNAME(Radio Messenger Bag (Snare));
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\snare_radio_co.paa)};
    INFO_VARIANT(Snare);
  };

  /** Maid's Variants */
  class SWS_V_Bag_Messenger_Maid : SWS_V_Bag_Messenger_Base {
    SCOPE(2);
    displayName = QNAME(Messenger Bag (Maid));
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\maid_co.paa)};
    INFO_VARIANT(Maid);
  };

  class SWS_V_Bag_Messenger_Maid_Radio : SWS_V_Bag_Messenger_Radio_Base {
    SCOPE(2);
    displayName = QNAME(Radio Messenger Bag (Maid));
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_messenger\maid_co.paa)};
    INFO_VARIANT(Maid);
  };
};

#undef INFO_VARIANT
