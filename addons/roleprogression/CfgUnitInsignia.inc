class SWS_CfgRoles
{
    class Rifleman
    {
        displayName = "Rifleman";
    };
    class SWS_Insignia_Rifleman
    {
        META;
        displayName = QNAME(Rifleman);
        texture = QPATHTOF(data\sws_icon_small_ca);
        textureVehicle = QPATHTOF(data\sws_icon_small_ca);
        GVAR(role) = "rifleman";
    };

    #define C_INSIGNIA(var0,var1) class SWS_Insignia_##var0 : SWS_Insignia_Rifleman {  \
        displayName = QNAME(var1); \
        GVAR(role) = QUOTE(var0); \
    }
    C_INSIGNIA(CLS,Combat Life Saver);
    C_INSIGNIA(Medic,Medic);
    C_INSIGNIA(Autorifleman,Machine Gunner);
    C_INSIGNIA(Marksman,Marksman);
    C_INSIGNIA(Sniper,Sniper);
    C_INSIGNIA(Grenadier,Grenadier);
    C_INSIGNIA(Engineer,Engineer);
    C_INSIGNIA(DroneOperator,Drone Operator);
    C_INSIGNIA(Antiarmor,Antiarmor Specialist);
    C_INSIGNIA(TeamLead,Team Lead);
    C_INSIGNIA(Architect,Architect);
    #undef C_INSIGNIA
};
