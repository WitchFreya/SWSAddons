class CfgRoles
{
    class Rifleman {
        META;
        displayName = "Rifleman";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
    };

    class CombatLifeSaver : Rifleman
    {
        displayName = "Combat Life Saver";
    };

    class Medic : CombatLifeSaver
    {
        displayName = "Medic";
    };

    class MachineGunner : Rifleman
    {
        displayName = "Machine Gunner";
    };

    class Marksman : Rifleman
    {
        displayName = "Marksman";
    };

    class Sniper : Marksman
    {
        displayName = "Sniper";
    };

    class Grenadier : Rifleman
    {
        displayName = "Grenadier";
    };

    class Engineer : Rifleman
    {
        displayName = "Engineer";
    };

    class DroneOperator : Rifleman
    {
        displayName = "Drone Operator";
    };

    class AntiarmorSpecialist : Rifleman
    {
        displayName = "Antiarmor Specialist";
    };

    class TeamLead : Rifleman
    {
        displayName = "Team Lead";
    };

    class PlatoonLead : TeamLead
    {
        displayName = "Platoon Lead";
    };

    class ArmorCrew : Rifleman
    {
        displayName = "Armor Crew";
    };

    class Pilot : Rifleman
    {
        displayName = "Pilot";
    };

    class Copilot : Pilot
    {
        displayName = "Copilot";
    };

    class Architect : Rifleman
    {
        displayName = "Architect";
    };
};
