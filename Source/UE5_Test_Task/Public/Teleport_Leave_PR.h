// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Quest_System_Component_PR.h"
#include "Components/PrimitiveComponent.h"
#include "Interact_Interface_PR.h"
#include "Components/WidgetComponent.h"
#include "Components/BoxComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundAttenuation.h"
#include "UObject/ConstructorHelpers.h"
#include "Custom_Player_Controller_PR.h"
#include "Teleport_Leave_PR.generated.h"

UCLASS()
class UE5_TEST_TASK_API ATeleport_Leave_PR : public AActor, public IInteract_Interface_PR
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATeleport_Leave_PR();


	// Called every frame
	virtual void Tick(float DeltaTime) override;





	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		USceneComponent* Actor_Scene;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UBoxComponent* Box_Colision = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UNiagaraComponent* Niagara_Component = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UWidgetComponent* Interact_Widget = nullptr;













	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual void On_Item_Interacted(UPrimitiveComponent* Interacted_Mesh) override;

	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual void Set_Interacted_Component(UPrimitiveComponent* Interacted_Mesh) override;

	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual FQuest_Data Get_Responsible_Quest() override;

	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual FVector Get_Responsible_Location() override;

	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual void Update_Interact_Widget(bool Open_Close) override;

	void Activate_Once();







protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;













private:




	ACustom_Player_Controller_PR* Player_Controller_Ref = nullptr;

	bool Do_Once = false;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		FQuest_Data Responsable_Quest = FQuest_Data();

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		FVector Responsable_Location = {};

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		USoundBase* Activation_Sound; // = ConstructorHelpers::FObjectFinder<USoundBase>(TEXT("/Game/TASK_Folder/Sounds/Waves/UI_Button_Hover")).Object;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		USoundAttenuation* Sound_Atenuation; // = ConstructorHelpers::FObjectFinder<USoundAttenuation>(TEXT("/Game/TASK_Folder/Sounds/Little_Distance_Sound_Attenuation")).Object;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		UNiagaraSystem* Niagara_Particle_To_Spawn; // = ConstructorHelpers::FObjectFinder<UNiagaraSystem>(TEXT("/Game/TASK_Folder/Effects/Magic_Portal_Effet")).Object;



	void End_Quest();












};

