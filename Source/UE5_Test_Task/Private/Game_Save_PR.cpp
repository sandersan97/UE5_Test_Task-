// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.


#include "Game_Save_PR.h"
#include "Kismet/GameplayStatics.h"
#include "Custom_Player_Character_PR.h"






void UGame_Save_PR::Save_Quest(FQuest_Data Current_Quest)
{
	Current_Quest_Data = Current_Quest;
}





void UGame_Save_PR::Save_Player_Transform(FTransform Current_Player_Transform)
{
	Player_Transform = Current_Player_Transform;
}





void UGame_Save_PR::Save_Gameplay()
{
	Current_Gameplay_Data.Current_Quest_Data = Current_Quest_Data;
	Current_Gameplay_Data.Player_Transform = Player_Transform;
}