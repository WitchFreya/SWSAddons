#ifndef COMMON_H

#define QUOTE(var) #var
#define BASE_PATH \z\sws\addons\arsenal
#define ASSETS BASE_PATH\assets
#define TEXTURE(file) QUOTE(ASSETS\textures\file)
#define MATERIAL(file) QUOTE(ASSETS\materials\file)

#define AUTHOR Maid

#define SCOPE(varScope)      \
    scope = varScope;        \
    scopeCurator = varScope; \
    scopeArsenal = varScope

#define ITEM_META(varScope)    \
    dlc = "sws";            \
    author = QUOTE(AUTHOR); \
    SCOPE(varScope)

#define WITH(a,b) a, b

#define COMMON_H 1
#endif
