// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAnimInstanceRemake.h"
#include "ZombieCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UZombieAnimInstanceRemake::UpdateAnimationProperties(float Deltatime)
{
	//ensure(ZombieCharacter != nullptr);
	if (ZombieCharacter == nullptr) {
		ZombieCharacter = Cast<AZombieCharacter>(TryGetPawnOwner());
	}
	else {
		FVector Velocity = ZombieCharacter->GetVelocity();
		Velocity.Z = 0;
		ZombieSpeed = Velocity.Size();

		ZombiebIsAir = ZombieCharacter->GetCharacterMovement()->IsFalling();

		if (ZombieCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.0f) {
			ZombiebIsAccelerating = true;
		}
		else {
			ZombiebIsAccelerating = false;
		}

	}
}

void UZombieAnimInstanceRemake::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	ZombieCharacter = Cast<AZombieCharacter>(TryGetPawnOwner());
}

void UZombieAnimInstanceRemake::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	UpdateAnimationProperties(DeltaTime);
}
