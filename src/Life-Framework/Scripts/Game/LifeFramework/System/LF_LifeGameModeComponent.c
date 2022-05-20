class LF_LifeGameModeComponentClass : SCR_BaseGameModeComponentClass
{
}


class LF_LifeGameModeComponent : SCR_BaseGameModeComponent {
	
	override void OnPlayerSpawned(int playerId, IEntity controlledEntity)
	{
		super.OnPlayerSpawned(playerId, controlledEntity);
		SCR_PopUpNotification popupNotifications = SCR_PopUpNotification.GetInstance();
		if (!popupNotifications)
			return;

		popupNotifications.PopupMsg("Welcome to Everon Life", 15, 0.4, "This is WIP!");
	}
	
	protected override void OnGameModeEnd(SCR_GameModeEndData data)
	{
		super.OnGameModeEnd(data);
		GetGame().GetCallqueue().CallLater(TerminateSession, 3000, false);
	}
	
	protected void TerminateSession()
	{
		
	}

}