// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.



#include "Fire_Chalange_PR.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Game_Save_PR.h"
#include "Custom_Player_Controller_PR.h"







// Sets default values
AFire_Chalange_PR::AFire_Chalange_PR()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;



	RootComponent = Actor_Scene;
	Actor_Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Actor_Scene"));
	Spline_Base = CreateDefaultSubobject<USplineComponent>(TEXT("Spline_Base"));
	Spline_Base->SetComponentTickEnabled(false);
	Spline_Base->SetupAttachment(Actor_Scene);




	FString Object_Tag = "Torch_";
	FVector Spline_Point_Location = {};
	for (size_t i = 0; i < 4; i++)
	{

		Spline_Point_Location = (i == 0) ? FVector{0, 0, 838} : (i == 1) ? FVector{450, -20, -231} : (i == 2) ? FVector{654, -43, -1170} : (i == 3) ? FVector{-1370, -10, -888} : FVector{0,0,0};
		
		Spline_Base->AddSplinePoint(Spline_Point_Location, ESplineCoordinateSpace::Local);



		UStaticMeshComponent* Created_Static_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName(Object_Tag + FString::FromInt(i)));
		if (Created_Static_Mesh)
		{
			UNiagaraComponent* Created_Niagara_Component = CreateDefaultSubobject<UNiagaraComponent>(FName(FString("Niagara_Component_") + FString::FromInt(i)));
			if (Created_Niagara_Component)
			{

				Created_Niagara_Component->ComponentTags.Add(FName(Object_Tag + FString::FromInt(i)));
				Created_Niagara_Component->PrimaryComponentTick.bCanEverTick = false;
				Created_Niagara_Component->SetComponentTickEnabled(false);
				Created_Niagara_Component->Deactivate();
				Created_Niagara_Component->SetupAttachment(Created_Static_Mesh);

				Spawned_Effects.Add(Created_Niagara_Component);

			}
			
			Created_Static_Mesh->ComponentTags.Add(FName(Object_Tag + FString::FromInt(i)));
			Created_Static_Mesh->AttachToComponent(Spline_Base, FAttachmentTransformRules::KeepRelativeTransform);
			Created_Static_Mesh->SetComponentTickEnabled(false);
			Created_Static_Mesh->SetRelativeLocation(Spline_Base->GetSplinePointAt(i, ESplineCoordinateSpace::Local).Position);
			Spawned_Meshes.Add(Created_Static_Mesh);

		}


	}
	

}








// Called when the game starts or when spawned
void AFire_Chalange_PR::BeginPlay()
{
	Super::BeginPlay();
	

	//Here we set tags for actor and interactable component.
	this->Tags.Add("Quest_Obj");


}








// Called every frame
void AFire_Chalange_PR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}





void AFire_Chalange_PR::On_Item_Interacted(UPrimitiveComponent* Interacted_Mesh)
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







void AFire_Chalange_PR::Set_Interacted_Component(UPrimitiveComponent* Interacted_Mesh)
{
	Interacted_Component = Interacted_Mesh;
}







void AFire_Chalange_PR::Puzzle_Verify()
{	
	int Contain_Equals_Number = 0;

	for (size_t i = 0; i < Locators_Request_List.Num(); i++)
	{
		if (Current_Locators.Contains(Locators_Request_List[i]))
		{
			Contain_Equals_Number++;
		}

	}

	if ((Contain_Equals_Number >= 4 && Current_Locators.Num() <= Contain_Equals_Number) ? true : false)
	{
		End_Quest();
	}
	else
	{
		Activate_Once();
	}

}







void AFire_Chalange_PR::Activate_Once()
{

	if (!Current_Locators.Contains(Interacted_Component->ComponentTags[0]))
	{

		//Find Niagara effect by it Tag, which need to activate after inflame.
		for (size_t i = 0; i < Spawned_Effects.Num(); i++)
		{
			if (Spawned_Effects[i]->ComponentTags[0] == Interacted_Component->ComponentTags[0])
			{
				Spawned_Effects[i]->Activate();

				break;
			}
		}

		Current_Locators.Add(Interacted_Component->ComponentTags[0].ToString());


		if (Fire_Sound && Sound_Atenuation)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), Fire_Sound, this->GetActorLocation(), 1, 1, 0.0f, Sound_Atenuation);
		}

		int Contain_Equals_Number = 0;

		for (size_t i = 0; i < Locators_Request_List.Num(); i++)
		{
			if (Current_Locators.Contains(Locators_Request_List[i]))
			{
				Contain_Equals_Number++;
			}
		}

		if ((Contain_Equals_Number >= 4 && Current_Locators.Num() <= Contain_Equals_Number) ? true : false)
		{
			End_Quest();
		}

	}

}








FQuest_Data AFire_Chalange_PR::Get_Responsible_Quest()
{
	return (Responsable_Quest);
}



FVector AFire_Chalange_PR::Get_Responsible_Location()
{
	return (Responsable_Location);
}









void AFire_Chalange_PR::End_Quest()
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


		Update_Interact_Widget(false);
	}

}



