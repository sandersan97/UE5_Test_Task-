// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Quest_System_Component_PR.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Interact_Interface_PR.h"
#include "Components/WidgetComponent.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"
#include "Sound/SoundBase.h"
#include "NiagaraActor.h"
#include "NiagaraComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Town_Chalange_PR.generated.h"

UCLASS()
class UE5_TEST_TASK_API ATown_Chalange_PR : public AActor, public IInteract_Interface_PR
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATown_Chalange_PR();

	// Called every frame
	virtual void Tick(float DeltaTime) override;




	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		USceneComponent* Actor_Scene;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UStaticMeshComponent* Object_Mesh_Bottom = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UStaticMeshComponent* Object_Mesh_Center = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UStaticMeshComponent* Object_Mesh_Top = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UStaticMeshComponent* Object_Mesh_Upper_End = nullptr;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UWidgetComponent* Interact_Widget = nullptr;


	TMap<UStaticMeshComponent*, int> Current_Locators = { {Object_Mesh_Bottom, 1}, {Object_Mesh_Center, 6}, {Object_Mesh_Top, 2} };


	FTimeline Mesh_Moving_TimeLine;

	bool Is_In_Movement = false;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		UCurveFloat* FloatCurve_Move;// = ConstructorHelpers::FObjectFinder<UCurveFloat>(TEXT("/Game/TASK_Folder/Blueprints/Other/Town_Component_Move_Float")).Object;

	








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

	UFUNCTION()
		void Move_TimelineInProgress(float value);

	UFUNCTION()
		void Move_TimelineFinished();

	void Rotate_Once();

	void Puzzle_Verify();






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;













private:
	


	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		TArray<int>Locators_Numbers = {};	

	
	TMap<UStaticMeshComponent*, int> Locators_Request_List = { {Object_Mesh_Bottom, 1}, {Object_Mesh_Center, 1}, {Object_Mesh_Top, 1} };

	UPrimitiveComponent* Interacted_Component = nullptr;

	UStaticMeshComponent* Finded_Interacted_Mesh = nullptr;

	FRotator Mesh_Moving_Rotation = {};

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		FQuest_Data Responsable_Quest = FQuest_Data();

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		FVector Responsable_Location = {};

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
	ANiagaraActor* Light_To_Activate = nullptr;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		USoundBase* Moving_Sound;// = ConstructorHelpers::FObjectFinder<USoundBase>(TEXT("/Game/TASK_Folder/Sounds/Waves/Stone_Slide_Sound")).Object;



	void End_Quest();






};
