// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.


#include "Player_HUD_PR.h"






FText UPlayer_HUD_PR::Get_Quest_Name()
{
	return (Quest_Component_Ref ? FText::FromString(Quest_Component_Ref->Current_Quest_Data.Quest_ID): FText::FromString("None"));
}






FText UPlayer_HUD_PR::Get_Quest_Description()
{
	return (Quest_Component_Ref ? FText::FromString(Quest_Component_Ref->Current_Quest_Data.Quest_Description) : FText::FromString("None"));
}






FText UPlayer_HUD_PR::Get_Quest_Numeric()
{
	int Quest_Index = -1;
	if (Quest_Component_Ref)
	{

		for (size_t i = 0; i < Quest_Component_Ref->Quests_List.Num(); i++)
		{
			if (Quest_Component_Ref->Quests_List[i].Quest_ID == Quest_Component_Ref->Current_Quest_Data.Quest_ID)
			{

				Quest_Index = i;

				//After all this break the loop and continue.
				break;

			}
		}

	}	

	return (Quest_Component_Ref && Quest_Index > -1 ? FText::FromString(FString::FromInt(Quest_Component_Ref->Current_Quest_Data.Quest_Numeric_Conditions) + "/" + FString::FromInt(Quest_Component_Ref->Quests_List[Quest_Index].Quest_Numeric_Conditions)) : FText::FromString("None"));
}






ESlateVisibility UPlayer_HUD_PR::Get_Quest_Panel_Visibility()
{
	return (Quest_Component_Ref && !Quest_Component_Ref->Current_Quest_Data.Quest_ID.IsEmpty() ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
}







void UPlayer_HUD_PR::Start_Croshair_Move_Implementation()
{
}


void UPlayer_HUD_PR::Show_Quest_Panel_Implementation()
{
}