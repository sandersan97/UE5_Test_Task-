// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.


#include "Quest_System_Component_PR.h"
#include "Kismet/GameplayStatics.h"
#include "Custom_Player_Character_PR.h"
#include "UMPI_ScreenIndicator_Component.h"
#include "Player_HUD_PR.h"
#include "Game_Save_PR.h"
#include "Async/Async.h"



// Sets default values for this component's properties
UQuest_System_Component_PR::UQuest_System_Component_PR()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...

	On_Quest_Started_DL.BindUFunction(this, "On_Quest_Started");
	On_Quest_Completed_DL.BindUFunction(this, "On_Quest_Completed");


}





// Called when the game starts
void UQuest_System_Component_PR::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	

}





// Called every frame
void UQuest_System_Component_PR::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}







void UQuest_System_Component_PR::Init_Current_Quest(FString Quest_ID, int Quest_Index)
{

	if (Gameplay_Save_Ref)
	{
		UGame_Save_PR* Temp_Gameplay_Save_Ref = Cast<UGame_Save_PR>(Gameplay_Save_Ref);

		if (Temp_Gameplay_Save_Ref)
		{
			Current_Quest_Data = Temp_Gameplay_Save_Ref->Get_Gameplay_Save().Current_Quest_Data;
		}
		else
		{

			if (Quest_Index > -1)
			{
				Current_Quest_Data = Quests_List[Quest_Index];
			}
			else
			{
				for (size_t i = 0; i < Quests_List.Num(); i++)
				{
					if (Quests_List[i].Quest_ID == Quest_ID)
					{
						Current_Quest_Data = Quests_List[i];

						break;
					}

				}

			}

		}

	}
	else
	{

		if (Quest_Index > -1)
		{
			Current_Quest_Data = Quests_List[Quest_Index];
		}
		else
		{
			for (size_t i = 0; i < Quests_List.Num(); i++)
			{
				if (Quests_List[i].Quest_ID == Quest_ID)
				{
					Current_Quest_Data = Quests_List[i];

					break;
				}

			}

		}

	}
	
	On_Quest_Started_DL.ExecuteIfBound(Current_Quest_Data);

}






void UQuest_System_Component_PR::Set_Player_Hud(UUserWidget* Player_Hud)
{
	if (Player_Hud)
	{
		Player_Hud_Ref = Player_Hud;
	}

	if (Load_Game_Save())
	{
		UGame_Save_PR* Temp_Gameplay_Save_Ref = Cast<UGame_Save_PR>(Gameplay_Save_Ref);

		if (Temp_Gameplay_Save_Ref)
		{
			Init_Current_Quest("Find Traveler Camp", 0);
		}
		
	}

}







bool UQuest_System_Component_PR::Load_Game_Save()
{

	if (UGameplayStatics::DoesSaveGameExist("Main_Game_Save", 0))
	{
		USaveGame* Game_Save_Ref = UGameplayStatics::LoadGameFromSlot("Main_Game_Save", 0);
		Gameplay_Save_Ref = Game_Save_Ref ? Game_Save_Ref : nullptr;

		return(Game_Save_Ref ? true : false);

	}
	else
	{
		USaveGame* Game_Save_Ref = UGameplayStatics::CreateSaveGameObject(UGame_Save_PR::StaticClass());
		Gameplay_Save_Ref = Game_Save_Ref ? Game_Save_Ref : nullptr;

		return(Game_Save_Ref ? true : false);

	}

}







bool UQuest_System_Component_PR::Save_Gameplay_Save()
{
	if (Load_Game_Save())
	{
		UGame_Save_PR* Temp_Gameplay_Save_Ref = Cast<UGame_Save_PR>(Gameplay_Save_Ref);

		if (Temp_Gameplay_Save_Ref)
		{
			Temp_Gameplay_Save_Ref->Save_Quest(Current_Quest_Data);

			Temp_Gameplay_Save_Ref->Save_Player_Transform(Cast<ACustom_Player_Character_PR>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))->GetTransform());

			Temp_Gameplay_Save_Ref->Save_Gameplay();

			UGameplayStatics::SaveGameToSlot(Gameplay_Save_Ref, "Main_Game_Save", 0);

			return true;
		}

	}

	return false;
}








