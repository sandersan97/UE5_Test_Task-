// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.


#include "Collectable_Actor_PR.h"
#include "Kismet/GameplayStatics.h"





// Sets default values
ACollectable_Actor_PR::ACollectable_Actor_PR()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->SetActorTickInterval(0.25);

	this->SetActorHiddenInGame(true);

	RootComponent = Actor_Scene;
	Actor_Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Actor_Scene"));
	Object_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static_Mesh"));
	Object_Mesh->SetupAttachment(Actor_Scene);
	Object_Mesh->SetComponentTickEnabled(false);

	Interact_Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Interact_Widget"));
	Interact_Widget->bAutoActivate = false;
	Interact_Widget->SetComponentTickEnabled(false);
	Interact_Widget->bHiddenInGame = true;
	Interact_Widget->SetupAttachment(Actor_Scene);


		

}




// Called when the game starts or when spawned
void ACollectable_Actor_PR::BeginPlay()
{
	Super::BeginPlay();

	this->Tags.Add("Quest_Obj");


	Player_Controller_Ref = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));


	
}




// Called every frame
void ACollectable_Actor_PR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (!Do_Once)
	{

		if (Player_Controller_Ref)
		{
			if (Responsable_Quest.Quest_ID == Player_Controller_Ref->Quest_System->Get_Current_Quest_Data().Quest_ID)
			{
				Do_Once = true;

				this->SetActorHiddenInGame(false);

				this->SetActorTickEnabled(false);

			}

		}
		else
		{
			ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

			if (Temp_Player_Controler)
			{
				if (Responsable_Quest.Quest_ID == Player_Controller_Ref->Quest_System->Get_Current_Quest_Data().Quest_ID)
				{
					Do_Once = true;

					this->SetActorHiddenInGame(false);

					this->SetActorTickEnabled(false);

				}

			}

		}

	}



}






void ACollectable_Actor_PR::On_Item_Interacted(UPrimitiveComponent* Interacted_Mesh)
{
	if (this->Tags.Contains("Quest_Obj"))
	{
		ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

		if (Temp_Player_Controler && Temp_Player_Controler->Quest_System)
		{
			if (Temp_Player_Controler->Quest_System->Current_Quest_Data.Quest_ID == Responsable_Quest.Quest_ID)
			{
				End_Quest();
			}
		}

	}

}




void ACollectable_Actor_PR::Set_Interacted_Component(UPrimitiveComponent* Interacted_Mesh)
{
}





FQuest_Data ACollectable_Actor_PR::Get_Responsible_Quest()
{
	return (Responsable_Quest);
}



FVector ACollectable_Actor_PR::Get_Responsible_Location()
{
	return (Responsable_Location);
}



void ACollectable_Actor_PR::Update_Interact_Widget(bool Open_Close)
{

	if (Open_Close)
	{
		Interact_Widget->Activate(true);
		Interact_Widget->bHiddenInGame = false;
	}
	else
	{
		Interact_Widget->bHiddenInGame = true;
	}

}






void ACollectable_Actor_PR::End_Quest()
{
	ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if (Temp_Player_Controler)
	{
		Temp_Player_Controler->Quest_System->Location_Complete(Responsable_Quest, Responsable_Location);

		this->Destroy();
	}

}