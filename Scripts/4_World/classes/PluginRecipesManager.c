modded class PluginRecipesManager 
{
    override void RegisterRecipies() 
	{   
		super.RegisterRecipies();
		
		//syringe
		RegisterRecipe(new Roach_Fake_Cure);
		RegisterRecipe(new Roach_Real_Cure);
    }
};