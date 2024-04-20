// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.


#include "Town_Chalange_PR.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Game_Save_PR.h"
#include "Custom_Player_Controller_PR.h"






// Sets default values
ATown_Chalange_PR::ATown_Chalange_PR()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	RootComponent = Actor_Scene;
	Actor_Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Actor_Scene"));
	Object_Mesh_Bottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object_Mesh_Bottom"));
	Object_Mesh_Center = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object_Mesh_Center"));
	Object_Mesh_Top = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object_Mesh_Top"));
	Object_Mesh_Upper_End = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object_Mesh_Upper_End"));

	Object_Mesh_Bottom->SetupAttachment(Actor_Scene);
	Object_Mesh_Bottom->SetRelativeLocation(FVector{ 0,0,0 });
	Object_Mesh_Bottom->SetComponentTickEnabled(false);

	Object_Mesh_Center->SetupAttachment(Actor_Scene);
	Object_Mesh_Center->SetRelativeLocation(FVector{ 0,0,211 });
	Object_Mesh_Center->SetComponentTickEnabled(false);

	Object_Mesh_Top->SetupAttachment(Actor_Scene);
	Object_Mesh_Top->SetRelativeLocation(FVector{ 0,0,423 });
	Object_Mesh_Top->SetComponentTickEnabled(false);

	Object_Mesh_Upper_End->SetupAttachment(Actor_Scene);
	Object_Mesh_Upper_End->SetRelativeLocation(FVector{ 0,0,636 });
	Object_Mesh_Upper_End->SetComponentTickEnabled(false);



	Interact_Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Interact_Widget"));
	Interact_Widget->bAutoActivate = false;
	Interact_Widget->SetComponentTickEnabled(false);
	Interact_Widget->bHiddenInGame = true;
	Interact_Widget->SetupAttachment(Actor_Scene);

}





// Called when the game starts or when spawned
void ATown_Chalange_PR::BeginPlay()
{
	Super::BeginPlay();
	

	//Here we populate the interactabe components with it data.
	Current_Locators = { {Object_Mesh_Bottom, 1}, {Object_Mesh_Center, 6}, {Object_Mesh_Top, 2} };
	Locators_Request_List = { {Object_Mesh_Bottom, Locators_Numbers.IsValidIndex(0)? Locators_Numbers[0] : 1}, {Object_Mesh_Center, Locators_Numbers.IsValidIndex(1) ? Locators_Numbers[1] : 1}, {Object_Mesh_Top, Locators_Numbers.IsValidIndex(2) ? Locators_Numbers[2] : 1}};

	//Here we set tags for actor and interactable component.
	this->Tags.Add("Quest_Obj");
	Object_Mesh_Bottom->ComponentTags.Add("Object_Mesh_Bottom");
	Object_Mesh_Center->ComponentTags.Add("Object_Mesh_Center");
	Object_Mesh_Top->ComponentTags.Add("Object_Mesh_Top");

	//Here we set timeline for floating movement of interacted components.
	if (FloatCurve_Move != NULL)
	{

		FOnTimelineFloat TimelineProgess;
		TimelineProgess.BindUFunction(this, FName("Move_TimelineInProgress"));

		FOnTimelineEventStatic TimelineFinished;
		TimelineFinished.BindUFunction(this, "Move_TimelineFinished");

		Mesh_Moving_TimeLine.AddInterpFloat(FloatCurve_Move, TimelineProgess);
		Mesh_Moving_TimeLine.SetTimelineFinishedFunc(TimelineFinished);
		Mesh_Moving_TimeLine.SetLooping(false);

	}



}





// Called every frame
void ATown_Chalange_PR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	Mesh_Moving_TimeLine.TickTimeline(DeltaTime);         // Add to timeline Deltatime from tick deltatime.


}









