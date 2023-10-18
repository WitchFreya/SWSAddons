#define C_GL(var0,var1) class MAGAZINE(3Rnd_FlareSmoke_##var1) : OPTRE_signalSmoke##var0 \
{ \
    ITEM_META(2); \
    displayName = QUOTE(3Rnd 3GL Flare Smoke (var1)); \
    count = 3; \
    mass = 4 * 3 - 2; \
}

C_GL(B,Blue);
C_GL(G,Green);
C_GL(O,Orange);
C_GL(P,Purple);
C_GL(R,Red);
C_GL(Y,Yellow);

#undef G_GL

