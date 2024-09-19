// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include <Kismet/GameplayStatics.h>
#include "Engine/SkeletalMeshSocket.h"
#include "ZombieCharacter.h"
#include "BulletActor.h"




// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent"); 
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(GetMesh(), "CameraSocket");
	CameraComponent->bUsePawnControlRotation = false;

	HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMesh"));
	HandMesh->SetupAttachment(GetMesh());

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	
	Muzzle = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle"));
	Muzzle->SetupAttachment(GetMesh());
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Orange, TEXT("PlayerCharacter"));

	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (!IsValid(PlayerController)) return;

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	if (!IsValid(Subsystem)) return;
	Subsystem->AddMappingContext(DefaultMappingContext, 0);

	Muzzle->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, "ShootSocket");
	WeaponMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, "WeaponHandSocket");
	World = GetWorld();
	
}

bool APlayerCharacter::CrosshairLocation(FHitResult& OutHitResult, FVector& OutHitLocation)
{
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport) {
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}
	FVector2D CrosshairLocation2D = FVector2D(ViewportSize.X / 2, ViewportSize.Y / 2);
	FVector CrosshairWorldLocation;
	FVector CrosshairWorldDirection;

	bool bScreenWorld = UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0), CrosshairLocation2D, CrosshairWorldLocation, CrosshairWorldDirection);
	if (bScreenWorld) {
		const FVector Start = CrosshairWorldLocation;
		const FVector End = Start + CrosshairWorldDirection * 20000.f;
		OutHitLocation = End;
		GetWorld()->LineTraceSingleByChannel(OutHitResult, Start, End, ECollisionChannel::ECC_Visibility);
		if (OutHitResult.bBlockingHit) {
			OutHitLocation = OutHitResult.Location;
			return true;
		}
	}
	return false;
}

void APlayerCharacter::UpdatePoints()
{
	Points += 10;
	UE_LOG(LogTemp, Warning, TEXT("Player score: %f"), Points);
}

void APlayerCharacter::IsDead()
{
	bPlayerDead = true;
	Destroy();
}

void APlayerCharacter::Shoot()
{
	if (FireSound)
	{
		UGameplayStatics::PlaySound2D(this, FireSound);
	}

	FireLine("ShootSocket");
}

void APlayerCharacter::FireLine(FName SocketName)
{
	const USkeletalMeshSocket* ShootSocket = GetMesh()->GetSocketByName(SocketName);
	if (World != NULL) {
		SpawnRotation = GetControlRotation();
		SpawnLocation = ((Muzzle != nullptr) ? Muzzle->GetComponentLocation() : 
			GetActorLocation());

		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		const FTransform ShootSocketTransform = ShootSocket->GetSocketTransform(GetMesh());
		World->SpawnActor<ABulletActor>(ProjectileClass.Get(), ShootSocketTransform);
	}
	
}


void APlayerCharacter::Move(const FInputActionValue& Value)
{
	
	FVector2d MovementVector = Value.Get<FVector2d>();
	if (!IsValid(Controller)) return;

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation = FRotator(0, Rotation.Yaw, 0);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(ForwardDirection, MovementVector.Y);
	AddMovementInput(RightDirection, MovementVector.X);
}

void APlayerCharacter::Look(const FInputActionValue& Value)
{
	
	FVector2d LookAxisVector = Value.Get<FVector2d>();
	if (!IsValid(Controller)) return;

	if (LookAxisVector.Y != 0.0f)
	{
		CurrentBodyPitch = FMath::ClampAngle(CurrentBodyPitch - LookAxisVector.Y, MinBodyPitch, MaxBodyPitch);
		FRotator BodyRotation = GetActorRotation();
		BodyRotation.Pitch = CurrentBodyPitch;
		SetActorRotation(BodyRotation);
	}

	if (LookAxisVector.Y != 0.0f)
	{
		FRotator CameraRotation = SpringArmComponent->GetComponentRotation();
		CameraRotation.Pitch = FMath::ClampAngle(CameraRotation.Pitch - LookAxisVector.Y, MinPitch, MaxPitch);
		SpringArmComponent->SetWorldRotation(CameraRotation);
	}

	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);

}

void APlayerCharacter::Jump(const FInputActionValue& Value)
{
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!IsValid(EnhancedInputComponent)) return;

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

	EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Shoot);

}

