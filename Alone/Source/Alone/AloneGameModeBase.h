// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AloneGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ALONE_API AAloneGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	AAloneGameModeBase();

protected:

	TArray<class AAloneZombieSpawnPoint*> ZombieSpawnPoints;

	UPROPERTY(EditAnywhere, Category = "GameSettings")
	TSubclassOf<class AZombieCharacter> ZombieClass;

	FTimerHandle TZombieSpawnHandle;

protected:

	void SpawnZombie();

protected:
	virtual void BeginPlay() override;
};
