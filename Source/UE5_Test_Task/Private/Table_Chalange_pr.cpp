// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.


#include "Table_Chalange_pr.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Game_Save_PR.h"
#include "Custom_Player_Controller_PR.h"






// Sets default values
ATable_Chalange_pr::ATable_Chalange_pr()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	RootComponent = Actor_Scene;
	Actor_Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Actor_Scene"));
	Spline_Base = CreateDefaultSubobject<USplineComponent>(TEXT("Spline_Base"));
	Spline_Base->SetupAttachment(Actor_Scene);



	Interact_Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Interact_Widget"));
	Interact_Widget->bAutoActivate = false;
	Interact_Widget->SetComponentTickEnabled(false);
	Interact_Widget->bHiddenInGame = true;
	Interact_Widget->SetupAttachment(Actor_Scene);

		


	//Create Meshes
	FString Object_Tag = "Table_";
	for (size_t i = 0; i < 16; i++)
	{
		UStaticMeshComponent* Created_Static_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName(Object_Tag + FString::FromInt(i)));
		if (Created_Static_Mesh)
		{

			Created_Static_Mesh->AttachToComponent(Spline_Base, FAttachmentTransformRules::KeepRelativeTransform);
			Created_Static_Mesh->SetComponentTickEnabled(false);
			Spawned_Meshes.Add(Created_Static_Mesh);

		}

	}




}





// Called when the game starts or when spawned
void ATable_Chalange_pr::BeginPlay()
{
	Super::BeginPlay();





	//Now after creation of spline component, we start spawn inside it the StaticMesh componens and save its References.
	float X_Location = 0;
	float Z_Location = 0;
	FString Object_Tag = "Table_";
	for (size_t i = 0; i < 16; i++)
	{
		if (First_Second_Types)
		{
			Z_Location = (i == 0 || i == 4 || i == 8 || i == 12) ? 0 : (i == 1 || i == 5 || i == 9 || i == 13) ? -300 : (i == 2 || i == 6 || i == 10 || i == 14) ? -600 : (i == 3 || i == 7 || i == 11 || i == 15) ? -900 : 0;
			X_Location = (i == 0 || i == 1 || i == 2 || i == 3) ? 0 : (i == 4 || i == 5 || i == 6 || i == 7) ? 300 : (i == 8 || i == 9 || i == 10 || i == 11) ? 600 : (i == 12 || i == 13 || i == 14 || i == 15) ? 900 : 0;
		}
		else
		{
			Z_Location = (i == 0 || i == 4 || i == 8 || i == 12) ? 0 : (i == 1 || i == 5 || i == 9 || i == 13) ? -102 : (i == 2 || i == 6 || i == 10 || i == 14) ? -204 : (i == 3 || i == 7 || i == 11 || i == 15) ? -306 : 0;
			X_Location = (i == 0 || i == 1 || i == 2 || i == 3) ? 0 : (i == 4 || i == 5 || i == 6 || i == 7) ? 102 : (i == 8 || i == 9 || i == 10 || i == 11) ? 204 : (i == 12 || i == 13 || i == 14 || i == 15) ? 306 : 0;
		}


		Spline_Base->AddSplinePoint(FVector{ X_Location,0, Z_Location }, ESplineCoordinateSpace::Local);



		if (Spawned_Meshes.IsValidIndex(i) && Spawned_Meshes[i])
		{
			Spawned_Meshes[i]->CreateDynamicMaterialInstance(0, Spawned_Meshes[i]->GetMaterial(0));
			Spawned_Meshes[i]->ComponentTags.Add(FName(Object_Tag + FString::FromInt(i)));
			Spawned_Meshes[i]->SetRelativeLocation(FVector{ X_Location,0, Z_Location });
		}


	}





	//Here we set tags for actor and interactable component.
	this->Tags.Add("Quest_Obj");
	

	

	if (this->Tags.Contains("Quest_Obj"))
	{		
		ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

		if (Temp_Player_Controler && Temp_Player_Controler->Quest_System)
		{
			if (First_Second_Types)
			{				
				Activate_Periodicity();

			}
		}

	}
	
	


}





// Called every frame
void ATable_Chalange_pr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}









void ATable_Chalange_pr::On_Item_Interacted(UPrimitiveComponent* Interacted_Mesh)
{
	if (this->Tags.Contains("Quest_Obj"))
	{
		ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

		if (Temp_Player_Controler && Temp_Player_Controler->Quest_System)
		{
			if (Temp_Player_Controler->Quest_System->Current_Quest_Data.Quest_ID == Responsable_Quest.Quest_ID)
			{
				
				Interacted_Component = Interacted_Mesh;				

				Puzzle_Verify();

			}
		}

	}
}






