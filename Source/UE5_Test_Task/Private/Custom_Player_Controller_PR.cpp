// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.


#include "Custom_Player_Controller_PR.h"





ACustom_Player_Controller_PR::ACustom_Player_Controller_PR()
{

	// Create a Player Inventory and player Equipment Component.

	Quest_System = CreateDefaultSubobject<UQuest_System_Component_PR>(TEXT("Quest_System"));

	Indicator_System = CreateDefaultSubobject<UUMPI_ScreenIndicator_Component>(TEXT("Indicator_System"));


	if (Indicator_System && Quest_System)
	{		
		Quest_System->Set_Indicator_Component(Indicator_System);
	}


}






void ACustom_Player_Controller_PR::Set_Player_Hud(UPlayer_HUD_PR* Player_Hud)
{

	if (Player_Hud)
	{
		Gameplay_Hud_Widget_Reference = Player_Hud;
		Gameplay_Hud_Widget_Reference->Quest_Component_Ref = Quest_System;
	}

	if (Quest_System)
	{
		Quest_System->Set_Player_Hud(Gameplay_Hud_Widget_Reference);
	}
	
}