#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

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