void ATable_Chalange_pr::Set_Interacted_Component(UPrimitiveComponent* Interacted_Mesh)
{
	Interacted_Component = Interacted_Mesh;
}






void ATable_Chalange_pr::Reset_Locators_Periodicity_Status(FString Locator_Tag)
{
	
	for (size_t i = 0; i < Spawned_Meshes.Num(); i++)
	{
		if (Spawned_Meshes[i]->ComponentTags[0] != Locator_Tag)
		{

			UMaterialInstanceDynamic* TempDynamicMaterial = Cast<UMaterialInstanceDynamic>(Spawned_Meshes[i]->GetMaterial(0));
			if (TempDynamicMaterial)
			{
				TempDynamicMaterial->SetScalarParameterValue(FName("Active_Deactive"), 0.0f);

			}

		}

	}

}






void ATable_Chalange_pr::Activate_Periodicity()
{
	ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if (Temp_Player_Controler && Temp_Player_Controler->Quest_System)
	{
		if (Temp_Player_Controler->Quest_System->Current_Quest_Data.Quest_ID == Responsable_Quest.Quest_ID && Current_Locators.Num() < 1)
		{


			GetWorld()->GetTimerManager().SetTimer(Long_Periodicity, [&]
				{

					for (size_t i = 0; i < Spawned_Meshes.Num(); i++)
					{
						if (Locators_Request_List.Contains(Spawned_Meshes[i]->ComponentTags[0]))
						{

							UMaterialInstanceDynamic* TempDynamicMaterial = Cast<UMaterialInstanceDynamic>(Spawned_Meshes[i]->GetMaterial(0));
							TempDynamicMaterial = Cast<UMaterialInstanceDynamic>(Spawned_Meshes[i]->GetMaterial(0));
							if (TempDynamicMaterial)
							{
								TempDynamicMaterial->SetScalarParameterValue(FName("Active_Deactive"), 1.0f);

							}

						}

					}


					GetWorld()->GetTimerManager().SetTimer(Short_Periodicity, [&]
						{
							for (size_t i = 0; i < Spawned_Meshes.Num(); i++)
							{
								if (Locators_Request_List.Contains(Spawned_Meshes[i]->ComponentTags[0]))
								{
									UMaterialInstanceDynamic* TempDynamicMaterial = Cast<UMaterialInstanceDynamic>(Spawned_Meshes[i]->GetMaterial(0));
									if (TempDynamicMaterial)
									{
										TempDynamicMaterial->SetScalarParameterValue(FName("Active_Deactive"), 0.0f);

									}

								}

							}
							

						}, 2.0f, false, 2.0f);



				}, 4.0f, false, 0.2f);


		}

	}

}






void ATable_Chalange_pr::Puzzle_Verify()
{
	int Contain_Equals_Number = 0;
	
	for (size_t i = 0; i < Locators_Request_List.Num(); i++)
	{
		if (Current_Locators.Contains(Locators_Request_List[i]))
		{
			Contain_Equals_Number++;
		}

	}

	if ((Contain_Equals_Number >= 8 && Current_Locators.Num() <= Contain_Equals_Number)? true : false)
	{
		End_Quest();
	}
	else
	{
		Activate_Once();
	}

}







