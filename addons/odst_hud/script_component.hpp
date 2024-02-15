#define COMPONENT odst_hud
#define COMPONENT_BEAUTIFIED Improved ODST HUD
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_OPTRE_HUD
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"


#include "defineCommonGrids.hpp"
#include "defineCommonColors.hpp"

#define IDD_FOF 7000
#define IDC_FOF_TITLE 15112
#define IDC_FOF_RANGE 197
#define IDC_FOF_BACKGROUND 15110
#define IDC_FOF_VIEWPORT 102

#define IDC_FOF_GROUP_MAP 13301
#define IDC_FOF_MAP 101