void UQuest_System_Component_PR::On_Quest_Started(FQuest_Data Result)
{

	// Now can start any function for show changing of active missions.
	if (Player_Hud_Ref)
	{
		UPlayer_HUD_PR* Temp_Player_Hud = Cast<UPlayer_HUD_PR>(Player_Hud_Ref);

		if (Temp_Player_Hud)
		{
			Temp_Player_Hud->Show_Quest_Panel();
		}

	}

	// Here i will activate next location of this new mission for it indicator.
	if (Indicator_Component_Ref)
	{

		UUMPI_ScreenIndicator_Component* Temp_Indicator_Component_Ref = Cast<UUMPI_ScreenIndicator_Component>(Indicator_Component_Ref);

		if (Temp_Indicator_Component_Ref)
		{
			
			UUMPI_ScreenIndicator_WidgetBase* Created_Indicator = nullptr;

			FUMPI_IndicatorSettings_Struct* Temp_Indicator_Settings = Temp_Indicator_Component_Ref->DataTableToUse->FindRow<FUMPI_IndicatorSettings_Struct>("Preset_7", "");
			Temp_Indicator_Settings->Arrive_Function = true;

			if (Result.Quest_ID == FString("Last Trouble") || Result.Quest_ID == FString("Find Scrap") || Result.Quest_ID == FString("Well Arthefact") || Result.Quest_ID == FString("Get Reward") || Result.Quest_ID == FString("Leave"))
			{
				Temp_Indicator_Settings->Arrive_Function = false;

			}

			TArray<FVector>Finded_Quest_Locations = {};
			Result.Quest_Locations.GetKeys(Finded_Quest_Locations);

			for (size_t i = 0; i < Finded_Quest_Locations.Num(); i++)
			{

				if (Result.Quest_Locations.Contains(Finded_Quest_Locations[i]) && !Result.Quest_Locations[Finded_Quest_Locations[i]])
				{

					Temp_Indicator_Component_Ref->Create_Indicator(*Temp_Indicator_Settings, nullptr, Finded_Quest_Locations[i], Created_Indicator);

				}
				
			}
									
			
		}

	}

}









void UQuest_System_Component_PR::On_Quest_Location_Arrived(FVector Indicator)
{

	for (size_t i = 0; i < Quests_List.Num(); i++)
	{
		

		if (Quests_List[i].Quest_Locations.Contains(Indicator) && !Quests_List[i].Quest_Locations[Indicator])
		{
			
			// Here i finish this mision and if have next one activate it.
			if (Quests_List[i].Quest_Numeric_Conditions > 1)
			{
				//Here we show animation of quest panel because it numberic condition changed.

				if (Player_Hud_Ref)
				{
					UPlayer_HUD_PR* Temp_Player_Hud = Cast<UPlayer_HUD_PR>(Player_Hud_Ref);

					if (Temp_Player_Hud)
					{
						Temp_Player_Hud->Show_Quest_Panel();
					}

				}

				Current_Quest_Data.Quest_Numeric_Conditions ++;
				Current_Quest_Data.Quest_Locations[Indicator] = true;


				if (Completed_Sound)
				{
					UGameplayStatics::PlaySound2D(GetWorld(), Completed_Sound, 1);
				}
				

				//After all this break the loop and continue.
				break;

			}
			else
			{
				//Here we complete numberic condition
				if (i++ < Quests_List.Num())
				{
					Current_Quest_Data = Quests_List[i++];
					Current_Quest_Data.Quest_Numeric_Conditions = 0;

					On_Quest_Started(Current_Quest_Data);


					if (Completed_Sound)
					{
						UGameplayStatics::PlaySound2D(GetWorld(), Completed_Sound, 1);
					}
					

					//After all this break the loop and continue.
					break;

				}

			}			
		
		}

	}

	Save_Gameplay_Save();
		

}




