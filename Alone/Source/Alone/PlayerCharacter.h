// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include <EnhancedInputLibrary.h>
#include "Sound/SoundCue.h"
#include <Components/TimelineComponent.h>
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class USkeletalMeshComponent;
class USceneComponent;
class USoundCue;
class UTSubclassOf;

UCLASS()
class ALONE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* HandMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	USceneComponent* Muzzle;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* JumpAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* ShootAction;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundCue* FireSound;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Visual", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* Impact;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<class ABulletActor> ProjectileClass;

	
private:

	UPROPERTY(EditAnywhere, Category = "Character", meta = (ClampMin = "-90.0", ClampMax = "90.0"))
	float MinBodyPitch = -70.0f;

	UPROPERTY(EditAnywhere, Category = "Character", meta = (ClampMin = "-90.0", ClampMax = "90.0"))
	float MaxBodyPitch = 70.0f;

	UPROPERTY(EditAnywhere, Category = "Character", meta = (ClampMin = "-90.0", ClampMax = "90.0"))
	float MinPitch = -70.0f;

	UPROPERTY(EditAnywhere, Category = "Character", meta = (ClampMin = "-90.0", ClampMax = "90.0"))
	float MaxPitch = 70.0f;

	float CurrentBodyPitch = 0.0f;

	void FireLine(FName SocketName);
	
	class UWorld* World;

	FRotator SpawnRotation;
	FVector SpawnLocation;


public:
	// Sets default values for this character's properties
	APlayerCharacter();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	float PlayerHealth = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "State")
	bool bPlayerDead = false;

	void UpdatePoints();
	void IsDead();

protected:

	bool CrosshairLocation(FHitResult& OutHitResult, FVector& OutHitLocation);
	
	
	void Shoot();

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Jump(const FInputActionValue& Value);

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character Attributes")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Score")
	float Points;
};
