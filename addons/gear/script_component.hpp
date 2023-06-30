#define COMPONENT gear
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_ARSENAL
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define MATERIAL(var1) QPATHTOF(data\materials\var1)
#define TEXTURE(var1) QPATHTOF(data\textures\var1)

#define SCOPE(varScope)      \
    scope = varScope;        \
    scopeCurator = varScope; \
    scopeArsenal = varScope

#define ITEM_META(varScope)    \
    dlc = "sws";            \
    author = QUOTE(AUTHOR); \
    SCOPE(varScope)

#define WITH(a,b) a, b
