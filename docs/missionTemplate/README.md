# Mission Template

Hello Architect! Welcome to the mission template. To get started, you can either clone this repo using Git (if you're familiar), download as a ZIP (which may take a while), or manually create each of the files in this directory. Sometime in the future I'll make this a bit easier.

## Setup Checklist

- [ ] Make sure you populate each of the properties in the `Variables.hpp` file.
  - `MISSION_DATE` **must** have a comma in it to determine where to split the colors for the Zeus missionTitle script if you choose to use it.
- [ ] Ensure that there are a number of player slots in the mission equivalent to whatever you put in `Variables.hpp`.
- [ ] Ensure that there is an extra Zeus slot specific to Platoon Lead, if you intend to have one during your mission.
  - If you do intend to have one, try to brief the PLT via an Eden screenshare or a Zeus walkthrough on your intentions for the mission before it begins.
  - Think of it this way: the Architect designs the railroad. The PLT makes sure the train runs on track. Let them be an asset to you during the op, there'll be more than enough other things to worry about.

## Helpful Documents

- [Event Scripts](https://community.bistudio.com/wiki/Event_Scripts): These detail what scripts can be placed in the mission directory to automatically run on certain events.
  - [Initialisation Order](https://community.bistudio.com/wiki/Initialisation_Order): This is the order that the Event Scripts will run.
- [Arma 3: Task Framework](https://community.bistudio.com/wiki/Arma_3:_Task_Framework): The tasks framework. A lot of these can be accessed via modules but it's a good idea to have an idea of what you're doing.
  - [Arma 3: Task Framework Tutorial](https://community.bistudio.com/wiki/Arma_3:_Task_Framework_Tutorial): How the task framework works from a scripting perspective.
- [ACE Wiki](https://ace3.acemod.org/wiki/): The wiki details a lot of useful info on how certain aspects of ACE work.
  - [Fortify Framework](https://ace3.acemod.org/wiki/framework/fortify-framework): This page details how to turn on and set budgets for the Fortify stuff.
- [Zeus Guide to LAMBS Danger FSM](https://www.fkgaming.eu/guides/official-guides/zeus-guides/zeus-guide-to-lambs-danger/): Some tutorial info that FK Gaming wrote up on Lambs. Primarily relevant from the Zeus perspective, but still informative.
