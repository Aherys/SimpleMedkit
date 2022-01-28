modded class ActionEatTetracyclineAntibiotics: ActionConsume
{

	override void ApplyModifiers( ActionData action_data )
	{
		super.ApplyModifiers( action_data );
		
		action_data.m_Player.GetStatDrug().Set(action_data.m_Player.GetStatDrug().Get() + 25);
		action_data.m_Player.GetModifiersManager().ActivateModifier(eModifiersExtended.MDF_DRUG);
		//action_data.m_Player.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CHEMICALPOISON);
	}
};