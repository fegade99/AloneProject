// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAIController.h"
#include "GameFramework/Character.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

AZombieAIController::AZombieAIController()
{
}

void AZombieAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
}

void AZombieAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
    if (GetPawn() && GetPawn()->IsValidLowLevelFast())
    {
        ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

        if (PlayerCharacter)
        {
            FVector DirectionToPlayer = PlayerCharacter->GetActorLocation() - GetPawn()->GetActorLocation();
            DirectionToPlayer.Normalize();

            FRotator NewRotation = DirectionToPlayer.Rotation();
            NewRotation.Pitch = 0.f;
            GetPawn()->SetActorRotation(NewRotation);

            GetPawn()->AddMovementInput(DirectionToPlayer);
        }
    }
}
