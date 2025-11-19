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
	class land_billboard_helix_dirty: HouseNoDestruct
	{
		scope = 2;
		model = "Roach_Movie_Mod\DZ\structures\Billboard_1_Helix_Dirty.p3d";
	};
	class land_billboard_helix_clean: HouseNoDestruct
	{
		scope = 2;
		model = "Roach_Movie_Mod\DZ\structures\Billboard_1_Helix_Clean.p3d";
	};
};
