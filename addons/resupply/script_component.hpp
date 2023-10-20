#define COMPONENT resupply
#define COMPONENT_BEAUTIFIED Resupply
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_RESUPPLY
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#undef AUTHOR
#define AUTHOR Demon
#define AUTHORS \
    "Demon",    \
    "Maid"

#include "\x\sws\addons\main\script_macros.hpp"


#define OBJ_CATEGORY(var1) editorCategory = QUOTE(SWSObjects); editorSubcategory = QUOTE(var1)

/// Equipment list macros definition ///

#define MAG_XX(var0,var1) class _xx_##var0 { magazine = QUOTE(var0); count = var1; }
#define WEAP_XX(var0,var1) class _xx_##var0 { weapon = QUOTE(var0); count = var1; }
#define ITEM_XX(var0,var1) class _xx_##var0 { name = QUOTE(var0); count = var1; }
