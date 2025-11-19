class CfgPatches
{
	class Roach_Movie_Mod
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class Roach_Movie_Mod
	{
		dir="Roach_Movie_Mod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Roach Movie Mod";
		credits="Pein";
		author="Pein";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = 
				{
					"Roach_Movie_Mod/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Roach_Movie_Mod/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Roach_Movie_Mod/scripts/5_Mission"
				};
			};
		};
	};
};

