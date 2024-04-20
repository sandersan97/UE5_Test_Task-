// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.



#include "Teleport_Leave_PR.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"






// Sets default values
ATeleport_Leave_PR::ATeleport_Leave_PR()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->SetActorTickInterval(0.01f);


	RootComponent = Actor_Scene;
	Actor_Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Actor_Scene"));
	Box_Colision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box_Colision"));
	Box_Colision->SetBoxExtent(FVector{0, 200, 145});
	Box_Colision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Box_Colision->PrimaryComponentTick.bCanEverTick = false;
	Box_Colision->SetComponentTickEnabled(false);

	Niagara_Component = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	Niagara_Component->PrimaryComponentTick.bCanEverTick = false;
	Niagara_Component->SetComponentTickEnabled(false);
	Niagara_Component->Deactivate();

	Niagara_Component->SetupAttachment(Actor_Scene);
	Box_Colision->SetupAttachment(Actor_Scene);



	Interact_Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Interact_Widget"));
	Interact_Widget->bAutoActivate = false;
	Interact_Widget->SetComponentTickEnabled(false);
	Interact_Widget->bHiddenInGame = true;
	Interact_Widget->SetupAttachment(Actor_Scene);

}






// Called when the game starts or when spawned
void ATeleport_Leave_PR::BeginPlay()
{
	Super::BeginPlay();

	//Here we set tags for actor and interactable component.
	this->Tags.Add("Quest_Obj");

	Player_Controller_Ref = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	
}







// Called every frame
void ATeleport_Leave_PR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Do_Once)
	{

		if (Player_Controller_Ref)
		{
			if (Responsable_Quest.Quest_ID == Player_Controller_Ref->Quest_System->Get_Current_Quest_Data().Quest_ID && Niagara_Particle_To_Spawn)
			{
				Do_Once = true;

				Box_Colision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
				Box_Colision->PrimaryComponentTick.bCanEverTick = true;
				Box_Colision->SetComponentTickEnabled(true);


				Niagara_Component->PrimaryComponentTick.bCanEverTick = true;
				Niagara_Component->SetComponentTickEnabled(true);
				Niagara_Component->Activate();
				Niagara_Component->SetAsset(Niagara_Particle_To_Spawn? Niagara_Particle_To_Spawn: nullptr);

				this->SetActorTickEnabled(false);

			}

		}
		else
		{
			ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

			if (Temp_Player_Controler)
			{
				if (Responsable_Quest.Quest_ID == Player_Controller_Ref->Quest_System->Get_Current_Quest_Data().Quest_ID && Niagara_Particle_To_Spawn)
				{
					Do_Once = true;

					Box_Colision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
					Box_Colision->PrimaryComponentTick.bCanEverTick = true;
					Box_Colision->SetComponentTickEnabled(true);


					Niagara_Component->PrimaryComponentTick.bCanEverTick = true;
					Niagara_Component->SetComponentTickEnabled(true);
					Niagara_Component->Activate();
					Niagara_Component->SetAsset(Niagara_Particle_To_Spawn ? Niagara_Particle_To_Spawn : nullptr);

					this->SetActorTickEnabled(false);

				}

			}

		}

	}

}





void ATeleport_Leave_PR::On_Item_Interacted(UPrimitiveComponent* Interacted_Mesh)
{
	if (this->Tags.Contains("Quest_Obj"))
	{
		if (Player_Controller_Ref)
		{
			if (Player_Controller_Ref->Quest_System)
			{

				if (Player_Controller_Ref->Quest_System->Current_Quest_Data.Quest_ID == Responsable_Quest.Quest_ID)
				{



				}

			}

		}
		else
		{
			ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

			if (Temp_Player_Controler && Temp_Player_Controler->Quest_System)
			{

				if (Temp_Player_Controler->Quest_System->Current_Quest_Data.Quest_ID == Responsable_Quest.Quest_ID)
				{



				}

			}

		}

	}
}





void ATeleport_Leave_PR::Set_Interacted_Component(UPrimitiveComponent* Interacted_Mesh)
{
}






void ATeleport_Leave_PR::Activate_Once()
{

		

}








FQuest_Data ATeleport_Leave_PR::Get_Responsible_Quest()
{
	return (Responsable_Quest);
}



FVector ATeleport_Leave_PR::Get_Responsible_Location()
{
	return (Responsable_Location);
}



void ATeleport_Leave_PR::Update_Interact_Widget(bool Open_Close)
{

	if (Open_Close)
	{
		Interact_Widget->Activate(true);
		Interact_Widget->bHiddenInGame = false;
		Interact_Widget->SetWorldLocation(this->GetActorLocation());
	}
	else
	{
		Interact_Widget->bHiddenInGame = true;
	}

}






void ATeleport_Leave_PR::End_Quest()
{
	ACustom_Player_Controller_PR* Temp_Player_Controler = Cast<ACustom_Player_Controller_PR>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if (Temp_Player_Controler)
	{
		Temp_Player_Controler->Quest_System->Location_Complete(Responsable_Quest, Responsable_Location);

		Update_Interact_Widget(false);
	}

}



