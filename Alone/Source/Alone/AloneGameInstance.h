// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AloneGameInstance.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FMapInfo {

	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString MapURL;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString MapName;
};

UCLASS()
class ALONE_API UAloneGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UAloneGameInstance();
};
