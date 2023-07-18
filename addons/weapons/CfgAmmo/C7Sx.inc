class AMMO(DOUBLES(C7Sx,Sticky)) : OPTRE_c7_remote_ammo_thrown_sticky {
    ITEM_META(2);
    defaultMagazine = QMAGAZINE(DOUBLES(C7Sx,Sticky));
};

class AMMO(TRIPLES(C7Sx,Sticky,Explosion)) : OPTRE_sticky_c7_explosion {
    indirectHitRange = 2;
    indirectHit = 2500;
};
