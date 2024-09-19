// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCharacter.h"
#include "PlayerCharacter.h"
#include "ZombieAnimInstanceRemake.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AZombieCharacter::AZombieCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
}

// Called when the game starts or when spawned
void AZombieCharacter::BeginPlay()
{
	Super::BeginPlay();
    
}

void AZombieCharacter::TakeDamage(float DamageTaken)
{
    if (HealthPoints > 0.0f)
    {
        HealthPoints -= DamageTaken;

        if (HealthPoints <= 0.0f)
        {
            Die();
        }
    }
}

void AZombieCharacter::Die()
{
    APlayerCharacter* PlayerCharacter = GetWorld()->GetFirstPlayerController()->GetPawn<APlayerCharacter>();
    PlayerCharacter->UpdatePoints();
    Destroy();
}

void AZombieCharacter::Attack()
{
    UZombieAnimInstanceRemake* ZombieAnimInstance = Cast<UZombieAnimInstanceRemake>(GetMesh()->GetAnimInstance());
    if (ZombieAnimInstance)
    {
        
        ZombieAnimInstance->bIsAttacking = true;

        APlayerCharacter* PlayerCharacter = GetWorld()->GetFirstPlayerController()->GetPawn<APlayerCharacter>();
        if (PlayerCharacter) {
            UE_LOG(LogTemp, Warning, TEXT("HIT"));
            PlayerCharacter->PlayerHealth -= DamageAmount;
            UE_LOG(LogTemp, Warning, TEXT("Player health: %f"), PlayerCharacter->PlayerHealth);
            if (PlayerCharacter->PlayerHealth < 0) {
                PlayerCharacter->IsDead();
            }
        }
        
    }
}

void AZombieCharacter::CheckProximity()
{

    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
        if (PlayerController)
        {
            APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(PlayerController->GetCharacter());
            if (PlayerCharacter) {

                float DistanceToPlayer = GetDistanceTo(PlayerCharacter);
                
                if (DistanceToPlayer <= AttackRange)
                {
                    Attack();

                }
                else {
                    UZombieAnimInstanceRemake* ZombieAnimInstance = Cast<UZombieAnimInstanceRemake>(GetMesh()->GetAnimInstance());
                    if (ZombieAnimInstance)
                    {
                      
                        ZombieAnimInstance->bIsAttacking = false;
                    }
                }
            }
        }
        
}

void AZombieCharacter::PlayGroanSound()
{
}


void AZombieCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    CheckProximity();
    
    
}



