class CfgRoles
{
    class Default {
        displayName = "Rifleman";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
    };

    class CombatLifeSaver : Default
    {
        scope = 1;
        displayName = "Combat Life Saver";
    };

    class Medic : CombatLifeSaver
    {
        scope = 1;
        displayName = "Medic";
    };

    class MachineGunner : Default
    {
        scope = 1;
        displayName = "Machine Gunner";
    };

    class Marksman : Default
    {
        scope = 1;
        displayName = "Marksman";
    };

    class Sniper : Marksman
    {
        scope = 1;
        displayName = "Sniper";
    };

    class Grenadier : Default
    {
        scope = 1;
        displayName = "Grenadier";
    };

    class Engineer : Default
    {
        scope = 1;
        displayName = "Engineer";
    };

    class DroneOperator : Default
    {
        scope = 1;
        displayName = "Drone Operator";
    };

    class AntiarmorSpecialist : Default
    {
        scope = 1;
        displayName = "Antiarmor Specialist";
    };

    class TeamLead : Default
    {
        scope = 1;
        displayName = "Team Lead";
    };

    class PlatoonLead : TeamLead
    {
        scope = 1;
        displayName = "Platoon Lead";
    };

    class ArmorCrew : Default
    {
        scope = 1;
        displayName = "Armor Crew";
    };

    class Pilot : Default
    {
        scope = 1;
        displayName = "Pilot";
    };

    class Copilot : Pilot
    {
        scope = 1;
        displayName = "Copilot";
    };
};
