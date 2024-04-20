// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Custom_Player_Character_PR.generated.h"

UCLASS()
class UE5_TEST_TASK_API ACustom_Player_Character_PR : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACustom_Player_Character_PR();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
