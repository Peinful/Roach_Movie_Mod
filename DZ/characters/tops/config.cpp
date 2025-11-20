class CfgPatches
{
	class Roach_Characters_Tops
	{
		units[]=
		{
			"Tops"
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
	class LabCoat;
	class Roach_Helix_LabCoat: LabCoat
	{
		scope=2;
		displayName="$STR_CfgVehicles_LabCoat0";
		descriptionShort="$STR_CfgVehicles_LabCoat1";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Roach_Movie_Mod\DZ\characters\tops\data\LabCoat_Helix_co.paa",
			"Roach_Movie_Mod\DZ\characters\tops\data\LabCoat_Helix_co.paa",
			"Roach_Movie_Mod\DZ\characters\tops\data\LabCoat_Helix_co.paa"
		};
	};
	class TacticalShirt_ColorBase;
	class Roach_TacticalShirt_Helix: TacticalShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Roach_Movie_Mod\DZ\characters\tops\data\roach_pcu5jacket_ground_helix.paa",
			"Roach_Movie_Mod\DZ\characters\tops\data\roach_pcu5jacket_helix.paa",
			"Roach_Movie_Mod\DZ\characters\tops\data\roach_pcu5jacket_helix.paa"
		};
	};
};