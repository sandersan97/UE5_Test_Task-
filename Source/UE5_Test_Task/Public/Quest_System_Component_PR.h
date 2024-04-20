// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/SaveGame.h"
#include "Sound/SoundBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Quest_System_Component_PR.generated.h"




USTRUCT(BlueprintType)
struct FQuest_Data
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
	FString Quest_ID = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
	FString Quest_Description = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		TMap < FVector, bool > Quest_Locations = {};

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
	int Quest_Numeric_Conditions = 0;


};





USTRUCT(BlueprintType)
struct FQuest_Complete_Result
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
	bool IsSucces = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
	FQuest_Data Completed_Quest_Data = FQuest_Data();


};




DECLARE_DYNAMIC_DELEGATE_OneParam(FOn_Quest_Completed, FQuest_Complete_Result, Result);

DECLARE_DYNAMIC_DELEGATE_OneParam(FOn_Quest_Started, FQuest_Data, Started_Quest);



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE5_TEST_TASK_API UQuest_System_Component_PR : public UActorComponent
{
	GENERATED_BODY()

public:	

	// Sets default values for this component's properties
	UQuest_System_Component_PR();


	//---------------------------------------------- VARIABLES ---------------------------------------------------------------------------



	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
	FQuest_Data Current_Quest_Data = FQuest_Data();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		UUserWidget* Player_Hud_Ref = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
	FOn_Quest_Started On_Quest_Started_DL;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		FOn_Quest_Completed On_Quest_Completed_DL;


	USaveGame* Gameplay_Save_Ref = nullptr;




	//---------------------------------------------- FUNCTIONS ---------------------------------------------------------------------------


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Quest_System")
		FORCEINLINE FQuest_Data Get_Current_Quest_Data() { return(Current_Quest_Data); };

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Quest_System")
		FORCEINLINE TArray<FQuest_Data> Get_Quests_List() { return(Quests_List); };

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void On_Quest_Completed(FQuest_Complete_Result Result);

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void On_Quest_Started(FQuest_Data Result);

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void Set_Indicator_Component(UActorComponent* Indicator_Component);

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void Init_Current_Quest(FString Quest_ID, int Quest_Index = -1);

	bool Load_Game_Save();

	bool Save_Gameplay_Save();

	void Set_Player_Hud(UUserWidget* Player_Hud);

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
	void On_Quest_Location_Arrived(FVector Indicator_Location);

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void Location_Complete(FQuest_Data Quest_Responsable, FVector Indicator_Location);







protected:
	// Called when the game starts
	virtual void BeginPlay() override;







public:	



	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



	//---------------------------------------------- VARIABLES ---------------------------------------------------------------------------



	UPROPERTY(EditDefaultsOnly, Category = "Quest_System")
		TArray<FQuest_Data> Quests_List = {};

	UActorComponent* Indicator_Component_Ref = nullptr;

	USoundBase* Completed_Sound = ConstructorHelpers::FObjectFinder<USoundBase>(TEXT("/Game/TASK_Folder/Sounds/Waves/Quest_Completed_Sound")).Object;



	//---------------------------------------------- FUNCTIONS ---------------------------------------------------------------------------
	




		
};
