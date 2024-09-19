// Copyright Epic Games, Inc. All Rights Reserved.


#include "AloneGameModeBase.h"
#include "PlayerCharacter.h"
#include "ZombieCharacter.h"
#include "PlayerHUD.h"
#include "AloneZombieSpawnPoint.h"
#include "TimerManager.h"
#include <Kismet/GameplayStatics.h>

AAloneGameModeBase::AAloneGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClass(TEXT("/Game/Blueprints/BP_PlayerCharacter"));
	if(PlayerPawnClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnClass.Class;
	}
	HUDClass = APlayerHUD::StaticClass();
}

void AAloneGameModeBase::SpawnZombie()
{
	int RandomIndex = FMath::RandRange(0, ZombieSpawnPoints.Num() - 1);
	if (AAloneZombieSpawnPoint* SpawnPoint = ZombieSpawnPoints[RandomIndex]) {

		FVector Location = SpawnPoint->GetActorLocation();
		FRotator Rotation = SpawnPoint->GetActorRotation();
		if (AZombieCharacter* Zombie = GetWorld()->SpawnActor<AZombieCharacter>(ZombieClass, Location, Rotation)) {
			UE_LOG(LogTemp, Warning, TEXT("Zombie Spawning"));
		}
	}
}

void AAloneGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> TempActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAloneZombieSpawnPoint::StaticClass(), TempActors);
	
	for (AActor* Actor : TempActors) {
		if (AAloneZombieSpawnPoint* SpawnPoint = Cast<AAloneZombieSpawnPoint>(Actor))
		{
			ZombieSpawnPoints.Add(SpawnPoint);
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("ZombieSpawns: %d"), ZombieSpawnPoints.Num());


	if (ZombieSpawnPoints.Num() > 0) {
		GetWorld()->GetTimerManager().SetTimer(TZombieSpawnHandle, this, &AAloneGameModeBase::SpawnZombie, 1.0f, true);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No ZombieSpawnPoints found. Ensure you have instances in the level."));
	}
}
