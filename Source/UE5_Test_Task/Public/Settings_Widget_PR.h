// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnhancedInputSubsystems.h"
#include "Settings_Widget_PR.generated.h"

/**
 * 
 */

UCLASS()
class UE5_TEST_TASK_API USettings_Widget_PR : public UUserWidget
{


	GENERATED_BODY()
	
		







public:




	//-----------------------  Binds  ------------------------------








	//-----------------------Variables------------------------------





	
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Binded Variables")
		TArray<FEnhancedActionKeyMapping> Active_In_Change_Inputs;





	//-----------------------  Functions  ------------------------------




	




protected:





	//-----------------------Variables------------------------------





	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Binded Variables")
		TArray<FEnhancedActionKeyMapping> Default_Inputs_Mappings;





	//-----------------------  Functions  ------------------------------











private:




	//-----------------------Variables------------------------------



	




	//-----------------------  Functions  ------------------------------




	










};