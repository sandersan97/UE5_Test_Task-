// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quest_System_Component_PR.h"
#include "Player_HUD_PR.generated.h"

/**
 * 
 */
UCLASS()
class UE5_TEST_TASK_API UPlayer_HUD_PR : public UUserWidget
{
	GENERATED_BODY()


public:



	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		UQuest_System_Component_PR* Quest_Component_Ref = nullptr;


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Quest_System")
		void Start_Croshair_Move();


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Quest_System")
		void Show_Quest_Panel();




protected:








private:



	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Quest_System")
		FText Get_Quest_Name();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Quest_System")
		FText Get_Quest_Description();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Quest_System")
		FText Get_Quest_Numeric();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Quest_System")
		ESlateVisibility Get_Quest_Panel_Visibility();




	
};