void ATable_Chalange_pr::Activate_Once()
{

	
		if (Current_Locators.Contains(Interacted_Component->ComponentTags[0]))
		{
			
			UMaterialInstanceDynamic* TempDynamicMaterial = Cast<UMaterialInstanceDynamic>(Interacted_Component->GetMaterial(0));
			if (TempDynamicMaterial)
			{

				TempDynamicMaterial->SetScalarParameterValue(FName("Active_Deactive"), 0.0f);
				Current_Locators.Remove(Interacted_Component->ComponentTags[0].ToString());

				if (First_Second_Types)			//Here we reset all colors of Periodicy on activating manually one in case if it is first one, all this only in case if type of this actor is selected like Second type.
				{
					if (Current_Locators.Num() < 1)
					{
						Activate_Periodicity();
					}

				}

				if (DeActivation_Sound && Sound_Atenuation)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), DeActivation_Sound, this->GetActorLocation(), 1, 1, 0.0f, Sound_Atenuation);
				}

				int Contain_Equals_Number = 0;

				for (size_t i = 0; i < Locators_Request_List.Num(); i++)
				{
					if (Current_Locators.Contains(Locators_Request_List[i]))
					{
						Contain_Equals_Number++;
					}
				}

				if ((Contain_Equals_Number >= 8 && Current_Locators.Num() <= Contain_Equals_Number) ? true : false)
				{
					End_Quest();
				}

			}
			
		}
		else
		{
			
			UMaterialInstanceDynamic* TempDynamicMaterial = Cast<UMaterialInstanceDynamic>(Interacted_Component->GetMaterial(0));
			if (TempDynamicMaterial)
			{
				
				TempDynamicMaterial->SetScalarParameterValue(FName("Active_Deactive"), 0.6f);
				Current_Locators.Add(Interacted_Component->ComponentTags[0].ToString());


				if (First_Second_Types)			//Here we restart periodicity to work if deactivated table are the last one from selected list, all this only in case if type of this actor is selected like Second type.
				{
					if (Current_Locators.Num() < 1)
					{
						Long_Periodicity.Invalidate();
						Short_Periodicity.Invalidate();


						Reset_Locators_Periodicity_Status(Interacted_Component->ComponentTags[0].ToString());
					}

				}


				if (Activation_Sound && Sound_Atenuation)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), Activation_Sound, this->GetActorLocation(), 1, 1, 0.0f, Sound_Atenuation);
				}

				int Contain_Equals_Number = 0;

				for (size_t i = 0; i < Locators_Request_List.Num(); i++)
				{
					if (Current_Locators.Contains(Locators_Request_List[i]))
					{
						Contain_Equals_Number++;
					}
				}

				if ((Contain_Equals_Number >= 8 && Current_Locators.Num() <= Contain_Equals_Number) ? true : false)
				{
					End_Quest();
				}

			}

		}
	

}








FQuest_Data ATable_Chalange_pr::Get_Responsible_Quest()
{
	return (Responsable_Quest);
}



FVector ATable_Chalange_pr::Get_Responsible_Location()
{
	return (Responsable_Location);
}



void ATable_Chalange_pr::Update_Interact_Widget(bool Open_Close)
{

	if (Open_Close)
	{
		Interact_Widget->Activate(true);
		Interact_Widget->bHiddenInGame = false;
		Interact_Widget->SetWorldLocation(Interacted_Component ? FVector{Interacted_Component->GetComponentLocation().X, Interacted_Component->GetComponentLocation().Y, Interacted_Component->GetComponentLocation().Z + 100} : this->GetActorLocation());
	}
	else
	{
		Interact_Widget->bHiddenInGame = true;
	}

}






void ATable_Chalange_pr::End_Quest()
{
	ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if (Temp_Player_Controler)
	{
		Temp_Player_Controler->Quest_System->Location_Complete(Responsable_Quest, Responsable_Location);

		if (Light_To_Activate)
		{
			Light_To_Activate->GetNiagaraComponent()->Activate();

			if (UGameplayStatics::DoesSaveGameExist("Main_Game_Save", 0))
			{
				UGame_Save_PR* Loaded_Save = Cast<UGame_Save_PR>(UGameplayStatics::LoadGameFromSlot("Main_Game_Save", 0));
				if (Loaded_Save)
				{
					Loaded_Save->Activated_Obelisc_List.Add(Light_To_Activate->Tags[0].ToString());
					UGameplayStatics::SaveGameToSlot(Loaded_Save, "Main_Game_Save", 0);
				}
				else
				{
					UGame_Save_PR* Created_Save = Cast<UGame_Save_PR>(UGameplayStatics::CreateSaveGameObject(UGame_Save_PR::StaticClass()));
					if (Created_Save)
					{
						Created_Save->Activated_Obelisc_List.Add(Light_To_Activate->Tags[0].ToString());
						UGameplayStatics::SaveGameToSlot(Created_Save, "Main_Game_Save", 0);
					}
				}
			}
			else
			{
				UGame_Save_PR* Created_Save = Cast<UGame_Save_PR>(UGameplayStatics::CreateSaveGameObject(UGame_Save_PR::StaticClass()));
				if (Created_Save)
				{
					Created_Save->Activated_Obelisc_List.Add(Light_To_Activate->Tags[0].ToString());
					UGameplayStatics::SaveGameToSlot(Created_Save, "Main_Game_Save", 0);
				}

			}

		}


		if (First_Second_Types)
		{
			Long_Periodicity.Invalidate();
			Short_Periodicity.Invalidate();
		}


		Update_Interact_Widget(false);
	}

}