void UQuest_System_Component_PR::Location_Complete(FQuest_Data Quest_Responsable, FVector Indicator_Location)
{
		
	for (size_t i = 0; i < Quests_List.Num(); i++)
	{
		if (Quests_List[i].Quest_ID == Quest_Responsable.Quest_ID)
		{
			// Activate logic for mission complete for example start showing the process of missions completion for player.
			
			if (Quests_List[i].Quest_Numeric_Conditions > 1)
			{
				// Here i finish this mision and if have next one activate it.
				if (i++ < Quests_List.Num())
				{
					if (Current_Quest_Data.Quest_Numeric_Conditions >= (Quest_Responsable.Quest_Numeric_Conditions - 1))
					{
						Current_Quest_Data = Quests_List[i++];

						Current_Quest_Data.Quest_Numeric_Conditions = 0;

						On_Quest_Started(Current_Quest_Data);

						//Remove Indicaator of now completed mission.
						if (Indicator_Component_Ref)
						{

							UUMPI_ScreenIndicator_Component* Temp_Indicator_Component_Ref = Cast<UUMPI_ScreenIndicator_Component>(Indicator_Component_Ref);

							if (Temp_Indicator_Component_Ref)
							{
								Temp_Indicator_Component_Ref->Remove_Indicator(nullptr, true, nullptr, Indicator_Location);

								if (Completed_Sound)
								{
									UGameplayStatics::PlaySound2D(GetWorld(), Completed_Sound, 1);
								}

							}

						}

						//After all this break the loop and continue.
						break;

					}
					else
					{
						Current_Quest_Data.Quest_Numeric_Conditions++;
						Current_Quest_Data.Quest_Locations[Indicator_Location] = true;

						On_Quest_Started(Current_Quest_Data);

						//Remove Indicaator of now completed mission.
						if (Indicator_Component_Ref)
						{

							UUMPI_ScreenIndicator_Component* Temp_Indicator_Component_Ref = Cast<UUMPI_ScreenIndicator_Component>(Indicator_Component_Ref);

							if (Temp_Indicator_Component_Ref)
							{
								Temp_Indicator_Component_Ref->Remove_Indicator(nullptr, true, nullptr, Indicator_Location);

								if (Completed_Sound)
								{
									UGameplayStatics::PlaySound2D(GetWorld(), Completed_Sound, 1);
								}

							}

						}

						//After all this break the loop and continue.
						break;

					}
					
				}
								

			}
			else
			{

				// Here i finish this mision and if have next one activate it.
				if (i++ < Quests_List.Num())
				{
					Current_Quest_Data = Quests_List[i++];

					Current_Quest_Data.Quest_Numeric_Conditions = 0;

					On_Quest_Started(Current_Quest_Data);

					//Remove Indicaator of now completed mission.
					if (Indicator_Component_Ref)
					{

						UUMPI_ScreenIndicator_Component* Temp_Indicator_Component_Ref = Cast<UUMPI_ScreenIndicator_Component>(Indicator_Component_Ref);

						if (Temp_Indicator_Component_Ref)
						{
							Temp_Indicator_Component_Ref->Remove_Indicator(nullptr, true, nullptr, Indicator_Location);

							if (Completed_Sound)
							{
								UGameplayStatics::PlaySound2D(GetWorld(), Completed_Sound, 1);
							}

						}

					}

					//After all this break the loop and continue.
					break;

				}

			}			

		}
	}

	Save_Gameplay_Save();

}




void UQuest_System_Component_PR::On_Quest_Completed(FQuest_Complete_Result Result)
{

	AsyncTask(ENamedThreads::AnyThread, [&]() 
		{
			if (Result.IsSucces)
			{

				for (size_t i = 0; i < Quests_List.Num(); i++)
				{
					if (Quests_List[i].Quest_ID == Result.Completed_Quest_Data.Quest_ID)
					{
						// Activate logic for mission complete for example start showing the process of missions completion for player.

						if (Quests_List[i].Quest_Numeric_Conditions <= 1)
						{
							// Here i finish this mision and if have next one activate it.
							if (i++ < Quests_List.Num())
							{
								Current_Quest_Data = Quests_List[i++];

								On_Quest_Started(Current_Quest_Data);

								Save_Gameplay_Save();


								if (Completed_Sound)
								{
									UGameplayStatics::PlaySound2D(GetWorld(), Completed_Sound, 1);
								}

							}

							//After all this break the loop and continue.
							break;

						}
						
						
					}
				}

			}
			else
			{
				// Do code for failde mission if have one. (I don't plan to limit the player may be in future :)
			}
			

		});


}







void UQuest_System_Component_PR::Set_Indicator_Component(UActorComponent* Indicator_Component)
{
	if (Indicator_Component)
	{

		Indicator_Component_Ref = Indicator_Component;

		if (Indicator_Component_Ref)
		{
			UUMPI_ScreenIndicator_Component* Temp_Indicator_Component_Ref = Cast<UUMPI_ScreenIndicator_Component>(Indicator_Component_Ref);

			if (Temp_Indicator_Component_Ref)
			{

				Temp_Indicator_Component_Ref->OnTargetArrivedNative.AddUFunction(this, "On_Quest_Location_Arrived");

			}

		}

	}
}

