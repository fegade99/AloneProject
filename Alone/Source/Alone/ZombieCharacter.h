// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Sound/SoundCue.h"
#include "ZombieCharacter.generated.h"

class USoundCue;

UCLASS()
class ALONE_API AZombieCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundCue* GroanSound;

public:
	// Sets default values for this character's properties
	AZombieCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	void Die();
	void Attack();
	void CheckProximity();

	void PlayGroanSound();

	void Tick(float DeltaTime);

	bool bPlayGroanSound = true;

public:	

	void TakeDamage(float DamageAmount);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	float HealthPoints = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float AttackRange = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float DamageAmount = 5.0f;

	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool bIsAttacking;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float AttackDelay = 5.0f;

};
