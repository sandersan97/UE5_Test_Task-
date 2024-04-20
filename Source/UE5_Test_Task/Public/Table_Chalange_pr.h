// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Quest_System_Component_PR.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Interact_Interface_PR.h"
#include "Components/WidgetComponent.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundAttenuation.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SplineComponent.h"
#include "NiagaraActor.h"
#include "NiagaraComponent.h"
#include "Table_Chalange_pr.generated.h"

UCLASS()
class UE5_TEST_TASK_API ATable_Chalange_pr : public AActor, public IInteract_Interface_PR
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	ATable_Chalange_pr();


	// Called every frame
	virtual void Tick(float DeltaTime) override;





	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		USceneComponent* Actor_Scene;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		USplineComponent* Spline_Base = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
	TArray<UStaticMeshComponent*> Spawned_Meshes = {};


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		UWidgetComponent* Interact_Widget = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interact_System")
		bool First_Second_Types = false;


	TArray<FString> Current_Locators = {};












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

	void Reset_Locators_Periodicity_Status(FString Ignore_Locator_Tag);

	void Activate_Periodicity();

	void Activate_Once();

	void Puzzle_Verify();







protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;













private:	




	FTimerHandle Long_Periodicity = FTimerHandle();
	FTimerHandle Short_Periodicity = FTimerHandle();

	
	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
	TArray<FString> Locators_Request_List = {};

	UPrimitiveComponent* Interacted_Component = nullptr;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		FQuest_Data Responsable_Quest = FQuest_Data();

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		FVector Responsable_Location = {};

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		ANiagaraActor* Light_To_Activate = nullptr;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
		USoundBase* Activation_Sound;// = ConstructorHelpers::FObjectFinder<USoundBase>(TEXT("/Game/TASK_Folder/Sounds/Waves/UI_Button_Hover")).Object;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
	USoundBase* DeActivation_Sound;// = ConstructorHelpers::FObjectFinder<USoundBase>(TEXT("/Game/TASK_Folder/Sounds/Waves/UI_Menu_Msg_Error")).Object;

	UPROPERTY(EditInstanceOnly, Category = "Quest_System")
	USoundAttenuation* Sound_Atenuation;// = ConstructorHelpers::FObjectFinder<USoundAttenuation>(TEXT("/Game/TASK_Folder/Sounds/Little_Distance_Sound_Attenuation")).Object;



	void End_Quest();










	

};
