class CfgPatches
{
	class Roach_Keycards
	{
		units[]=
		{
			"Keycards"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};

class cfgVehicles
{
	class Inventory_Base;
	class evg_keycards_base;
	class Roach_Keycards_Helix_Level1: evg_keycards_base
	{
		scope = 2;
		displayName = "Card Name Here";
		descriptionShort = "Card Description Here";
		hiddenSelectionsTextures[] = 
		{
			"Roach_Movie_Mod\DZ\keycards\data\roach_keycards_helix_level_1.paa"
		};
	};
};