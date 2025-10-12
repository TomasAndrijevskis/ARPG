# Overview
This is an action RPG project built in **Unreal Engine 5.4**.  
Originally started as part of the course project from  
[*Unreal Engine 5 C++: Make Your Own Action Combat Game*](https://www.udemy.com/course/unreal-engine-action-combat-game/?couponCode=PMNVD2025),  
I continued developing and expanding it beyond the original version - adding new systems, balancing, and overall polish.

I had two main goals when I started enhancing this project:  
1. To learn how to code and solve problems independently on a real project.  
2. To implement my own features and design ideas.
## New Features
- **Two playable characters** - originally there was only a warrior; now the player can also choose a mage, each with their own playstyle.  
- **Player Progression (Abilities, Levels, and Stat Upgrades)** - players now earn experience by defeating enemies and can upgrade their character upon leveling up. Each character has 4 unlockable and upgradable abilities, as well as upgradable stats.  
- **Enemies** - originally there was only one enemy. Now there are two categories - bosses and minions with several variations: *3 different bosses* and *4 different minions*.  
- **Enemy AI** - enemies can patrol, chase the player, and return to their patrol area if the player escapes. Each enemy type has unique attacks, and 2 out of 3 bosses have phase transitions that change their behavior.  
- **Bonfires** - serve as checkpoints and enemy respawn triggers. They allow players to unlock/upgrade abilities, upgrade stats, and fast travel between previously visited bonfires.  
- **Save & Load** - 5 save slots, each storing map, player stats, and character data.  
- **Custom UI** - in the original course, all UI widgets were made with Blueprints. I recreated them in C++ and added several new ones.

## Used Assets 
Since my focus was primarily on coding, I used free, ready-to-use assets from Epic Games and other sources.
### Epic Games Paragon Packs:
[Fey](https://www.fab.com/listings/9afbcde6-4a14-4018-95c3-2f3a2e1da858),
[Rampage](https://www.fab.com/listings/0807cf74-08fd-4a33-8c8d-f33c9439fb1f),
[Phase](https://www.fab.com/listings/b2c95d5c-a805-460b-a01b-db6da3a778f0),
[Grux](https://www.fab.com/listings/8c4bac2c-f7f7-4632-a644-47f4e104f5d8),
[Greystone](https://www.fab.com/listings/122fd7bf-6f12-4304-a930-cccbbacdaebc)
### Environment Assets: 
[Flying Fantasy Town](https://www.fab.com/listings/40316b39-cf17-48c8-814b-059dbe6e7cee),
[Environments Bundle 6 Maps](https://www.fab.com/listings/ab189c8c-d208-47e0-b9d2-196639815f33)
### Visual Effects:
[FX Variety Pack](https://www.fab.com/listings/53531e17-369f-4bba-b493-8588f0dec07b),
[Mega Magic VFX Bundle](https://www.fab.com/listings/d0b1351a-acbf-4da6-ab4e-32fc934a255f),
[Realistic Starter VFX Pack Vol 2](https://www.fab.com/listings/ac2818b3-7d35-4cf5-a1af-cbf8ff5c61c1)
## Known Issues
 - Sometimes when player character falls of the map, it dies but reloading the save is not triggered.
