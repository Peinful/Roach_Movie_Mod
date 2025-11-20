class CfgPatches
{
	class Roach_Medical
	{
		units[]=
		{
			"Medical"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Medical"
		};
	};
};

class cfgVehicles
{
	class Inventory_Base;
	class BloodSyringe;
	class Roach_Fake_Cure_Syringe: BloodSyringe
	{
		scope=2;
		displayName="M-07-T Filled Syringe";
		descriptionShort="$STR_CfgVehicles_Syringe1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Roach_Movie_Mod\DZ\gear\medical\data\Roach_Fake_Cure_Syringe.paa"
		};
	};
	class Roach_Real_Cure_Syringe: BloodSyringe
	{
		scope=2;
		displayName="M-07-P Filled Syringe";
		descriptionShort="$STR_CfgVehicles_Syringe1";
		model="\dz\gear\medical\syringe_Full.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Roach_Movie_Mod\DZ\gear\medical\data\Roach_Real_Cure_Syringe.paa"
		};
	};
	class InjectionVial;
	class Roach_Temp_Cure_InjectionVial: InjectionVial
	{
		scope=2;
		displayName="M-07-T";
		descriptionShort="$STR_CfgVehicles_InjectionVial1";
	};
	class Roach_Perm_Cure_InjectionVial: InjectionVial
	{
		scope=2;
		displayName="M-07-P";
		descriptionShort="$STR_CfgVehicles_InjectionVial1";
	};
};