// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Components/PrimitiveComponent.h"
#include "Quest_System_Component_PR.h"
#include "Interact_Interface_PR.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType, NotBlueprintable)
class UInteract_Interface_PR : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UE5_TEST_TASK_API IInteract_Interface_PR
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:



	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual void On_Item_Interacted(UPrimitiveComponent* Interacted_Mesh) = 0;

	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual void Set_Interacted_Component(UPrimitiveComponent* Interacted_Mesh) = 0;

	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual FQuest_Data Get_Responsible_Quest() = 0;

	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual FVector Get_Responsible_Location() = 0;

	UFUNCTION(BlueprintCallable, Category = "Interact_System")
		virtual void Update_Interact_Widget(bool Open_Close) = 0;





};
