// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UPlayerAnimInstance::UpdateAnimationProperties(float Deltatime)
{
	//UE_LOG(LogTemp, Warning, TEXT("UpdateAniationProperties called"));
	//ensure(PlayerCharacter != nullptr);
	if (PlayerCharacter == nullptr) {
		PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());
	}
	else {
		FVector Velocity = PlayerCharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();

		bIsAir = PlayerCharacter->GetCharacterMovement()->IsFalling();

		if (PlayerCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.0f) {
			bIsAccelerating = true;
		}
		else {
			bIsAccelerating = false;
		}

		//UE_LOG(LogTemp, Warning, TEXT("Speed %f"), Speed);
		
	}
	
}

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	//UE_LOG(LogTemp, Warning, TEXT("NativeInitializeAnimation called"));
	Super::NativeInitializeAnimation();

	PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	UpdateAnimationProperties(DeltaTime);
}
