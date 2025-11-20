class CfgPatches
{
	class Roach_Characters_Headgear
	{
		units[]=
		{
			"Headgear"
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
	class Clothing_Base;
	class Clothing;
	class Mich2001Helmet;
	class Roach_Mich2001Helmet_Helix: Mich2001Helmet
	{
		scope=2;
		displayName="$STR_CfgVehicles_Mich2001Helmet0";
		descriptionShort="$STR_CfgVehicles_Mich2001Helmet1";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Roach_Movie_Mod\DZ\characters\headgear\data\Roach_Mich2001_Helix.paa",
			"Roach_Movie_Mod\DZ\characters\headgear\data\Roach_Mich2001_Helix.paa",
			"Roach_Movie_Mod\DZ\characters\headgear\data\Roach_Mich2001_Helix.paa"
		};
	};
};