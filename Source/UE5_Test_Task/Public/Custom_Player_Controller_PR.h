// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Quest_System_Component_PR.h"
#include "UMPI_ScreenIndicator_Component.h"
#include "Player_HUD_PR.h"
#include "Custom_Player_Controller_PR.generated.h"

/**
 * 
 */
UCLASS()
class UE5_TEST_TASK_API ACustom_Player_Controller_PR : public APlayerController
{
	GENERATED_BODY()
	

		ACustom_Player_Controller_PR();


public:



	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		UPlayer_HUD_PR* Gameplay_Hud_Widget_Reference = nullptr;




	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Quest_System")
		UQuest_System_Component_PR* Quest_System = nullptr;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Indicator_System")
		UUMPI_ScreenIndicator_Component* Indicator_System = nullptr;


	UFUNCTION(BlueprintCallable, Category = "Quest_System")
		void Set_Player_Hud(UPlayer_HUD_PR* Player_Hud);





protected:








private:




	
	




};
