class ActionStealthKillTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 0.1 );
	}
};


class ActionStealthKillTarget: ActionContinuousBase
{
	void ActionStealthKillTarget()
	{
		m_CallbackClass = ActionStealthKillTargetCB;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_HACKBUSH;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Perform Stealth Knockout";
	}

	override void CreateConditionComponents()
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		PlayerBase target_player = PlayerBase.Cast(target.GetObject());

		if (!target_player || !target_player.IsAlive())
			return false;
		
		if (item && item.IsInherited(ToolBase))
		{
			return true;
		}
		
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		PlayerBase target_player = PlayerBase.Cast(action_data.m_Target.GetObject());
		PlayerBase source_player = action_data.m_Player;

		if(target_player && source_player && target_player.IsAlive())
		{	
			target_player.SetHealth("GlobalHealth", "Shock", 0);
			target_player.AddHealth("GlobalHealth", "Shock", -1000.0);
		}	
	}
};