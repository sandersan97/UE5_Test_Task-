// All Copyright are reserved by Sandarsan Cornet from 2024, created for Midnight_Works for Task_Test, all users of this project have only right for learning purpose and don't have right of modify, send, sold or any other rights.


#include "Custom_Player_Character_PR.h"

// Sets default values
ACustom_Player_Character_PR::ACustom_Player_Character_PR()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustom_Player_Character_PR::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustom_Player_Character_PR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACustom_Player_Character_PR::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

