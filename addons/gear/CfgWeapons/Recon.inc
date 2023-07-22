class HELMET(Maid_Recon): HELMET(Base) {
    ITEM_META(2);
    displayName = QNAME(Recon (Maid));
    picture = "\OPTRE_UNSC_Units\army\icons\odst_recon.paa";
    model = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
    hiddenSelectionsMaterials[] = {
        MATERIAL(recon_op)
    };
    hiddenSelections[] = {
        "camo",
        "camo2",
        "camo3",
        "H_Ghillie",
        "H_VacCollar"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\textures\helmet_maid_recon_co.paa),
        QPATHTOF(data\textures\visr_maid_recon_co.paa),
        "", // "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "",
        "optre_unsc_units\army\data\soft_packs_co.paa"
    };
    class ItemInfo : ItemInfo {
        uniformModel = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
        hiddenSelections[] = {
            "camo",
            "camo2",
            "camo3",
            "H_Ghillie",
            "H_VacCollar"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\helmet_maid_recon_co.paa),
            QPATHTOF(data\textures\visr_maid_recon_co.paa),
            "", // "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
    };
};

class HELMET(TRIPLES(Maid,Recon,dp)) : DOUBLES(HELMET(Base),dp) {
    ITEM_META(1);
    displayName = QNAME(Recon (Maid/Depolarized));
    model = "\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
    picture = "\OPTRE_UNSC_Units\army\icons\odst_recon.paa";
    hiddenSelectionsMaterials[] = {
        MATERIAL(recon_op),
        QPATHTOF(data\materials\recon_visor_trans.rvmat)
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\textures\helmet_maid_recon_co.paa),
        QPATHTOF(data\textures\visr_maid_recon_ca.paa)
    };
    hiddenSelections[] = {
        "camo",
        "camo2",
        "camo3",
        "H_Ghillie",
        "H_VacCollar"
    };

    class ItemInfo: ItemInfo {
        uniformModel = "\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\helmet_maid_recon_co.paa),
            QPATHTOF(data\textures\visr_maid_recon_ca.paa)
        };
        hiddenSelections[] = {
            "camo",
            "camo2",
            "camo3",
            "H_Ghillie",
            "H_VacCollar"
        };
    };
};
