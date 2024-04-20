// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Quest_System_Component_PR.h"
#include "Game_Save_PR.generated.h"



/**
 * 
 */



USTRUCT(BlueprintType)
struct FGameplay_Details
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		FTransform Player_Transform = FTransform();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		FQuest_Data Current_Quest_Data = FQuest_Data();



};




UCLASS()
class UE5_TEST_TASK_API UGame_Save_PR : public USaveGame
{
	GENERATED_BODY()
	


public:




	

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void Save_Quest(FQuest_Data Current_Quest);

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void Save_Player_Transform(FTransform Current_Player_Transform);

	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void Save_Gameplay();


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Quest_System")
		FORCEINLINE FGameplay_Details Get_Gameplay_Save() { return(Current_Gameplay_Data); };


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		TArray<FString> Activated_Obelisc_List = {};

	




protected:



	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		FGameplay_Details Current_Gameplay_Data = FGameplay_Details();


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		FQuest_Data Current_Quest_Data = FQuest_Data();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		FTransform Player_Transform = FTransform();

	




private:





	






};
