#define COMPONENT Resupply
#include "\x\SWS\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_RESUPPLY
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\SWS\addons\main\script_macros.hpp"

#define POD_MIDDLE Ammo_SupplyPod
#define POD_EDITOR_DETAILS(var1,var2,var3) editorCategory = QUOTE(var1); \
                    editorSubcategory = QUOTE(var2); \
                    side = 4;\
                    SCOPE(var3)



/// Equipment list macros definition ///
#define POD_XX(var0) class TRIPLES(PREFIX,POD_MIDDLE,var0)
#define MAG_XX(var0,var1) class _xx_##var0 { magazine = QUOTE(var0); count = var1; }
#define WEAP_XX(var0,var1) class _xx_##var0 { weapon = QUOTE(var0); count = var1; }
#define ITEM_XX(var0,var1) class _xx_##var0 { name = QUOTE(var0); count = var1; }