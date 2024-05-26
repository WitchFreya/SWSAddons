#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.inc.sqf"
ADDON = true;

GVAR(radioProps) = [
  "audioSource",
  "channel",
  "spatial",
  "speaker",
  "volume",
  "onOffState"
];
