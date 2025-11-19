class CfgPatches
{
	class helix_billboards
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class land_billboard_helix: HouseNoDestruct
	{
		scope = 2;
		model = "Roach_Movie_Mod\Billboards\Billboard_1_HELIX.p3d";
	};
};