void ATown_Chalange_PR::On_Item_Interacted(UPrimitiveComponent* Interacted_Mesh)
{
	if (this->Tags.Contains("Quest_Obj"))
	{
		ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

		if (Temp_Player_Controler && Temp_Player_Controler->Quest_System)
		{
			if (Temp_Player_Controler->Quest_System->Current_Quest_Data.Quest_ID == Responsable_Quest.Quest_ID)
			{
				TArray < UStaticMeshComponent* > Finded_Meshes = {};
				Current_Locators.GetKeys(Finded_Meshes);

				for (size_t i = 0; i < Finded_Meshes.Num(); i++)
				{
					if (Finded_Meshes[i]->ComponentTags.Contains(Interacted_Mesh->ComponentTags[0]))
					{
						Finded_Interacted_Mesh = Finded_Meshes[i];

						break;
					}
				}

				Puzzle_Verify();

			}
		}

	}
}






void ATown_Chalange_PR::Set_Interacted_Component(UPrimitiveComponent* Interacted_Mesh)
{
	Interacted_Component = Interacted_Mesh;
}






void ATown_Chalange_PR::Puzzle_Verify()
{
	
	if (Current_Locators[Object_Mesh_Bottom] == Locators_Request_List[Object_Mesh_Bottom]
		&& Current_Locators[Object_Mesh_Center] == Locators_Request_List[Object_Mesh_Center]
		&& Current_Locators[Object_Mesh_Top] == Locators_Request_List[Object_Mesh_Top])
	{
		End_Quest();
	}
	else
	{
		Rotate_Once();
	}
	
}







void ATown_Chalange_PR::Rotate_Once()
{
	if (Finded_Interacted_Mesh && Current_Locators.Contains(Finded_Interacted_Mesh) && !Is_In_Movement)
	{
				
		Mesh_Moving_Rotation = Cast<UStaticMeshComponent>(Finded_Interacted_Mesh)->GetRelativeRotation();
		Is_In_Movement = true;

		if (Moving_Sound)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), Moving_Sound, this->GetActorLocation(), 1);
		}
		
		Mesh_Moving_TimeLine.PlayFromStart();

	}

}







void ATown_Chalange_PR::Move_TimelineInProgress(float value)
{
	if (Finded_Interacted_Mesh)
	{
		Finded_Interacted_Mesh->SetRelativeRotation(UKismetMathLibrary::RInterpTo(Finded_Interacted_Mesh->GetRelativeRotation(), FRotator{ Mesh_Moving_Rotation.Pitch, Mesh_Moving_Rotation.Yaw + 60, Mesh_Moving_Rotation.Roll}, GetWorld()->GetDeltaSeconds(), value), false);
	}
}








void ATown_Chalange_PR::Move_TimelineFinished()
{
	if (Current_Locators[Finded_Interacted_Mesh] < 6)
	{
		Current_Locators[Finded_Interacted_Mesh]++;
	}
	else
	{
		Current_Locators[Finded_Interacted_Mesh] = 1;
	}

	Is_In_Movement = false;
	
	//Verify if last movement has completed the puzzle and complete quest or activate nex part of it if yes.
	if (Current_Locators[Object_Mesh_Bottom] == Locators_Request_List[Object_Mesh_Bottom]
		&& Current_Locators[Object_Mesh_Center] == Locators_Request_List[Object_Mesh_Center]
		&& Current_Locators[Object_Mesh_Top] == Locators_Request_List[Object_Mesh_Top])
	{
		End_Quest();
	}

}








FQuest_Data ATown_Chalange_PR::Get_Responsible_Quest()
{
	return (Responsable_Quest);
}



FVector ATown_Chalange_PR::Get_Responsible_Location()
{
	return (Responsable_Location);
}



void ATown_Chalange_PR::Update_Interact_Widget(bool Open_Close)
{

	if (Open_Close)
	{
		Interact_Widget->Activate(true);
		Interact_Widget->bHiddenInGame = false;
		Interact_Widget->SetWorldLocation(Interacted_Component ? FVector{Interacted_Component->GetComponentLocation().X, Interacted_Component->GetComponentLocation().Y, Interacted_Component->GetComponentLocation().Z + 100}: this->GetActorLocation());
	}
	else
	{
		Interact_Widget->bHiddenInGame = true;
	}

}






void ATown_Chalange_PR::End_Quest()
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

