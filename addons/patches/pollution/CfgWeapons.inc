#define CLASSSES_WEAPONS  \
  "PollutedItem"          \
  , "ItemInfo"            \
  , "WeaponSlotsInfo"

class CfgWeapons {
  class Default;
  class PollutedItem : Default {
    scope = 1;
    GVAR(polluted) = 1;
  };
  class ItemInfo: PollutedItem { };
  class WeaponSlotsInfo: PollutedItem { };
};
