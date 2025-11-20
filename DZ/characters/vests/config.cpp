class CfgPatches
{
	class Roach_Characters_Vests
	{
		units[]=
		{
			"Vests"
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
	class PlateCarrierVest;
	class Roach_PlateCarrierVest_Helix: PlateCarrierVest
    {
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Roach_Movie_Mod\DZ\characters\vests\data\Roach_BallisticVest_Helix.paa",
			"Roach_Movie_Mod\DZ\characters\vests\data\Roach_BallisticVest_Helix.paa",
			"Roach_Movie_Mod\DZ\characters\vests\data\Roach_BallisticVest_Helix.paa"
		};
	};
	class PlateCarrierPouches;
	class Roach_PlateCarrierPouches_Helix: PlateCarrierPouches
    {
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Roach_Movie_Mod\DZ\characters\vests\data\Roach_BallisticVest_Helix.paa",
			"Roach_Movie_Mod\DZ\characters\vests\data\Roach_BallisticVest_Helix.paa",
			"Roach_Movie_Mod\DZ\characters\vests\data\Roach_BallisticVest_Helix.paa"
		};
	};
};