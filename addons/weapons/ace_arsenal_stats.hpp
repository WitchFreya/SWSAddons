class ACE_Arsenal_Stats {
    class StatBase;

    class ACE_explosionTime : StatBase {
        condition = QUOTE(!(configName (_this select 1)) in OPTRE_STICKYABLE_NADE_TYPES_MAP);
    };
};
